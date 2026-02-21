/*
    Ariori Protocol: Gen 1 Seed Visualizer
    ---------------------------------------
    Renders the complete Gen 1 Vesica lattice with all construction points.
*/

use eframe::egui;
use num_bigint::BigInt;
use num_integer::Integer;
use num_traits::{One, Signed, Zero};
use std::collections::{HashMap, HashSet};
use std::ops::{Add, Div, Mul, Neg, Sub};

const EPSILON: f64 = 1e-12;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct VesicaNumber {
    pub a: BigInt, // (a + b*sqrt(3)) / d
    pub b: BigInt,
    pub d: BigInt,
}

impl VesicaNumber {
    pub fn new(a: BigInt, b: BigInt, d: BigInt) -> Self {
        let mut n = Self { a, b, d };
        n.simplify();
        n
    }

    pub fn from_i64(a: i64) -> Self {
        Self::new(BigInt::from(a), BigInt::zero(), BigInt::one())
    }

    pub fn simplify(&mut self) {
        if self.d.is_zero() {
            return;
        }
        if self.d.is_negative() {
            self.a = -&self.a;
            self.b = -&self.b;
            self.d = -&self.d;
        }
        let g = self.a.gcd(&self.b).gcd(&self.d);
        if !g.is_one() && !g.is_zero() {
            self.a /= &g;
            self.b /= &g;
            self.d /= g;
        }
    }

    pub fn to_f64(&self) -> f64 {
        let a_f = self.a.to_string().parse::<f64>().unwrap_or(0.0);
        let b_f = self.b.to_string().parse::<f64>().unwrap_or(0.0);
        let d_f = self.d.to_string().parse::<f64>().unwrap_or(1.0);
        (a_f + b_f * 3.0f64.sqrt()) / d_f
    }

    pub fn sqrt_3() -> Self {
        Self::new(BigInt::zero(), BigInt::one(), BigInt::one())
    }

    pub fn squared(&self) -> Self {
        let a_sq = &self.a * &self.a;
        let b_sq = &self.b * &self.b;
        let two_ab = BigInt::from(2) * &self.a * &self.b;
        let d_sq = &self.d * &self.d;
        Self::new(a_sq + BigInt::from(3) * b_sq, two_ab, d_sq)
    }

    pub fn vesica_sqrt(&self) -> Option<Self> {
        let big_a = &self.a * &self.d;
        let big_b = &self.b * &self.d;

        if big_b.is_zero() {
            let target = &self.a * &self.d;
            if target.is_negative() {
                return None;
            }
            let root = target.sqrt();
            if &root * &root == target {
                return Some(Self::new(root, BigInt::zero(), self.d.clone()));
            }
            let three = BigInt::from(3);
            if &target % &three == BigInt::zero() {
                let div3 = &target / &three;
                let root_div3 = div3.sqrt();
                if &root_div3 * &root_div3 == div3 {
                    return Some(Self::new(BigInt::zero(), root_div3, self.d.clone()));
                }
            }
            return None;
        }

        let k_sq = &big_a * &big_a - BigInt::from(3) * &big_b * &big_b;
        if k_sq.is_negative() {
            return None;
        }
        let k = k_sq.sqrt();
        if &k * &k != k_sq {
            return None;
        }

        let candidates = [(&big_a + &k), (&big_a - &k)];
        for val in candidates {
            if val.is_negative() {
                continue;
            }
            let target = BigInt::from(2) * val;
            let root_2x = target.sqrt();
            if &root_2x * &root_2x != target {
                continue;
            }

            let x_num = root_2x;
            if x_num.is_zero() {
                continue;
            }
            let x_den = BigInt::from(2);
            let y_num = &big_b * &x_den;
            let y_den = &x_num * BigInt::from(2);

            let res_a = &x_num * &y_den;
            let res_b = &y_num * &x_den;
            let res_d = &x_den * &y_den * &self.d;
            let res = Self::new(res_a, res_b, res_d);
            if res.is_negative() {
                return Some(-res);
            } else {
                return Some(res);
            }
        }
        None
    }

    pub fn is_negative(&self) -> bool {
        self.cmp(&Self::zero()) == std::cmp::Ordering::Less
    }

    pub fn abs(&self) -> Self {
        if self.is_negative() {
            -self.clone()
        } else {
            self.clone()
        }
    }

    pub fn format_exact(&self) -> String {
        if self.b.is_zero() {
            if self.d.is_one() {
                format!("{}", self.a)
            } else {
                format!("{}/{}", self.a, self.d)
            }
        } else {
            let b_str = if self.b.is_one() {
                "sqrt(3)".to_string()
            } else if self.b == BigInt::from(-1) {
                "-sqrt(3)".to_string()
            } else {
                format!("{}*sqrt(3)", self.b)
            };
            if self.a.is_zero() {
                if self.d.is_one() {
                    b_str
                } else {
                    format!("({})/{}", b_str, self.d)
                }
            } else {
                if self.d.is_one() {
                    format!("({} + {})", self.a, b_str)
                } else {
                    format!("({} + {})/{}", self.a, b_str, self.d)
                }
            }
        }
    }
}

impl Add for VesicaNumber {
    type Output = Self;
    fn add(self, rhs: Self) -> Self {
        let a = &self.a * &rhs.d + &rhs.a * &self.d;
        let b = &self.b * &rhs.d + &rhs.b * &self.d;
        let d = &self.d * &rhs.d;
        Self::new(a, b, d)
    }
}

impl Sub for VesicaNumber {
    type Output = Self;
    fn sub(self, rhs: Self) -> Self {
        let a = &self.a * &rhs.d - &rhs.a * &self.d;
        let b = &self.b * &rhs.d - &rhs.b * &self.d;
        let d = &self.d * &rhs.d;
        Self::new(a, b, d)
    }
}

impl Mul for VesicaNumber {
    type Output = Self;
    fn mul(self, rhs: Self) -> Self {
        let a = &self.a * &rhs.a + BigInt::from(3) * &self.b * &rhs.b;
        let b = &self.a * &rhs.b + &self.b * &rhs.a;
        let d = &self.d * &rhs.d;
        Self::new(a, b, d)
    }
}

impl Div for VesicaNumber {
    type Output = Self;
    fn div(self, rhs: Self) -> Self {
        let denom_part = &rhs.a * &rhs.a - BigInt::from(3) * &rhs.b * &rhs.b;
        let a = &self.a * &rhs.a - BigInt::from(3) * &self.b * &rhs.b;
        let b = &self.b * &rhs.a - &self.a * &rhs.b;
        let res_a = a * &rhs.d;
        let res_b = b * &rhs.d;
        let res_d = denom_part * &self.d;
        Self::new(res_a, res_b, res_d)
    }
}

impl Neg for VesicaNumber {
    type Output = Self;
    fn neg(self) -> Self {
        Self::new(-self.a, -self.b, self.d)
    }
}

impl From<i64> for VesicaNumber {
    fn from(val: i64) -> Self {
        VesicaNumber::from_i64(val)
    }
}

impl Zero for VesicaNumber {
    fn zero() -> Self {
        VesicaNumber::from_i64(0)
    }
    fn is_zero(&self) -> bool {
        self.a.is_zero() && self.b.is_zero()
    }
}

impl One for VesicaNumber {
    fn one() -> Self {
        VesicaNumber::from_i64(1)
    }
}

impl PartialOrd for VesicaNumber {
    fn partial_cmp(&self, other: &Self) -> Option<std::cmp::Ordering> {
        Some(self.cmp(other))
    }
}

impl Ord for VesicaNumber {
    fn cmp(&self, other: &Self) -> std::cmp::Ordering {
        let a = &self.a * &other.d - &other.a * &self.d;
        let b = &self.b * &other.d - &other.b * &self.d;

        if b.is_zero() {
            return a.cmp(&BigInt::zero());
        }
        if a.is_zero() {
            return b.cmp(&BigInt::zero());
        }

        let a_neg = a.is_negative();
        let b_neg = b.is_negative();

        match (a_neg, b_neg) {
            (false, false) => std::cmp::Ordering::Greater,
            (true, true) => std::cmp::Ordering::Less,
            (false, true) => {
                // A > 0, B < 0. Compare A with -B*sqrt(3)
                let a_sq = &a * &a;
                let b_sq_3 = BigInt::from(3) * &b * &b;
                a_sq.cmp(&b_sq_3)
            }
            (true, false) => {
                // A < 0, B > 0. Compare -A with B*sqrt(3)
                let a_sq = &a * &a;
                let b_sq_3 = BigInt::from(3) * &b * &b;
                b_sq_3.cmp(&a_sq)
            }
        }
    }
}

impl VesicaNumber {
    pub fn min(self, other: Self) -> Self {
        if self < other {
            self
        } else {
            other
        }
    }

    pub fn max(self, other: Self) -> Self {
        if self > other {
            self
        } else {
            other
        }
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct Point {
    pub x: VesicaNumber,
    pub y: VesicaNumber,
}

impl Point {
    fn new(x: VesicaNumber, y: VesicaNumber) -> Self {
        Self { x, y }
    }

    fn from_scaled_i64(x: i64, y: i64) -> Self {
        Self::new(VesicaNumber::from(x), VesicaNumber::from(y))
    }

    fn distance_sq(&self, other: &Point) -> VesicaNumber {
        let dx = self.x.clone() - other.x.clone();
        let dy = self.y.clone() - other.y.clone();
        dx.squared() + dy.squared()
    }

    fn key(&self) -> (String, String) {
        (self.x.format_exact(), self.y.format_exact())
    }

    fn is_on_infinite_line(&self, a: &Point, b: &Point) -> bool {
        // (y - y1)(x2 - x1) = (y2 - y1)(x - x1)
        let term1 = (self.y.clone() - a.y.clone()) * (b.x.clone() - a.x.clone());
        let term2 = (b.y.clone() - a.y.clone()) * (self.x.clone() - a.x.clone());
        term1 == term2
    }

    fn is_on_segment(&self, a: &Point, b: &Point) -> bool {
        if !self.is_on_infinite_line(a, b) {
            return false;
        }
        let min_x = a.x.clone().min(b.x.clone());
        let max_x = a.x.clone().max(b.x.clone());
        let min_y = a.y.clone().min(b.y.clone());
        let max_y = a.y.clone().max(b.y.clone());
        self.x >= min_x && self.x <= max_x && self.y >= min_y && self.y <= max_y
    }
}

pub struct Line {
    pub p1: Point,
    pub p2: Point,
}

impl Line {
    fn intersect(&self, other: &Line) -> Option<Point> {
        let x1 = self.p1.x.clone();
        let y1 = self.p1.y.clone();
        let x2 = self.p2.x.clone();
        let y2 = self.p2.y.clone();
        let x3 = other.p1.x.clone();
        let y3 = other.p1.y.clone();
        let x4 = other.p2.x.clone();
        let y4 = other.p2.y.clone();
        let denom = (x1.clone() - x2.clone()) * (y3.clone() - y4.clone())
            - (y1.clone() - y2.clone()) * (x3.clone() - x4.clone());
        if denom.a.is_zero() && denom.b.is_zero() {
            return None;
        }
        let term1 = x1.clone() * y2.clone() - y1.clone() * x2.clone();
        let term2 = x3.clone() * y4.clone() - y3.clone() * x4.clone();
        let num_x =
            term1.clone() * (x3.clone() - x4.clone()) - (x1.clone() - x2.clone()) * term2.clone();
        let num_y = term1 * (y3.clone() - y4.clone()) - (y1.clone() - y2.clone()) * term2;
        Some(Point {
            x: num_x / denom.clone(),
            y: num_y / denom,
        })
    }
}

#[derive(Clone, Copy, PartialEq, Eq, Debug)]
enum CircleKind {
    Primary,
    ConstructionArc,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
enum LineType {
    Axis = 0,
    ScaffP1P3 = 1,
    ScaffP5P2 = 2,
    ScaffC1C3 = 3,
    ScaffC4C2 = 4,
    ScaffP4C2 = 5,
    ScaffP6C4 = 6,
    EdgeKL = 7,
    EdgeLN = 8,
    EdgeNM = 9,
    EdgeMK = 10,
}

impl LineType {
    fn as_str(&self) -> &'static str {
        match self {
            LineType::Axis => "Axis",
            LineType::ScaffP1P3 => "Scaff_P1-P3",
            LineType::ScaffP5P2 => "Scaff_P5-P2",
            LineType::ScaffC1C3 => "Scaff_C1-C3",
            LineType::ScaffC4C2 => "Scaff_C4-C2",
            LineType::ScaffP4C2 => "Scaff_P4-C2",
            LineType::ScaffP6C4 => "Scaff_P6-C4",
            LineType::EdgeKL => "Edge_K-L",
            LineType::EdgeLN => "Edge_L-N",
            LineType::EdgeNM => "Edge_N-M",
            LineType::EdgeMK => "Edge_M-K",
        }
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
enum PointType {
    A = 0,
    B = 1,
    K = 2,
    L = 3,
    M = 4,
    N = 5,
    S = 6,
    T = 7,
    Bot = 8,
}

impl PointType {
    fn as_str(&self) -> &'static str {
        match self {
            PointType::A => "A",
            PointType::B => "B",
            PointType::K => "K",
            PointType::L => "L",
            PointType::M => "M",
            PointType::N => "N",
            PointType::S => "S",
            PointType::T => "Top",
            PointType::Bot => "Bot",
        }
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum LatentPointKind {
    LatentLatent, // LX
    LatentAtomic, // LCX, LCAX
}

#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum LatentRatioType {
    PureLatent,
    PureAtomic,          // Overlap but NO latent instances (hidden)
    Mixed(usize, usize), // (LatentCount, AtomicCount)
}

#[derive(Clone, Debug)]
pub struct LatentPoint {
    pub pt: Point,
    pub label: String,
    pub kind: LatentPointKind,
    pub parents: Vec<(Point, Point)>, // The lines that formed this point
}

#[derive(Clone, Debug)]
enum PointLabel {
    Seed(usize, PointType),                         // seed_id, type
    Intersection(usize, LineType, usize, LineType), // (seed_a, type_a, seed_b, type_b)
    Latent(String),                                 // latent intersection label
}

fn resolve_label(label: &PointLabel) -> String {
    match label {
        PointLabel::Seed(seed_id, pt_type) => {
            let (gen, ratio_idx, ins_idx) = decode_seed(*seed_id);
            if gen == 1 {
                return pt_type.as_str().to_string(); // Gen 1 seeds are just "A"/"B"
            }
            format!("G{}_{}_{}_{}", gen, ratio_idx, ins_idx, pt_type.as_str())
        }
        PointLabel::Intersection(sa, ta, sb, tb) => {
            let la = resolve_line_label(*sa, *ta);
            let lb = resolve_line_label(*sb, *tb);
            format!("X[{} ^ {}]", la, lb)
        }
        PointLabel::Latent(label) => label.clone(),
    }
}

fn resolve_line_label(seed_id: usize, l_type: LineType) -> String {
    let (gen, ratio_idx, ins_idx) = decode_seed(seed_id);
    if gen == 1 {
        // Gen 1 special case
        if l_type == LineType::Axis {
            return "Gen1_Axis".to_string();
        }
        return format!("Gen1_{}", l_type.as_str());
    }
    // Standard format: G{Gen}_{Ratio}_{Ins}_{Type}
    // But wait, the original logic for Axis was complicated?
    // "G{}_{}_{}_Axis"
    // And for Scaffolding: "{}_Scaff_..." where prefix was "G{}_{}_{}" or ""

    // Prefix logic:
    let prefix = format!("G{}_{}_{}", gen, ratio_idx, ins_idx);

    if l_type == LineType::Axis {
        format!("{}_Axis", prefix)
    } else {
        format!("{}_{}", prefix, l_type.as_str())
    }
}

fn decode_seed(seed_id: usize) -> (usize, usize, usize) {
    if seed_id == 0 {
        return (1, 0, 0);
    } // Gen 1 special
    let gen = seed_id / 100000;
    let rem = seed_id % 100000;
    let ratio_idx = rem / 1000;
    let ins_idx = rem % 1000;
    (gen, ratio_idx, ins_idx)
}

#[derive(Clone, Debug)]
struct Circle {
    center: Point,
    radius: VesicaNumber,
    label: String,
    source_ratio_idx: Option<usize>,
    source_instance_idx: Option<usize>,
    kind: CircleKind,
}

#[derive(Debug, Clone)]
struct SquareConstruction {
    label: String,
    p1: Point,
    p2: Point,
    p3: Point,
    p4: Point,
    p5: Point,
    p6: Point,
    c1: Point,
    c2: Point,
    c3: Point,
    c4: Point,
    k: Point,
    l: Point,
    m: Point,
    n: Point,
    s: Point, // Center
    // Radial intersections with edges (Optional, might fall outside segment)
    r_kl: Option<Point>,
    r_ln: Option<Point>,
    r_nm: Option<Point>,
    r_mk: Option<Point>,

    radius: VesicaNumber,
    source_ratio_idx: Option<usize>,
    source_instance_idx: Option<usize>,
}

fn intersect_circles(
    c1: Point,
    r1: VesicaNumber,
    c2: Point,
    r2: VesicaNumber,
) -> Option<(Point, Point)> {
    let dx = c2.x.clone() - c1.x.clone();
    let dy = c2.y.clone() - c1.y.clone();
    let d_sq = dx.clone().squared() + dy.clone().squared();

    // a = (r1^2 - r2^2 + d^2) / (2d)
    // h = sqrt(r1^2 - a^2)
    // To avoid sqrt(d) until the very end, we work with d_sq.
    let r1_sq = r1.clone().squared();
    let r2_sq = r2.clone().squared();

    // a * d = (r1^2 - r2^2 + d^2) / 2
    let ad = (r1_sq.clone() - r2_sq + d_sq.clone()) / VesicaNumber::from(2);

    // h^2 * d_sq = r1^2 * d_sq - (ad)^2
    let h2_d2 = r1_sq * d_sq.clone() - ad.clone().squared();

    if h2_d2.to_f64() < -1e-10 {
        return None;
    }

    let hd = h2_d2.vesica_sqrt()?;

    // x2 = c1.x + a * (dx/d) = c1.x + (ad*dx)/d_sq
    let x2 = c1.x.clone() + (ad.clone() * dx.clone()) / d_sq.clone();
    let y2 = c1.y.clone() + (ad * dy.clone()) / d_sq.clone();

    Some((
        Point::new(
            x2.clone() + (hd.clone() * dy.clone()) / d_sq.clone(),
            y2.clone() - (hd.clone() * dx.clone()) / d_sq.clone(),
        ),
        Point::new(x2 - (hd.clone() * dy) / d_sq.clone(), y2 + (hd * dx) / d_sq),
    ))
}

fn farther_from(a: Point, b: Point, ref_pt: Point) -> Point {
    let da = a.distance_sq(&ref_pt);
    let db = b.distance_sq(&ref_pt);
    if da.to_f64() > db.to_f64() {
        a
    } else {
        b
    }
}

fn line_circle_intersection(p1: Point, p2: Point, c: Point, r: VesicaNumber) -> (Point, Point) {
    let dx = p2.x.clone() - p1.x.clone();
    let dy = p2.y.clone() - p1.y.clone();
    let d_sq = dx.clone().squared() + dy.clone().squared();

    let fx = p1.x.clone() - c.x.clone();
    let fy = p1.y.clone() - c.y.clone();

    // Quadratic: at^2 + bt + c = 0 where t is scaling factor along (dx, dy)
    // a = d_sq
    // b = 2 * (fx*dx + fy*dy)
    // c = fx^2 + fy^2 - r^2
    let a = d_sq.clone();
    let b = VesicaNumber::from(2) * (fx.clone() * dx.clone() + fy.clone() * dy.clone());
    let quad_c = fx.squared() + fy.squared() - r.squared();

    let disc = b.clone().squared() - VesicaNumber::from(4) * a.clone() * quad_c;
    let root_disc = disc
        .vesica_sqrt()
        .expect("Line must intersect circle in this lattice");

    let t1 = ((-b.clone()) - root_disc.clone()) / (VesicaNumber::from(2) * a.clone());
    let t2 = ((-b) + root_disc) / (VesicaNumber::from(2) * a);

    (
        Point::new(
            p1.x.clone() + t1.clone() * dx.clone(),
            p1.y.clone() + t1 * dy.clone(),
        ),
        Point::new(
            p1.x.clone() + t2.clone() * dx.clone(),
            p1.y.clone() + t2 * dy.clone(),
        ),
    )
}

fn line_intersect(a1: Point, a2: Point, b1: Point, b2: Point) -> Point {
    Line::new(a1, a2)
        .intersect(&Line::new(b1, b2))
        .expect("Lines must intersect")
}

impl Line {
    fn new(p1: Point, p2: Point) -> Self {
        Self { p1, p2 }
    }
}

fn extend_line(a: Point, b: Point, ext: VesicaNumber) -> (Point, Point) {
    let dx = b.x.clone() - a.x.clone();
    let dy = b.y.clone() - a.y.clone();
    let d_sq = dx.clone().squared() + dy.clone().squared();
    let d = d_sq
        .vesica_sqrt()
        .expect("Distance must be exact in this lattice");

    let ux = dx / d.clone();
    let uy = dy / d;

    (
        Point::new(
            a.x.clone() - ux.clone() * ext.clone(),
            a.y.clone() - uy.clone() * ext.clone(),
        ),
        Point::new(b.x.clone() + ux * ext.clone(), b.y.clone() + uy * ext),
    )
}

fn derive_square(
    o: Point,
    p: Point,
    r: VesicaNumber,
    label: &str,
    source_ratio_idx: Option<usize>,
) -> SquareConstruction {
    let (p1, p2) = intersect_circles(o.clone(), r.clone(), p.clone(), r.clone())
        .expect("Circles must intersect");

    let p1_arcs_a =
        intersect_circles(p1.clone(), r.clone(), o.clone(), r.clone()).expect("Arc from P1 to A");
    let p3 = farther_from(p1_arcs_a.0, p1_arcs_a.1, p.clone());
    let p1_arcs_b =
        intersect_circles(p1.clone(), r.clone(), p.clone(), r.clone()).expect("Arc from P1 to B");
    let p4 = farther_from(p1_arcs_b.0, p1_arcs_b.1, o.clone());

    let p2_arcs_a =
        intersect_circles(p2.clone(), r.clone(), o.clone(), r.clone()).expect("Arc from P2 to A");
    let p5 = farther_from(p2_arcs_a.0, p2_arcs_a.1, p.clone());
    let p2_arcs_b =
        intersect_circles(p2.clone(), r.clone(), p.clone(), r.clone()).expect("Arc from P2 to B");
    let p6 = farther_from(p2_arcs_b.0, p2_arcs_b.1, o.clone());

    let (c1, c2) = line_circle_intersection(p4.clone(), o.clone(), o.clone(), r.clone());
    let (c3, c4) = line_circle_intersection(p6.clone(), o.clone(), o.clone(), r.clone());

    let k = line_intersect(p1.clone(), p3.clone(), c4.clone(), c2.clone());
    let l = line_intersect(p1.clone(), p3.clone(), c1.clone(), c3.clone());
    let m = line_intersect(p5.clone(), p2.clone(), c4.clone(), c2.clone());
    let n = line_intersect(p5.clone(), p2.clone(), c1.clone(), c3.clone());

    // S = Center intersection (K-N intersects L-M, or just the radial intersection)
    let s = line_intersect(k.clone(), n.clone(), l.clone(), m.clone());

    // Radial Intersections with Square Edges
    // Radials are (P4, C2) and (P6, C4) extended
    // Edges are KL (top/bot), LN (right), NM (top/bot), MK (left)
    let check_intersect = |p1, p2, edge_a: &Point, edge_b: &Point| {
        let p = line_intersect(p1, p2, edge_a.clone(), edge_b.clone());
        if p.is_on_segment(edge_a, edge_b) {
            Some(p)
        } else {
            None
        }
    };

    let r_kl = check_intersect(p4.clone(), c2.clone(), &k, &l);
    let r_nm = check_intersect(p4.clone(), c2.clone(), &n, &m);
    let r_ln = check_intersect(p6.clone(), c4.clone(), &l, &n);
    let r_mk = check_intersect(p6.clone(), c4.clone(), &m, &k);

    SquareConstruction {
        label: label.to_string(),
        p1,
        p2,
        p3,
        p4,
        p5,
        p6,
        c1,
        c2,
        c3,
        c4,
        k,
        l,
        m,
        n,
        s,
        r_kl,
        r_ln,
        r_nm,
        r_mk,
        radius: r,
        source_ratio_idx,
        source_instance_idx: None, // Will be set during recursive manifest
    }
}

struct Gen1Seed {
    circles: Vec<Circle>,
    arcs: Vec<Circle>,
    squares: Vec<SquareConstruction>,
    all_points: Vec<(Point, PointLabel, usize, usize)>,
    unique_ratios: Vec<(VesicaNumber, VesicaNumber)>, // (Ratio, Length)
    ratio_pairs: Vec<Vec<(usize, usize)>>,
    frequencies: Vec<usize>,
    lines: Vec<(Point, Point, LineType, usize, usize)>,
    data_log: String,
    generation: usize,
    parent_ratios: Vec<(VesicaNumber, VesicaNumber, usize)>, // (Ratio, Length, Freq)
    parent_instances: Vec<Vec<(Point, Point)>>,
    point_map: HashMap<(String, String), (Point, PointLabel, usize, usize, usize)>,
    hub_angles: HashMap<(String, String), HashSet<String>>, // Angles also exact? For now sticking to label sets
    latent_ratios: Vec<(VesicaNumber, VesicaNumber)>,
    latent_pairs: Vec<Vec<(usize, usize)>>,
    latent_frequencies: Vec<usize>,
    latent_lines: Vec<(Point, Point, usize, usize, String)>,
    latent_new_points: Vec<LatentPoint>,
    latent_new_ratios: Vec<(VesicaNumber, VesicaNumber)>,
    latent_new_frequencies: Vec<usize>,
    latent_ratio_types: Vec<LatentRatioType>,
    latent_mixed_pairs: Vec<Vec<(usize, usize)>>,
    latent_latent_pairs: Vec<Vec<(usize, usize)>>,
}

impl Gen1Seed {
    fn new(r_val: f64, max_gen: usize) -> Self {
        let r = VesicaNumber::new(BigInt::from(r_val as i64), BigInt::zero(), BigInt::one());
        let mut s = Self {
            circles: Vec::new(),
            arcs: Vec::new(),
            squares: Vec::new(),
            all_points: Vec::new(),
            unique_ratios: Vec::new(),
            ratio_pairs: Vec::new(),
            frequencies: Vec::new(),
            lines: Vec::new(),
            data_log: String::new(),
            generation: 1,
            parent_ratios: Vec::new(),
            parent_instances: Vec::new(),
            point_map: HashMap::new(),
            hub_angles: HashMap::new(),
            latent_ratios: Vec::new(),
            latent_pairs: Vec::new(),
            latent_frequencies: Vec::new(),
            latent_lines: Vec::new(),
            latent_new_points: Vec::new(),
            latent_new_ratios: Vec::new(),
            latent_new_frequencies: Vec::new(),
            latent_ratio_types: Vec::new(),
            latent_mixed_pairs: Vec::new(),
            latent_latent_pairs: Vec::new(),
        };

        // 1. Generation 1 Base
        let o = Point::new(0.into(), 0.into());
        let p = Point::new(r.clone(), 0.into());
        s.lines.push((o.clone(), p.clone(), LineType::Axis, 1, 0));

        s.point_map.insert(
            o.key(),
            (o.clone(), PointLabel::Seed(0, PointType::A), 1, 0, 1),
        );
        s.point_map.insert(
            p.key(),
            (p.clone(), PointLabel::Seed(0, PointType::B), 1, 0, 1),
        );

        Self::manifest_generation(
            o,
            p,
            r.clone(),
            1,
            None,
            None,
            &mut s.circles,
            &mut s.arcs,
            &mut s.squares,
            &mut s.point_map,
            &mut s.lines,
            0,
        );

        // 2. Recursive Expansion
        if max_gen > 1 {
            // Processing loop for each generation depth
            for g in 1..max_gen {
                if g == 3 {
                    s.lines.reserve(20_000_000); // Massive pre-allocation for Gen 4
                }
                // In-place analysis instead of cloning to save GBs of RAM
                s.generation = g;
                s.run_global_analysis(r.clone());

                // Collect parent data if it's the first time seeing these ratios for the GUI
                if g == 1 {
                    for i in 0..s.unique_ratios.len() {
                        s.parent_ratios.push((
                            s.unique_ratios[i].0.clone(),
                            s.unique_ratios[i].1.clone(),
                            s.frequencies[i],
                        ));
                        // Populate instances for UI highlighting
                        let mut instances = Vec::new();
                        for &(a_idx, b_idx) in &s.ratio_pairs[i] {
                            instances.push((
                                s.all_points[a_idx].0.clone(),
                                s.all_points[b_idx].0.clone(),
                            ));
                        }
                        s.parent_instances.push(instances);
                    }
                }

                println!(
                    "Generation {} analysis: found {} unique ratios.",
                    g,
                    s.unique_ratios.len()
                );

                // Spawn CHILDREN for generation G+1
                let old_line_count = s.lines.len();
                let unique_ratios = s.unique_ratios.clone(); // Small temporary clone of just the ratio metadata
                let ratio_pairs = s.ratio_pairs.clone(); // Small temporary clone of pairs

                for i in 0..unique_ratios.len() {
                    let ratio = &unique_ratios[i].0;
                    if ratio.is_zero() {
                        continue;
                    }
                    let new_r = ratio.clone() * r.clone();

                    for (ins_idx, &(a_idx, b_idx)) in ratio_pairs[i].iter().enumerate() {
                        let p_a = s.all_points[a_idx].0.clone();
                        let p_b = s.all_points[b_idx].0.clone();

                        // SeedID encodes Generation (high bits) and indexing
                        let seed_id = ((g + 1) * 100000) + (i * 1000) + ins_idx;

                        s.lines
                            .push((p_a.clone(), p_b.clone(), LineType::Axis, g + 1, seed_id));

                        Self::manifest_generation(
                            p_a.clone(),
                            p_b.clone(),
                            new_r.clone(),
                            g + 1,
                            Some(i),
                            Some(ins_idx),
                            &mut s.circles,
                            &mut s.arcs,
                            &mut s.squares,
                            &mut s.point_map,
                            &mut s.lines,
                            seed_id,
                        );

                        s.point_map.insert(
                            p_a.key(),
                            (
                                p_a,
                                PointLabel::Seed(seed_id, PointType::A),
                                g + 1,
                                seed_id,
                                1,
                            ),
                        );
                        s.point_map.insert(
                            p_b.key(),
                            (
                                p_b,
                                PointLabel::Seed(seed_id, PointType::B),
                                g + 1,
                                seed_id,
                                1,
                            ),
                        );
                    }
                }
                println!(
                    "Spawned Generation {} children. Total lines now: {}",
                    g + 1,
                    s.lines.len()
                );
                if s.lines.len() == old_line_count {
                    println!("Warning: No children spawned for Generation {}", g + 1);
                    break;
                }
            }
        }

        s.generation = max_gen;
        s.run_global_analysis(r.clone());
        if s.generation == 1 {
            s.run_latent_analysis(r.clone());
        }
        s.finalize_data(r.to_f64());
        s
    }

    fn manifest_generation(
        o: Point,
        p: Point,
        r: VesicaNumber,
        gen: usize,
        source_ratio_idx: Option<usize>,
        source_instance_idx: Option<usize>,
        circles: &mut Vec<Circle>,
        arcs: &mut Vec<Circle>,
        squares: &mut Vec<SquareConstruction>,
        _point_map: &mut HashMap<(String, String), (Point, PointLabel, usize, usize, usize)>,
        lines: &mut Vec<(Point, Point, LineType, usize, usize)>,
        seed_id: usize,
    ) {
        let prefix = if gen == 1 {
            "".to_string()
        } else {
            format!("G{}_", gen)
        };

        circles.push(Circle {
            center: o.clone(),
            radius: r.clone(),
            label: format!("{}A", prefix),
            source_ratio_idx,
            source_instance_idx,
            kind: CircleKind::Primary,
        });
        circles.push(Circle {
            center: p.clone(),
            radius: r.clone(),
            label: format!("{}B", prefix),
            source_ratio_idx,
            source_instance_idx,
            kind: CircleKind::Primary,
        });

        if let Some((t, bot)) = intersect_circles(o.clone(), r.clone(), p.clone(), r.clone()) {
            circles.push(Circle {
                center: t.clone(),
                radius: r.clone(),
                label: format!("{}T", prefix),
                source_ratio_idx,
                source_instance_idx,
                kind: CircleKind::Primary,
            });
            circles.push(Circle {
                center: bot.clone(),
                radius: r.clone(),
                label: format!("{}Bot", prefix),
                source_ratio_idx,
                source_instance_idx,
                kind: CircleKind::Primary,
            });

            _point_map.insert(
                t.key(),
                (t, PointLabel::Seed(seed_id, PointType::T), gen, seed_id, 1),
            );
            _point_map.insert(
                bot.key(),
                (
                    bot,
                    PointLabel::Seed(seed_id, PointType::Bot),
                    gen,
                    seed_id,
                    1,
                ),
            );
        }

        let pairs = vec![
            (o.clone(), p.clone(), format!("{}A-B", prefix)),
            (p.clone(), o.clone(), format!("{}B-A", prefix)),
        ];
        for (a_pt, b_pt, label) in pairs {
            let mut sq = derive_square(a_pt, b_pt, r.clone(), &label, source_ratio_idx);
            sq.source_instance_idx = source_instance_idx;

            arcs.push(Circle {
                center: sq.p1.clone(),
                radius: r.clone(),
                label: format!("{}_C1", label),
                source_ratio_idx,
                source_instance_idx,
                kind: CircleKind::ConstructionArc,
            });
            arcs.push(Circle {
                center: sq.p2.clone(),
                radius: r.clone(),
                label: format!("{}_C2", label),
                source_ratio_idx,
                source_instance_idx,
                kind: CircleKind::ConstructionArc,
            });

            /* Record all construction lines for global intersection analysis (Strict segments) */
            /* Record all construction lines for global intersection analysis (Strict segments) */
            // Granular Naming for Scaffolding
            // 0: (p1, p3), 1: (p5, p2), 2: (c1, c3), 3: (c4, c2), 4: (p4, c2), 5: (p6, c4)
            lines.push((
                sq.p1.clone(),
                sq.p3.clone(),
                LineType::ScaffP1P3,
                gen,
                seed_id,
            ));
            lines.push((
                sq.p5.clone(),
                sq.p2.clone(),
                LineType::ScaffP5P2,
                gen,
                seed_id,
            ));
            lines.push((
                sq.c1.clone(),
                sq.c3.clone(),
                LineType::ScaffC1C3,
                gen,
                seed_id,
            ));
            lines.push((
                sq.c4.clone(),
                sq.c2.clone(),
                LineType::ScaffC4C2,
                gen,
                seed_id,
            ));
            lines.push((
                sq.p4.clone(),
                sq.c2.clone(),
                LineType::ScaffP4C2,
                gen,
                seed_id,
            ));
            lines.push((
                sq.p6.clone(),
                sq.c4.clone(),
                LineType::ScaffP6C4,
                gen,
                seed_id,
            ));

            lines.push((sq.k.clone(), sq.l.clone(), LineType::EdgeKL, gen, seed_id));
            lines.push((sq.l.clone(), sq.n.clone(), LineType::EdgeLN, gen, seed_id));
            lines.push((sq.n.clone(), sq.m.clone(), LineType::EdgeNM, gen, seed_id));
            lines.push((sq.m.clone(), sq.k.clone(), LineType::EdgeMK, gen, seed_id));

            // Explicitly register critical vertices to point_map with SeedID
            _point_map.insert(
                sq.k.key(),
                (
                    sq.k.clone(),
                    PointLabel::Seed(seed_id, PointType::K),
                    gen,
                    seed_id,
                    1,
                ),
            );
            _point_map.insert(
                sq.l.key(),
                (
                    sq.l.clone(),
                    PointLabel::Seed(seed_id, PointType::L),
                    gen,
                    seed_id,
                    1,
                ),
            );
            _point_map.insert(
                sq.m.key(),
                (
                    sq.m.clone(),
                    PointLabel::Seed(seed_id, PointType::M),
                    gen,
                    seed_id,
                    1,
                ),
            );
            _point_map.insert(
                sq.n.key(),
                (
                    sq.n.clone(),
                    PointLabel::Seed(seed_id, PointType::N),
                    gen,
                    seed_id,
                    1,
                ),
            );
            _point_map.insert(
                sq.s.key(),
                (
                    sq.s.clone(),
                    PointLabel::Seed(seed_id, PointType::S),
                    gen,
                    seed_id,
                    1,
                ),
            );

            squares.push(sq);
        }
    }

    fn run_global_analysis(&mut self, r: VesicaNumber) {
        let mut debug_log = String::new();
        debug_log.push_str("=== INTERSECTION DEBUG LOG ===\n");

        let target_gen = self.generation;
        let mut unique_lines: Vec<(Point, Point, LineType, usize, usize)> = Vec::new();
        let mut line_keys = HashSet::new();

        for (p1, p2, l_type, gen, seed_id) in &self.lines {
            if *gen > target_gen {
                continue;
            }
            let mut a = p1.clone();
            let mut b = p2.clone();
            if a.key() > b.key() {
                std::mem::swap(&mut a, &mut b);
            }
            let key = (a.key(), b.key());
            if line_keys.insert(key) {
                unique_lines.push((a, b, *l_type, *gen, *seed_id));
            }
        }

        println!(
            "Analyzing gen {} intersections for {} unique lines...",
            target_gen,
            unique_lines.len()
        );

        let mut intersections = Vec::new();
        for i in 0..unique_lines.len() {
            for j in i + 1..unique_lines.len() {
                let (a1, a2, la, gen_a, seed_id_a) = &unique_lines[i];
                let (b1, b2, lb, gen_b, seed_id_b) = &unique_lines[j];

                if *gen_a < target_gen && *gen_b < target_gen {
                    continue;
                }

                if let Some(ix) =
                    Line::new(a1.clone(), a2.clone()).intersect(&Line::new(b1.clone(), b2.clone()))
                {
                    if ix.is_on_segment(a1, a2) && ix.is_on_segment(b1, b2) {
                        intersections.push((
                            ix,
                            *seed_id_a,
                            *la,
                            *seed_id_b,
                            *lb,
                            *gen_a.max(gen_b),
                        ));
                    }
                }
            }
        }

        for (ix, seed_a, la, seed_b, lb, gen) in intersections {
            let key = ix.key();
            let is_axis_pair = la == LineType::Axis || lb == LineType::Axis;

            self.point_map.entry(key.clone()).or_insert((
                ix,
                PointLabel::Intersection(seed_a, la, seed_b, lb),
                gen,
                seed_a,
                0,
            ));

            if !is_axis_pair {
                let angles = self.hub_angles.entry(key).or_insert_with(HashSet::new);
                // We'll use a string representation of the line for frequency instead of f64 angles
                let line_a = resolve_line_label(seed_a, la);
                let line_b = resolve_line_label(seed_b, lb);
                angles.insert(line_a);
                angles.insert(line_b);
            }
        }

        for (key, lines_at_hub) in &self.hub_angles {
            if let Some(entry) = self.point_map.get_mut(key) {
                entry.4 = lines_at_hub.len();
            }
        }

        self.all_points = self
            .point_map
            .values()
            .filter(|(_, _, gen, _, _)| *gen <= target_gen)
            .map(|(pt, label, _, seed_id, freq)| (pt.clone(), label.clone(), *seed_id, *freq))
            .collect();

        self.all_points
            .sort_by(|a, b| a.0.x.cmp(&b.0.x).then(a.0.y.cmp(&b.0.y)));

        // Spectrum construction
        let mut pairs = HashSet::new();
        let generators: Vec<(Point, Point)> = self
            .lines
            .iter()
            .filter(|(_, _, _, gen, _)| *gen == target_gen)
            .map(|(a, b, _, _, _)| (a.clone(), b.clone()))
            .collect();

        for (ps, pe) in generators {
            let mut on_line = Vec::new();
            for (idx, (pt, _, _, _)) in self.all_points.iter().enumerate() {
                if pt.is_on_segment(&ps, &pe) {
                    on_line.push(idx);
                }
            }
            on_line.sort_by(|&a, &b| {
                self.all_points[a]
                    .0
                    .distance_sq(&ps)
                    .cmp(&self.all_points[b].0.distance_sq(&ps))
            });
            for w in on_line.windows(2) {
                let mut a = w[0];
                let mut b = w[1];
                if a > b {
                    std::mem::swap(&mut a, &mut b);
                }
                pairs.insert((a, b));
            }
        }

        let mut ratio_map: HashMap<String, usize> = HashMap::new();
        self.unique_ratios.clear();
        self.ratio_pairs.clear();
        self.frequencies.clear();

        for (i, j) in pairs {
            let dist_sq = self.all_points[i].0.distance_sq(&self.all_points[j].0);
            let sqrt_opt = dist_sq.vesica_sqrt();
            if let Some(dist) = sqrt_opt {
                let ratio = dist.clone() / r.clone();
                if ratio.to_f64() < 1e-10 {
                    continue;
                }
                let key = ratio.format_exact();
                if let Some(&idx) = ratio_map.get(&key) {
                    self.ratio_pairs[idx].push((i, j));
                    self.frequencies[idx] += 1;
                } else {
                    ratio_map.insert(key, self.unique_ratios.len());
                    self.unique_ratios.push((ratio, dist));
                    self.ratio_pairs.push(vec![(i, j)]);
                    self.frequencies.push(1);
                }
            }
        }

        let mut indices: Vec<usize> = (0..self.unique_ratios.len()).collect();
        indices.sort_by(|&a, &b| self.unique_ratios[a].0.cmp(&self.unique_ratios[b].0));

        let old_ratios = self.unique_ratios.clone();
        let old_pairs = self.ratio_pairs.clone();
        let old_freqs = self.frequencies.clone();

        self.unique_ratios = indices.iter().map(|&i| old_ratios[i].clone()).collect();
        self.ratio_pairs = indices.iter().map(|&i| old_pairs[i].clone()).collect();
        self.frequencies = indices.iter().map(|&i| old_freqs[i]).collect();
    }

    fn finalize_data(&mut self, _r: f64) {
        let mut output = String::new();
        output.push_str(&format!(
            "=== THE ATOMIC SPECTRUM (Gen {} - Strict) ===\n",
            self.generation
        ));
        output.push_str("Index  Ratio (L/r)     Length          Freq\n");
        output.push_str("--------------------------------------------\n");
        for (i, (ratio, len)) in self.unique_ratios.iter().enumerate() {
            output.push_str(&format!(
                "{:<6} {:<35} {:<35} x{}\n",
                i + 1,
                ratio.format_exact(),
                len.format_exact(),
                self.frequencies[i]
            ));
        }
        output.push_str(&format!(
            "\n[STATS]\nSquares: {}\nPoints: {}\nUnique Ratios: {}\n",
            self.squares.len(),
            self.all_points.len(),
            self.unique_ratios.len()
        ));

        std::fs::write("gen1_atomic_ratios.txt", &output).expect("Failed stats");

        let mut out = format!(
            "=== ARIORI GEN {} SEED (STRICT) - DATA LOG ===\n\n",
            self.generation
        );

        // --- NUMERICAL TEST: Scaffolding / Edge Ratio ---
        let mut total_scaff_len = VesicaNumber::zero();
        let mut total_edge_len = VesicaNumber::zero();
        let target_gen = self.generation;

        for (p1, p2, l_type, gen, _) in &self.lines {
            if *gen != target_gen {
                continue;
            }
            let dist_sq = p1.distance_sq(p2);
            if let Some(dist) = dist_sq.vesica_sqrt() {
                match l_type {
                    LineType::EdgeKL | LineType::EdgeLN | LineType::EdgeNM | LineType::EdgeMK => {
                        total_edge_len = total_edge_len + dist;
                    }
                    LineType::ScaffP1P3
                    | LineType::ScaffP5P2
                    | LineType::ScaffC1C3
                    | LineType::ScaffC4C2
                    | LineType::ScaffP4C2
                    | LineType::ScaffP6C4 => {
                        total_scaff_len = total_scaff_len + dist;
                    }
                    _ => {}
                }
            }
        }

        out.push_str("--- ALGEBRAIC TEST ---\n");
        out.push_str(&format!(
            "Total Scaffolding Length: {}\n",
            total_scaff_len.format_exact()
        ));
        out.push_str(&format!(
            "Total Square Edge Length: {}\n",
            total_edge_len.format_exact()
        ));
        if !total_edge_len.is_zero() {
            let ratio_test = total_scaff_len / total_edge_len;
            out.push_str(&format!(
                "Ratio (Scaff / Edge):   {} ({:.12})\n\n",
                ratio_test.format_exact(),
                ratio_test.to_f64()
            ));
        }

        let mut unique_primary = HashSet::new();
        for c in &self.circles {
            unique_primary.insert((c.center.key(), c.radius.format_exact()));
        }
        let mut unique_arcs = HashSet::new();
        for a in &self.arcs {
            unique_arcs.insert((a.center.key(), a.radius.format_exact()));
        }

        out.push_str(&format!("Primary Circles: {}\n", unique_primary.len()));
        out.push_str(&format!("Unique Arcs: {}\n", unique_arcs.len()));
        out.push_str(&format!("Total Squares: {}\n", self.squares.len()));
        out.push_str(&format!("Total Points: {}\n\n", self.all_points.len()));

        out.push_str("--- ATOMIC SPECTRUM ---\n");
        out.push_str(&output);

        // Append the frequency report collected during analysis
        out.push_str("\n--- GEOMETRIC ANALYSIS ---\n");
        out.push_str(&self.data_log);

        // --- LATENT SPECTRUM OUTPUT ---
        if !self.latent_ratios.is_empty() {
            let mut latent_out = String::new();
            latent_out.push_str(&format!(
                "\n--- LATENT SPECTRUM (Gen {}) ---\n",
                self.generation
            ));
            latent_out.push_str(&format!(
                "Total Latent Ratios: {} (from {} point pairs)\n",
                self.latent_ratios.len(),
                self.latent_lines.len()
            ));
            latent_out.push_str(&format!(
                "Atomic Overlap: {} latent ratios coincide with atomic ratios\n",
                self.latent_ratio_types
                    .iter()
                    .filter(|t| matches!(t, LatentRatioType::PureAtomic))
                    .count()
            ));
            latent_out.push_str(&format!(
                "New Intersection Points (from latent lines): {}\n\n",
                self.latent_new_points.len()
            ));

            // Build construction line segments for checking atomic status
            let _construction_lines: Vec<(Point, Point)> = self
                .lines
                .iter()
                .filter(|(_, _, _, gen, _)| *gen <= self.generation)
                .map(|(a, b, _, _, _)| (a.clone(), b.clone()))
                .collect();

            latent_out.push_str("Index  Ratio (L/r)                         Length                              Freq   Type               \n");
            latent_out.push_str("---------------------------------------------------------------------------------------------------------\n");

            let mut display_idx = 0usize;

            for (i, (ratio, len)) in self.latent_ratios.iter().enumerate() {
                let type_info = &self.latent_ratio_types[i];
                match type_info {
                    LatentRatioType::PureAtomic => {
                        continue;
                    }
                    LatentRatioType::PureLatent => {
                        display_idx += 1;
                        let freq = self.latent_frequencies[i];
                        latent_out.push_str(&format!(
                            "{:<6} {:<35} {:<35} x{:<6} Pure Latent\n",
                            display_idx,
                            ratio.format_exact(),
                            len.format_exact(),
                            freq
                        ));
                    }
                    LatentRatioType::Mixed(l_count, a_count) => {
                        display_idx += 1;
                        let freq = self.latent_frequencies[i];
                        latent_out.push_str(&format!(
                            "{:<6} {:<35} {:<35} x{:<6} Mixed ({}L/{}A)\n",
                            display_idx,
                            ratio.format_exact(),
                            len.format_exact(),
                            freq,
                            l_count,
                            a_count
                        ));
                    }
                }
            }

            if !self.latent_new_points.is_empty() {
                latent_out.push_str(&format!(
                    "\n--- LATENT INTERSECTION POINTS ({}) ---\n",
                    self.latent_new_points.len()
                ));
                for (i, l_pt) in self.latent_new_points.iter().enumerate() {
                    latent_out.push_str(&format!(
                        "{}: {} at ({}, {})\n",
                        i + 1,
                        l_pt.label,
                        l_pt.pt.x.format_exact(),
                        l_pt.pt.y.format_exact()
                    ));
                }
            }

            if !self.latent_new_ratios.is_empty() {
                latent_out.push_str(&format!(
                    "\n--- NEW RATIOS FROM LATENT INTERSECTIONS ({}) ---\n",
                    self.latent_new_ratios.len()
                ));
                latent_out.push_str("Index  Ratio (L/r)                         Length                              Freq\n");
                latent_out.push_str("--------------------------------------------------------------------------------------\n");
                for (i, (ratio, len)) in self.latent_new_ratios.iter().enumerate() {
                    latent_out.push_str(&format!(
                        "{:<6} {:<35} {:<35} x{}\n",
                        i + 1,
                        ratio.format_exact(),
                        len.format_exact(),
                        self.latent_new_frequencies[i]
                    ));
                }
            }

            out.push_str(&latent_out);
            std::fs::write("gen1_latent_spectrum.txt", &latent_out).expect("Failed latent");
        }

        std::fs::write("gen1_full_data.txt", &out).expect("Failed full");
        self.data_log = out;
    }

    fn run_latent_analysis(&mut self, r: VesicaNumber) {
        println!(
            "Computing latent spectrum for {} points...",
            self.all_points.len()
        );

        self.latent_ratios.clear();
        self.latent_pairs.clear();
        self.latent_frequencies.clear();
        self.latent_lines.clear();
        self.latent_new_points.clear();
        self.latent_new_ratios.clear();
        self.latent_new_frequencies.clear();
        self.latent_ratio_types.clear();
        self.latent_mixed_pairs.clear();
        self.latent_latent_pairs.clear();

        let n_pts = self.all_points.len();
        if n_pts < 2 {
            return;
        }

        let mut ratio_map: HashMap<String, usize> = HashMap::new();
        for i in 0..n_pts {
            for j in (i + 1)..n_pts {
                let dist_sq = self.all_points[i].0.distance_sq(&self.all_points[j].0);
                if let Some(dist) = dist_sq.vesica_sqrt() {
                    let ratio = dist.clone() / r.clone();
                    if ratio.to_f64() < 1e-10 {
                        continue;
                    }
                    let key = ratio.format_exact();

                    if let Some(&idx) = ratio_map.get(&key) {
                        self.latent_pairs[idx].push((i, j));
                        self.latent_frequencies[idx] += 1;
                    } else {
                        ratio_map.insert(key, self.latent_ratios.len());
                        self.latent_ratios.push((ratio, dist));
                        self.latent_pairs.push(vec![(i, j)]);
                        self.latent_frequencies.push(1);
                    }
                }
            }
        }

        let mut indices: Vec<usize> = (0..self.latent_ratios.len()).collect();
        indices.sort_by(|&a, &b| self.latent_ratios[a].0.cmp(&self.latent_ratios[b].0));

        let old_ratios = self.latent_ratios.clone();
        let old_pairs = self.latent_pairs.clone();
        let old_freqs = self.latent_frequencies.clone();

        self.latent_ratios = indices.iter().map(|&i| old_ratios[i].clone()).collect();
        self.latent_pairs = indices.iter().map(|&i| old_pairs[i].clone()).collect();
        self.latent_frequencies = indices.iter().map(|&i| old_freqs[i]).collect();

        for (ratio_idx, pairs) in self.latent_pairs.iter().enumerate() {
            for (ins_idx, &(a, b)) in pairs.iter().enumerate() {
                let label = format!("L-R{}.{}", ratio_idx + 1, ins_idx + 1);
                self.latent_lines.push((
                    self.all_points[a].0.clone(),
                    self.all_points[b].0.clone(),
                    a,
                    b,
                    label,
                ));
            }
        }

        self.latent_ratio_types = vec![LatentRatioType::PureLatent; self.latent_ratios.len()];
        let atomic_keys: HashSet<String> = self
            .unique_ratios
            .iter()
            .map(|(ratio, _)| ratio.format_exact())
            .collect();

        for (i, (ratio, _)) in self.latent_ratios.iter().enumerate() {
            if atomic_keys.contains(&ratio.format_exact()) {
                self.latent_ratio_types[i] = LatentRatioType::PureAtomic;
            }
        }

        let mut temp_point_data: HashMap<String, (Point, Vec<(Point, Point)>, Vec<String>)> =
            HashMap::new();

        if self.generation == 1 {
            println!(
                "Computing latent x latent intersections ({} lines)...",
                self.latent_lines.len()
            );
            for i in 0..self.latent_lines.len() {
                for j in i + 1..self.latent_lines.len() {
                    let (a1, a2, _, _, la) = &self.latent_lines[i];
                    let (b1, b2, _, _, lb) = &self.latent_lines[j];

                    if let Some(ix) = Line::new(a1.clone(), a2.clone())
                        .intersect(&Line::new(b1.clone(), b2.clone()))
                    {
                        if ix.is_on_segment(a1, a2) && ix.is_on_segment(b1, b2) {
                            let key = ix.key();
                            let pkey = key.0.clone() + &key.1;
                            if self.point_map.contains_key(&key) {
                                continue;
                            }

                            let entry =
                                temp_point_data
                                    .entry(pkey)
                                    .or_insert((ix, Vec::new(), Vec::new()));
                            entry.1.push((a1.clone(), a2.clone()));
                            entry.1.push((b1.clone(), b2.clone()));
                            entry.2.push(format!("LX[{} ^ {}]", la, lb));
                        }
                    }
                }
            }
        }

        let target_gen = self.generation;
        let construction_lines: Vec<(Point, Point)> = self
            .lines
            .iter()
            .filter(|(_, _, _, gen, _)| *gen <= target_gen)
            .map(|(a, b, _, _, _)| (a.clone(), b.clone()))
            .collect();

        for (a1, a2, _, _, l_label) in &self.latent_lines {
            for (con_a, con_b) in &construction_lines {
                if let Some(ix) = Line::new(a1.clone(), a2.clone())
                    .intersect(&Line::new(con_a.clone(), con_b.clone()))
                {
                    if ix.is_on_segment(a1, a2) && ix.is_on_segment(con_a, con_b) {
                        let key = ix.key();
                        let pkey = key.0.clone() + &key.1;
                        if self.point_map.contains_key(&key) {
                            continue;
                        }

                        let entry =
                            temp_point_data
                                .entry(pkey)
                                .or_insert((ix, Vec::new(), Vec::new()));
                        entry.1.push((a1.clone(), a2.clone()));
                        entry.2.push(format!("LCX[{} ^ Atomic]", l_label));
                    }
                }
            }
        }

        for (_, (pt, parents, labels)) in temp_point_data {
            let mut unique_labels = labels;
            unique_labels.sort();
            unique_labels.dedup();
            self.latent_new_points.push(LatentPoint {
                pt,
                label: unique_labels.join(", "),
                kind: LatentPointKind::LatentLatent,
                parents,
            });
        }

        let mut new_ratio_map: HashMap<String, usize> = HashMap::new();
        for i in 0..self.latent_new_points.len() {
            for j in 0..self.all_points.len() {
                let dist_sq = self.latent_new_points[i]
                    .pt
                    .distance_sq(&self.all_points[j].0);
                if let Some(dist) = dist_sq.vesica_sqrt() {
                    let ratio = dist.clone() / r.clone();
                    if ratio.to_f64() < 1e-10 {
                        continue;
                    }
                    let key = ratio.format_exact();

                    if let Some(&idx) = new_ratio_map.get(&key) {
                        self.latent_new_frequencies[idx] += 1;
                    } else {
                        new_ratio_map.insert(key, self.latent_new_ratios.len());
                        self.latent_new_ratios.push((ratio, dist));
                        self.latent_new_frequencies.push(1);
                    }
                }
            }
        }

        let mut indices: Vec<usize> = (0..self.latent_new_ratios.len()).collect();
        indices.sort_by(|&a, &b| {
            self.latent_new_ratios[a]
                .0
                .cmp(&self.latent_new_ratios[b].0)
        });

        let old_ratios = self.latent_new_ratios.clone();
        let old_freqs = self.latent_new_frequencies.clone();

        self.latent_new_ratios = indices.iter().map(|&i| old_ratios[i].clone()).collect();
        self.latent_new_frequencies = indices.iter().map(|&i| old_freqs[i]).collect();
    }
}

struct App {
    seed: Gen1Seed,
    zoom: f32,
    offset: [f32; 2],
    show_step: usize, // 0 = all, 1-12 = individual squares
    show_circles: bool,
    show_points: bool,
    show_scaffolding: bool,
    show_squares: bool,
    show_construction_arcs: bool,
    show_data_panel: bool,
    show_all_labels: bool,
    show_seed_axes: bool,
    selected_ratio: Option<usize>,
    selected_gen: usize,
    child_filter: Option<usize>,
    instance_filter: Option<usize>,
    show_hubs: bool,
    hub_threshold: usize,
    show_latent: bool,
    selected_latent_ratio: Option<usize>,
    show_all_latent: bool,
    show_latent_latent: bool,
    show_latent_atomic: bool,
    show_latent_latent_lines: bool,
    selected_latent_point: Option<usize>,
}

impl Default for App {
    fn default() -> Self {
        Self {
            seed: Gen1Seed::new(100.0, 1),
            zoom: 1.5,
            offset: [0.0, 0.0],
            show_step: 0,
            show_circles: true,
            show_points: true,
            show_scaffolding: false,
            show_squares: true,
            show_seed_axes: false,
            show_all_labels: false,
            show_data_panel: false,
            show_hubs: false,
            hub_threshold: 4,
            child_filter: None,
            instance_filter: None,
            selected_ratio: None,
            selected_latent_point: None,
            show_latent_latent_lines: false,
            selected_gen: 1,
            show_construction_arcs: false,
            show_latent: false,
            selected_latent_ratio: None,
            show_all_latent: false,
            show_latent_latent: true,
            show_latent_atomic: true,
        }
    }
}

impl eframe::App for App {
    fn update(&mut self, ctx: &egui::Context, _frame: &mut eframe::Frame) {
        egui::SidePanel::left("controls").show(ctx, |ui| {
            egui::ScrollArea::vertical().show(ui, |ui| {
                ui.heading("Ariori Seed Visualizer");
                ui.separator();

                ui.horizontal(|ui| {
                    ui.label("Generation:");
                    if ui.radio_value(&mut self.selected_gen, 1, "1").clicked() {
                        self.seed = Gen1Seed::new(100.0, 1);
                        self.show_step = 0;
                    }
                    if ui.radio_value(&mut self.selected_gen, 2, "2").clicked() {
                        self.seed = Gen1Seed::new(100.0, 2);
                        self.show_step = 0;
                    }
                    if ui.radio_value(&mut self.selected_gen, 3, "3").clicked() {
                        self.seed = Gen1Seed::new(100.0, 3);
                        self.show_step = 0;
                    }
                    if ui.radio_value(&mut self.selected_gen, 4, "4").clicked() {
                        self.seed = Gen1Seed::new(100.0, 4);
                        self.show_step = 0;
                    }
                });

                if self.selected_gen == 2 {
                    ui.separator();
                    ui.label("Child Seeds Filter (by Gen 1 Ratio):");
                    ui.horizontal_wrapped(|ui| {
                        if ui
                            .selectable_label(self.child_filter.is_none(), "All")
                            .clicked()
                        {
                            self.child_filter = None;
                        }
                        for i in 0..self.seed.parent_ratios.len() {
                            let label = format!("{}", i + 1);
                            if ui
                                .selectable_label(self.child_filter == Some(i), label)
                                .clicked()
                            {
                                self.child_filter = Some(i);
                                self.instance_filter = None; // Reset instance filter when ratio changes
                            }
                        }
                    });

                    if let Some(ratio_idx) = self.child_filter {
                        if ratio_idx < self.seed.parent_ratios.len() {
                            let freq = self.seed.parent_ratios[ratio_idx].2;
                            ui.label(format!("Select Instance (1-{}):", freq));
                            ui.horizontal_wrapped(|ui| {
                                if ui
                                    .selectable_label(self.instance_filter.is_none(), "All")
                                    .clicked()
                                {
                                    self.instance_filter = None;
                                }
                                for i in 0..freq {
                                    if ui
                                        .selectable_label(
                                            self.instance_filter == Some(i),
                                            format!("{}", i + 1),
                                        )
                                        .clicked()
                                    {
                                        self.instance_filter = Some(i);
                                    }
                                }
                            });
                        }
                    }
                }

                ui.separator();

                ui.add(
                    egui::Slider::new(&mut self.show_step, 0..=self.seed.squares.len())
                        .text("Square (0=All)"),
                );

                if self.show_step > 0 && self.show_step <= self.seed.squares.len() {
                    ui.label(format!(
                        "Showing: {}",
                        self.seed.squares[self.show_step - 1].label
                    ));
                }

                ui.separator();
                ui.checkbox(&mut self.show_construction_arcs, "Show Construction Arcs");
                ui.checkbox(&mut self.show_circles, "Show Circles");
                ui.checkbox(&mut self.show_points, "Show Points");
                ui.checkbox(&mut self.show_scaffolding, "Show Scaffolding");
                ui.checkbox(&mut self.show_squares, "Show Squares");
                ui.checkbox(&mut self.show_seed_axes, "Show Seed Axes");
                ui.checkbox(&mut self.show_hubs, "Highlight Hubs");
                if self.show_hubs {
                    ui.add(
                        egui::Slider::new(&mut self.hub_threshold, 2..=20)
                            .text("Min Lines Meeting"),
                    );
                }
                ui.checkbox(&mut self.show_data_panel, "Show Data View");
                ui.checkbox(&mut self.show_all_labels, "Show All Labels");

                ui.separator();
                ui.heading("Atomic Spectrum");
                egui::ScrollArea::vertical()
                    .max_height(300.0)
                    .show(ui, |ui| {
                        for (i, (ratio, len)) in self.seed.unique_ratios.iter().enumerate() {
                            let freq = self.seed.frequencies[i];
                            let label = format!(
                                "{}: {} (L={}) [x{}]",
                                i + 1,
                                ratio.format_exact(),
                                len.format_exact(),
                                freq
                            );
                            let is_selected = self.selected_ratio == Some(i);
                            if ui.selectable_label(is_selected, label).clicked() {
                                if is_selected {
                                    self.selected_ratio = None;
                                } else {
                                    self.selected_ratio = Some(i);
                                }
                            }
                        }
                    });

                ui.separator();
                if ui.button("Reset View").clicked() {
                    self.zoom = 1.5;
                    self.offset = [0.0, 0.0];
                }

                // ========== LATENT SPECTRUM SECTION ==========
                ui.separator();
                ui.checkbox(&mut self.show_latent, "Show Latent Spectrum");
                if self.show_latent {
                    ui.checkbox(
                        &mut self.show_latent_latent,
                        "Show Latent-Latent Points (Magenta)",
                    );
                    ui.checkbox(
                        &mut self.show_latent_atomic,
                        "Show Latent-Atomic Points (Orange)",
                    );
                    ui.checkbox(
                        &mut self.show_latent_latent_lines,
                        "Show Latent-Latent Lines (Purple)",
                    );
                    ui.label(format!(
                        "Latent: {} ratios | {} lines | {} new pts",
                        self.seed.latent_ratios.len(),
                        self.seed.latent_lines.len(),
                        self.seed.latent_new_points.len()
                    ));
                    let mixed_count = self
                        .seed
                        .latent_ratio_types
                        .iter()
                        .filter(|t| matches!(t, LatentRatioType::Mixed(_, _)))
                        .count();
                    ui.label(format!(
                        "Mixed ratios: {}/{}",
                        mixed_count,
                        self.seed.latent_ratios.len()
                    ));
                    ui.heading("Latent Spectrum");

                    // "Show All" Toggle
                    if ui
                        .selectable_label(self.show_all_latent, "SHOW ALL LATENT LINES")
                        .clicked()
                    {
                        self.show_all_latent = !self.show_all_latent;
                        if self.show_all_latent {
                            self.selected_latent_ratio = None;
                        }
                    }

                    egui::ScrollArea::vertical()
                        .id_source("latent_scroll")
                        .max_height(250.0)
                        .show(ui, |ui| {
                            for (i, (ratio, len)) in self.seed.latent_ratios.iter().enumerate() {
                                // Filter out PURE ATOMIC ratios from list
                                if matches!(
                                    self.seed.latent_ratio_types[i],
                                    LatentRatioType::PureAtomic
                                ) {
                                    continue;
                                }

                                let freq = self.seed.latent_frequencies[i];
                                let label = format!(
                                    "{}: {} (L={}) [x{}]",
                                    i + 1,
                                    ratio.format_exact(),
                                    len.format_exact(),
                                    freq
                                );
                                let is_selected = self.selected_latent_ratio == Some(i);
                                if ui.selectable_label(is_selected, label).clicked() {
                                    if is_selected {
                                        self.selected_latent_ratio = None;
                                    } else {
                                        self.selected_latent_ratio = Some(i);
                                    }
                                }
                            }
                        });
                }

                ui.separator();
                ui.separator(); // Extra space
            }); // End ScrollArea
        }); // End SidePanel

        egui::CentralPanel::default().show(ctx, |ui| {
            let (resp, paint) = ui.allocate_painter(ui.available_size(), egui::Sense::drag());

            if resp.dragged() {
                self.offset[0] += resp.drag_delta().x;
                self.offset[1] += resp.drag_delta().y;
            }
            let scroll = ctx.input(|i| i.scroll_delta.y);
            if scroll != 0.0 {
                self.zoom *= if scroll > 0.0 { 1.05 } else { 0.95 };
            }

            let center_sc = resp.rect.center();
            let zoom = self.zoom;
            let to_s = |p: Point| {
                egui::Pos2::new(
                    center_sc.x + self.offset[0] + (p.x.to_f64() as f32) * zoom,
                    center_sc.y + self.offset[1] - (p.y.to_f64() as f32) * zoom,
                )
            };

            // 0. Highlight Parent Segment if filtering
            if let (Some(ratio_idx), Some(ins_idx)) = (self.child_filter, self.instance_filter) {
                if ratio_idx < self.seed.parent_ratios.len() {
                    let instances = &self.seed.parent_instances[ratio_idx];
                    if ins_idx < instances.len() {
                        let (p_a, p_b) = instances[ins_idx].clone();
                        paint.line_segment(
                            [to_s(p_a), to_s(p_b)],
                            egui::Stroke::new(6.0, egui::Color32::from_rgb(255, 165, 0)), // High-contrast Orange
                        );
                    }
                }
            }

            // Colors
            let cyan = egui::Color32::from_rgb(0, 200, 200);
            let green = egui::Color32::GREEN;
            let yellow = egui::Color32::YELLOW;
            let white = egui::Color32::WHITE;

            // Draw circles
            if self.show_circles {
                for c in &self.seed.circles {
                    if let (Some(filter), Some(src_idx)) = (self.child_filter, c.source_ratio_idx) {
                        if filter != src_idx {
                            continue;
                        }
                        if let (Some(ins_f), Some(ins_idx)) =
                            (self.instance_filter, c.source_instance_idx)
                        {
                            if ins_f != ins_idx {
                                continue;
                            }
                        }
                    }
                    paint.circle_stroke(
                        to_s(c.center.clone()),
                        (c.radius.to_f64() as f32) * zoom,
                        egui::Stroke::new(1.0, cyan),
                    );

                    if self.show_all_labels {
                        paint.text(
                            to_s(c.center.clone()),
                            egui::Align2::CENTER_CENTER,
                            &c.label,
                            egui::FontId::proportional(14.0),
                            white,
                        );
                    }
                }
            }

            // Draw arcs
            if self.show_construction_arcs {
                for a in &self.seed.arcs {
                    if let (Some(filter), Some(src_idx)) = (self.child_filter, a.source_ratio_idx) {
                        if filter != src_idx {
                            continue;
                        }
                        if let (Some(ins_f), Some(ins_idx)) =
                            (self.instance_filter, a.source_instance_idx)
                        {
                            if ins_f != ins_idx {
                                continue;
                            }
                        }
                    }

                    let arc_color = egui::Color32::from_rgb(255, 100, 200); // Pink
                    let center_s = to_s(a.center.clone());
                    let rad_s = (a.radius.to_f64() as f32) * zoom;

                    let mut points = Vec::new();
                    let steps = 40;
                    let span = std::f32::consts::PI; // 180 deg
                    let base_angle = if a.center.y.to_f64() > 0.0 {
                        -std::f32::consts::PI / 2.0
                    } else {
                        std::f32::consts::PI / 2.0
                    };

                    for i in 0..=steps {
                        let angle =
                            base_angle - (span / 2.0) + (span * (i as f32) / (steps as f32));
                        points.push(egui::Pos2::new(
                            center_s.x + angle.cos() * rad_s,
                            center_s.y + angle.sin() * rad_s,
                        ));
                    }
                    paint.add(egui::Shape::line(points, egui::Stroke::new(1.2, arc_color)));

                    if self.show_all_labels {
                        paint.text(
                            to_s(a.center.clone()),
                            egui::Align2::CENTER_CENTER,
                            &a.label,
                            egui::FontId::proportional(14.0),
                            white,
                        );
                    }
                }
            }

            // Determine which squares to draw
            let indices: Vec<usize> = if self.show_step == 0 {
                (0..self.seed.squares.len()).collect()
            } else {
                vec![self.show_step - 1]
            };

            for i in indices {
                let sq = &self.seed.squares[i];
                if let (Some(filter), Some(src_idx)) = (self.child_filter, sq.source_ratio_idx) {
                    if filter != src_idx {
                        continue;
                    }
                    if let (Some(ins_f), Some(ins_idx)) =
                        (self.instance_filter, sq.source_instance_idx)
                    {
                        if ins_f != ins_idx {
                            continue;
                        }
                    }
                }

                // Draw Construction Arcs (Compass at P1, P2)
                if self.show_construction_arcs {
                    let r = (sq.radius.to_f64() as f32) * zoom;
                    // Compass at P1
                    paint.circle_stroke(
                        to_s(sq.p1.clone()),
                        r,
                        egui::Stroke::new(
                            1.5,
                            egui::Color32::from_rgba_unmultiplied(255, 0, 255, 128),
                        ),
                    );
                    // Compass at P2
                    paint.circle_stroke(
                        to_s(sq.p2.clone()),
                        r,
                        egui::Stroke::new(
                            1.5,
                            egui::Color32::from_rgba_unmultiplied(255, 0, 255, 128),
                        ),
                    );
                }

                // Scaffolding: Construction lines and Radials
                if self.show_scaffolding {
                    // Reconstruct on the fly
                    let scaffolding = [
                        (sq.p1.clone(), sq.p3.clone()),
                        (sq.p5.clone(), sq.p2.clone()),
                        (sq.c1.clone(), sq.c3.clone()),
                        (sq.c4.clone(), sq.c2.clone()),
                        (sq.p4.clone(), sq.c2.clone()),
                        (sq.p6.clone(), sq.c4.clone()),
                    ];
                    for (p1, p2) in scaffolding {
                        paint.line_segment([to_s(p1), to_s(p2)], egui::Stroke::new(0.8, yellow));
                    }
                    if self.show_step == 0 {
                        let o = Point::new(VesicaNumber::zero(), VesicaNumber::zero());
                        let p =
                            Point::new(self.seed.circles[1].radius.clone(), VesicaNumber::zero());
                        paint.line_segment([to_s(o), to_s(p)], egui::Stroke::new(1.0, yellow));
                    }
                }

                // Square edges: K-L-N-M box
                if self.show_squares {
                    let edges = [
                        (sq.k.clone(), sq.l.clone()),
                        (sq.l.clone(), sq.n.clone()),
                        (sq.n.clone(), sq.m.clone()),
                        (sq.m.clone(), sq.k.clone()),
                    ];
                    for (p1, p2) in edges {
                        paint.line_segment([to_s(p1), to_s(p2)], egui::Stroke::new(2.0, green));
                    }
                }

                // Point labels (only for the currently selected square)
                if self.show_points && self.show_step > 0 {
                    if self.show_all_labels {
                        paint.text(
                            to_s(sq.k.clone()),
                            egui::Align2::RIGHT_BOTTOM,
                            format!("{}_K", sq.label),
                            egui::FontId::proportional(12.0),
                            green,
                        );
                        paint.text(
                            to_s(sq.l.clone()),
                            egui::Align2::LEFT_BOTTOM,
                            format!("{}_L", sq.label),
                            egui::FontId::proportional(12.0),
                            green,
                        );
                        paint.text(
                            to_s(sq.m.clone()),
                            egui::Align2::RIGHT_TOP,
                            format!("{}_M", sq.label),
                            egui::FontId::proportional(12.0),
                            green,
                        );
                        paint.text(
                            to_s(sq.n.clone()),
                            egui::Align2::LEFT_TOP,
                            format!("{}_N", sq.label),
                            egui::FontId::proportional(12.0),
                            green,
                        );
                    }
                    let pts = vec![
                        (sq.p1.clone(), "P1"),
                        (sq.p2.clone(), "P2"),
                        (sq.p3.clone(), "P3"),
                        (sq.p4.clone(), "P4"),
                        (sq.p5.clone(), "P5"),
                        (sq.p6.clone(), "P6"),
                        (sq.c1.clone(), "C1"),
                        (sq.c2.clone(), "C2"),
                        (sq.c3.clone(), "C3"),
                        (sq.c4.clone(), "C4"),
                        (sq.s.clone(), "S"), // Center
                    ];
                    for (pt, name) in pts {
                        if self.show_all_labels {
                            paint.text(
                                to_s(pt.clone()),
                                egui::Align2::LEFT_BOTTOM,
                                name,
                                egui::FontId::proportional(10.0),
                                white,
                            );
                        }
                        if name == "S" {
                            paint.circle_filled(
                                to_s(pt),
                                3.0,
                                egui::Color32::from_rgb(255, 100, 0),
                            );
                        }
                    }

                    // Draw valid radial intersections
                    let r_pts = [
                        (sq.r_kl.clone(), "R"),
                        (sq.r_nm.clone(), "R"),
                        (sq.r_ln.clone(), "R"),
                        (sq.r_mk.clone(), "R"),
                    ];
                    for (opt_pt, name) in r_pts {
                        if let Some(pt) = opt_pt {
                            paint.text(
                                to_s(pt.clone()),
                                egui::Align2::LEFT_BOTTOM,
                                name,
                                egui::FontId::proportional(10.0),
                                white,
                            );
                            paint.circle_filled(
                                to_s(pt),
                                3.0,
                                egui::Color32::from_rgb(255, 100, 0),
                            );
                        }
                    }
                }
            }

            // Draw Seed Axes (Generator Lines)
            if self.show_seed_axes {
                // Filter lines by current generation and apply child/instance filters
                let target_gen = self.seed.generation;
                for (p1, p2, l_type, gen, seed_id) in &self.seed.lines {
                    if *gen != target_gen {
                        continue;
                    }
                    if *l_type != LineType::Axis {
                        continue;
                    }

                    // Apply filters
                    // TODO: Fix filter logic for Gen 4 seed_ids (which include Generation)
                    // Old logic: (filter + 1)*1000 + ins
                    // New seed_id: (g)*100000 + (ratio)*1000 + ins
                    // We need to decode seed_id to check ratio/instance
                    let (_s_gen, s_ratio, s_ins) = decode_seed(*seed_id);

                    if let (Some(filter), Some(ins_filter)) =
                        (self.child_filter, self.instance_filter)
                    {
                        if s_ratio != filter || s_ins != ins_filter {
                            continue;
                        }
                    } else if let Some(filter) = self.child_filter {
                        if s_ratio != filter {
                            continue;
                        }
                    }

                    paint.line_segment(
                        [to_s(p1.clone()), to_s(p2.clone())],
                        egui::Stroke::new(1.0, egui::Color32::from_rgb(255, 100, 0)), // Orange for axes
                    );
                }
            }

            // Draw all unique points as dots (when showing all)
            if self.show_points && self.show_step == 0 {
                for (pt, label, _, freq) in &self.seed.all_points {
                    let mut draw_color = egui::Color32::RED;
                    let mut draw_radius = 3.0;

                    let is_hub = *freq >= self.hub_threshold;
                    if self.show_hubs && is_hub {
                        // High frequency hubs are larger and shift toward YELLOW/GOLD
                        let factor = (*freq as f32).sqrt().max(1.0);
                        draw_radius = 3.0 * factor;

                        // Color shift: RED -> ORANGE -> GOLD
                        let r = 255;
                        let g = (10.0 * factor).min(215.0) as u8; // Hubs get brighter gold/orange
                        let b = 0;
                        draw_color = egui::Color32::from_rgb(r, g, b);
                    } else if self.show_hubs && !is_hub {
                        // If show_hubs is on but below threshold, maybe dim them or skip
                        draw_radius = 1.0;
                        draw_color = egui::Color32::from_rgba_premultiplied(200, 0, 0, 100);
                    }

                    paint.circle_filled(to_s(pt.clone()), draw_radius, draw_color);

                    if self.show_all_labels && (!self.show_hubs || is_hub) {
                        let name = resolve_label(label);
                        paint.text(
                            to_s(pt.clone()),
                            egui::Align2::LEFT_BOTTOM,
                            name,
                            egui::FontId::proportional(8.0),
                            egui::Color32::WHITE,
                        );
                    }
                }
            }

            // Draw highlighted ratio pairs
            if let Some(idx) = self.selected_ratio {
                let pairs = &self.seed.ratio_pairs[idx];
                let orange = egui::Color32::from_rgb(255, 165, 0);
                for &(i, j) in pairs {
                    let p1 = self.seed.all_points[i].0.clone();
                    let p2 = self.seed.all_points[j].0.clone();
                    paint.line_segment(
                        [to_s(p1.clone()), to_s(p2.clone())],
                        egui::Stroke::new(3.0, orange),
                    );
                    paint.circle_filled(to_s(p1), 4.0, orange);
                    paint.circle_filled(to_s(p2), 4.0, orange);
                }
            }

            // ========== LATENT RENDERING ==========
            if self.show_latent {
                // Collect which ratios to draw
                let mut ratios_to_draw = Vec::new();
                if self.show_all_latent {
                    // Draw all non-pure-atomic pairs
                    for i in 0..self.seed.latent_ratios.len() {
                        if !matches!(self.seed.latent_ratio_types[i], LatentRatioType::PureAtomic) {
                            ratios_to_draw.push(i);
                        }
                    }
                } else if let Some(idx) = self.selected_latent_ratio {
                    ratios_to_draw.push(idx);
                }

                // Draw lines
                for idx in ratios_to_draw {
                    let type_info = &self.seed.latent_ratio_types[idx];
                    let is_mixed = matches!(type_info, LatentRatioType::Mixed(_, _));

                    let color = if is_mixed {
                        egui::Color32::from_rgb(0, 255, 200) // Teal for Mixed
                    } else {
                        egui::Color32::from_rgb(0, 180, 255) // Cyan for Pure Latent
                    };

                    // Thinner lines for "Show All" to avoid clutter
                    let thickness = if self.show_all_latent { 0.5 } else { 2.0 };
                    let stroke_color = if self.show_all_latent {
                        color.linear_multiply(0.6)
                    } else {
                        color
                    };

                    // Draw Atomic-Atomic pairs (start/end on atomic points)
                    if idx < self.seed.latent_pairs.len() {
                        for &(i, j) in &self.seed.latent_pairs[idx] {
                            if i >= self.seed.all_points.len() || j >= self.seed.all_points.len() {
                                continue;
                            }
                            let p1 = self.seed.all_points[i].0.clone();
                            let p2 = self.seed.all_points[j].0.clone();
                            paint.line_segment(
                                [to_s(p1.clone()), to_s(p2.clone())],
                                egui::Stroke::new(thickness, stroke_color),
                            );
                            if !self.show_all_latent {
                                paint.circle_filled(to_s(p1), 3.5, color);
                                paint.circle_filled(to_s(p2), 3.5, color);
                            }
                        }
                    }

                    // Draw Latent-Atomic pairs (Mixed)
                    if idx < self.seed.latent_mixed_pairs.len() {
                        for &(l_idx, a_idx) in &self.seed.latent_mixed_pairs[idx] {
                            if l_idx >= self.seed.latent_new_points.len()
                                || a_idx >= self.seed.all_points.len()
                            {
                                continue;
                            }
                            let p1 = self.seed.latent_new_points[l_idx].pt.clone();
                            let p2 = self.seed.all_points[a_idx].0.clone();
                            paint.line_segment(
                                [to_s(p1.clone()), to_s(p2.clone())],
                                egui::Stroke::new(thickness, stroke_color),
                            );
                            if !self.show_all_latent {
                                paint.circle_filled(to_s(p1), 3.5, color);
                                paint.circle_filled(to_s(p2), 3.5, color);
                            }
                        }
                    }

                    // Draw Latent-Latent pairs
                    if self.show_latent_latent_lines && idx < self.seed.latent_latent_pairs.len() {
                        // Use a distinct color for L-L lines, e.g. Purple
                        let ll_color = egui::Color32::from_rgb(180, 0, 255);
                        let ll_stroke = if self.show_all_latent {
                            ll_color.linear_multiply(0.6)
                        } else {
                            ll_color
                        };

                        for &(i, j) in &self.seed.latent_latent_pairs[idx] {
                            if i >= self.seed.latent_new_points.len()
                                || j >= self.seed.latent_new_points.len()
                            {
                                continue;
                            }
                            let p1 = self.seed.latent_new_points[i].pt.clone();
                            let p2 = self.seed.latent_new_points[j].pt.clone();
                            paint.line_segment(
                                [to_s(p1.clone()), to_s(p2.clone())],
                                egui::Stroke::new(thickness, ll_stroke),
                            );
                            if !self.show_all_latent {
                                paint.circle_filled(to_s(p1), 2.0, ll_color);
                                paint.circle_filled(to_s(p2), 2.0, ll_color);
                            }
                        }
                    }
                }

                // Draw highlighted parent lines for selected latent point
                if let Some(idx) = self.selected_latent_point {
                    if idx < self.seed.latent_new_points.len() {
                        let l_pt = &self.seed.latent_new_points[idx];
                        let parent_color = egui::Color32::from_rgb(255, 255, 0); // Bright Yellow
                        for (p1, p2) in &l_pt.parents {
                            paint.line_segment(
                                [to_s(p1.clone()), to_s(p2.clone())],
                                egui::Stroke::new(2.5, parent_color), // Thick solid line for visibility
                            );
                        }
                        // Highlight the point itself
                        paint.circle_filled(to_s(l_pt.pt.clone()), 5.0, parent_color);
                    }
                }

                if self.show_latent {
                    for l_pt in &self.seed.latent_new_points {
                        let is_lx = matches!(l_pt.kind, LatentPointKind::LatentLatent);

                        if is_lx && !self.show_latent_latent {
                            continue;
                        }
                        if !is_lx && !self.show_latent_atomic {
                            continue;
                        }

                        let color = if is_lx {
                            egui::Color32::from_rgb(255, 0, 255) // Magenta for LX
                        } else {
                            egui::Color32::from_rgb(255, 100, 0) // Orange for LCX
                        };

                        let radius = if self.show_all_latent { 1.5 } else { 3.0 };
                        paint.circle_filled(to_s(l_pt.pt.clone()), radius, color);
                    }
                }

                let mouse_pos = ctx
                    .input(|i| i.pointer.hover_pos())
                    .unwrap_or(egui::Pos2::new(-10000.0, -10000.0));
                let hover_threshold = 10.0;
                let mut best_dist = f32::INFINITY;
                let mut best_label_str: Option<String> = None;

                // Check latent new points (if shown)
                if self.show_latent {
                    for (_i, l_pt) in self.seed.latent_new_points.iter().enumerate() {
                        let is_lx = matches!(l_pt.kind, LatentPointKind::LatentLatent);
                        if is_lx && !self.show_latent_latent {
                            continue;
                        }
                        if !is_lx && !self.show_latent_atomic {
                            continue;
                        }

                        let screen_pos = to_s(l_pt.pt.clone());
                        let dist = screen_pos.distance(mouse_pos);
                        if dist < hover_threshold && dist < best_dist {
                            best_dist = dist;
                            best_label_str = Some(l_pt.label.clone());
                        }
                    }
                }

                if let Some(label) = best_label_str {
                    egui::show_tooltip(ctx, resp.id, |ui| {
                        ui.label(label);
                    });
                }

                if ctx.input(|i| i.pointer.any_click()) {
                    let click_threshold = 10.0;
                    let mut found_idx = None;
                    let mut best_dist = f32::INFINITY;

                    if self.show_latent {
                        for (i, l_pt) in self.seed.latent_new_points.iter().enumerate() {
                            let is_lx = matches!(l_pt.kind, LatentPointKind::LatentLatent);
                            if is_lx && !self.show_latent_latent {
                                continue;
                            }
                            if !is_lx && !self.show_latent_atomic {
                                continue;
                            }

                            let screen_pos = to_s(l_pt.pt.clone());
                            let dist = screen_pos.distance(mouse_pos);
                            if dist < click_threshold && dist < best_dist {
                                best_dist = dist;
                                found_idx = Some(i);
                            }
                        }
                    }

                    self.selected_latent_point = found_idx;
                }
            }
        });

        if self.show_data_panel {
            egui::SidePanel::right("data_view")
                .default_width(400.0)
                .show(ctx, |ui| {
                    ui.heading("Seed Data Log");
                    ui.separator();
                    egui::ScrollArea::vertical().show(ui, |ui| {
                        ui.add(
                            egui::TextEdit::multiline(&mut self.seed.data_log)
                                .font(egui::TextStyle::Monospace)
                                .desired_width(f32::INFINITY),
                        );
                    });
                });
        }
    }
}

fn main() -> Result<(), eframe::Error> {
    let opts = eframe::NativeOptions {
        viewport: egui::ViewportBuilder::default().with_inner_size(egui::vec2(1400.0, 900.0)),
        ..Default::default()
    };
    eframe::run_native(
        "Gen 1 Seed Visualizer",
        opts,
        Box::new(|_cc| Box::new(App::default())),
    )
}
