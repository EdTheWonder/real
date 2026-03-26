/*
    Ariori Protocol: Gen 1 Seed Visualizer
    ---------------------------------------
    Renders the complete Gen 1 Vesica lattice with all construction points.
*/

use eframe::egui;
use num_bigint::BigInt;
use num_integer::Integer;
use num_traits::{One, Signed, ToPrimitive, Zero};
use rayon::prelude::*;
use serde::{Deserialize, Serialize};
use std::collections::{HashMap, HashSet};
use std::ops::{Add, Div, Mul, Neg, Sub};
use std::sync::atomic::{AtomicUsize, Ordering};

#[derive(Clone, Debug, PartialEq, Eq, Hash, Serialize, Deserialize)]
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
        let a_f = self.a.to_f64().unwrap_or(0.0);
        let b_f = self.b.to_f64().unwrap_or(0.0);
        let d_f = self.d.to_f64().unwrap_or(1.0);
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

impl Add for &VesicaNumber {
    type Output = VesicaNumber;
    fn add(self, rhs: Self) -> VesicaNumber {
        VesicaNumber::new(
            &self.a * &rhs.d + &rhs.a * &self.d,
            &self.b * &rhs.d + &rhs.b * &self.d,
            &self.d * &rhs.d,
        )
    }
}

impl Add<VesicaNumber> for VesicaNumber {
    type Output = Self;
    fn add(self, rhs: Self) -> Self {
        &self + &rhs
    }
}

impl Sub for &VesicaNumber {
    type Output = VesicaNumber;
    fn sub(self, rhs: Self) -> VesicaNumber {
        VesicaNumber::new(
            &self.a * &rhs.d - &rhs.a * &self.d,
            &self.b * &rhs.d - &rhs.b * &self.d,
            &self.d * &rhs.d,
        )
    }
}

impl Sub<VesicaNumber> for VesicaNumber {
    type Output = Self;
    fn sub(self, rhs: Self) -> Self {
        &self - &rhs
    }
}

impl Mul for &VesicaNumber {
    type Output = VesicaNumber;
    fn mul(self, rhs: Self) -> VesicaNumber {
        let a_term = &self.a * &rhs.a + BigInt::from(3) * &self.b * &rhs.b;
        let b_term = &self.a * &rhs.b + &self.b * &rhs.a;
        let d_term = &self.d * &rhs.d;
        VesicaNumber::new(a_term, b_term, d_term)
    }
}

impl Mul<VesicaNumber> for VesicaNumber {
    type Output = Self;
    fn mul(self, rhs: Self) -> Self {
        &self * &rhs
    }
}

impl Div for &VesicaNumber {
    type Output = VesicaNumber;
    fn div(self, rhs: Self) -> VesicaNumber {
        if rhs.b.is_zero() {
            // If rhs is a rational number (b=0), division is simpler
            return VesicaNumber::new(&self.a * &rhs.d, &self.b * &rhs.d, &self.d * &rhs.a);
        }
        // General case: multiply by conjugate
        let denom_part = &rhs.a * &rhs.a - BigInt::from(3) * &rhs.b * &rhs.b;
        let conj_a = &rhs.a;
        let conj_b = -&rhs.b;
        let num_vesica = self * &VesicaNumber::new(conj_a.clone(), conj_b, BigInt::one());
        VesicaNumber::new(
            &num_vesica.a * &rhs.d,
            &num_vesica.b * &rhs.d,
            &num_vesica.d * denom_part,
        )
    }
}

impl Div<VesicaNumber> for VesicaNumber {
    type Output = Self;
    fn div(self, rhs: Self) -> Self {
        &self / &rhs
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

#[derive(Clone, Debug, PartialEq, Eq, Hash, Serialize, Deserialize)]
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

    fn key(&self) -> (VesicaNumber, VesicaNumber) {
        (self.x.clone(), self.y.clone())
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

#[derive(Clone, Debug)]
pub struct Line {
    pub p1: Point,
    pub p2: Point,
}

impl Line {
    fn intersect(&self, other: &Line) -> Option<Point> {
        let x1 = &self.p1.x;
        let y1 = &self.p1.y;
        let x2 = &self.p2.x;
        let y2 = &self.p2.y;
        let x3 = &other.p1.x;
        let y3 = &other.p1.y;
        let x4 = &other.p2.x;
        let y4 = &other.p2.y;

        let denom = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
        if denom.a.is_zero() && denom.b.is_zero() {
            return None;
        }

        let term1 = x1 * y2 - y1 * x2;
        let term2 = x3 * y4 - y3 * x4;

        let num_x = &term1 * &(x3 - x4) - &(x1 - x2) * &term2;
        let num_y = &term1 * &(y3 - y4) - &(y1 - y2) * &term2;

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

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, Serialize, Deserialize)]
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

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash, Serialize, Deserialize)]
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
    P1 = 9,
    P2 = 10,
    P3 = 11,
    P4 = 12,
    P5 = 13,
    P6 = 14,
    C1 = 15,
    C2 = 16,
    C3 = 17,
    C4 = 18,
    X17 = 19,
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
            PointType::P1 => "P1",
            PointType::P2 => "P2",
            PointType::P3 => "P3",
            PointType::P4 => "P4",
            PointType::P5 => "P5",
            PointType::P6 => "P6",
            PointType::C1 => "C1",
            PointType::C2 => "C2",
            PointType::C3 => "C3",
            PointType::C4 => "C4",
            PointType::X17 => "X17",
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

#[derive(Clone, Debug, Serialize, Deserialize)]
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
        PointLabel::Intersection(_sa, _ta, _sb, _tb) => {
            "X".to_string()
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
    }
    let gen = seed_id / 100_000_000;
    let rem = seed_id % 100_000_000;
    let ratio_idx = rem / 100_000;
    let ins_idx = rem % 100_000;
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

// ======================== CACHE INFRASTRUCTURE ========================
fn save_cache_to_file<T: Serialize>(path: &str, data: &T) {
    std::fs::create_dir_all("cache").ok();
    let file = std::fs::File::create(path).expect("Failed to create cache file");
    let writer = std::io::BufWriter::with_capacity(8 * 1024 * 1024, file);
    bincode::serialize_into(writer, data).expect("Cache serialization failed");
    let size_mb = std::fs::metadata(path)
        .map(|m| m.len() as f64 / 1_048_576.0)
        .unwrap_or(0.0);
    println!("  ✓ Cache saved: {} ({:.1} MB)", path, size_mb);
}

fn load_cache_from_file<T: serde::de::DeserializeOwned>(path: &str) -> Option<T> {
    let file = std::fs::File::open(path).ok()?;
    let size_mb = file
        .metadata()
        .map(|m| m.len() as f64 / 1_048_576.0)
        .unwrap_or(0.0);
    println!("  → Loading cache: {} ({:.1} MB)...", path, size_mb);
    let reader = std::io::BufReader::with_capacity(8 * 1024 * 1024, file);
    let result = bincode::deserialize_from(reader).ok()?;
    println!("  ✓ Cache loaded successfully.");
    Some(result)
}

// Type aliases for cache data to keep signatures clean
type Phase1CacheData = (
    Vec<(Point, PointLabel, usize, usize)>,       // all_points
    HashMap<(VesicaNumber, VesicaNumber), usize>, // point_map
    HashMap<(VesicaNumber, VesicaNumber), HashSet<String>>, // hub_angles
);

type Phase4CacheData = (
    Vec<(VesicaNumber, VesicaNumber)>, // unique_ratios
    Vec<Vec<(usize, usize)>>,          // ratio_pairs
    Vec<usize>,                        // frequencies
);

// Phase 2+3 cache: all_points after hub-count update + sort
type Phase23CacheData = Vec<(Point, PointLabel, usize, usize)>;

// Phase 4 incremental caches (Gen 4+)
type Phase4PairsCache = Vec<(usize, usize)>; // sorted pairs for deterministic iteration

type Phase4ProgressCache = (
    usize,                             // pairs_processed (resume index)
    HashMap<String, usize>,            // ratio_map
    Vec<(VesicaNumber, VesicaNumber)>, // unique_ratios
    Vec<Vec<(usize, usize)>>,          // ratio_pairs
    Vec<usize>,                        // frequencies
);
// ======================================================================

struct Gen1Seed {
    circles: Vec<Circle>,
    arcs: Vec<Circle>,
    squares: Vec<SquareConstruction>,
    all_points: Vec<(Point, PointLabel, usize, usize)>, // (Point, Label, SeedID, Freq)
    unique_ratios: Vec<(VesicaNumber, VesicaNumber)>,   // (Ratio, Length)
    ratio_pairs: Vec<Vec<(usize, usize)>>,
    frequencies: Vec<usize>,
    lines: Vec<(Point, Point, LineType, usize, usize)>,
    data_log: String,
    generation: usize,
    parent_ratios: Vec<(VesicaNumber, VesicaNumber, usize)>, // (Ratio, Length, Freq)
    parent_instances: Vec<Vec<(Point, Point)>>,
    pub point_map: HashMap<(VesicaNumber, VesicaNumber), usize>, // PT_KEY -> ALL_POINTS_INDEX
    hub_angles: HashMap<(VesicaNumber, VesicaNumber), HashSet<String>>,
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
    pub seed_index: HashMap<usize, usize>,
    pub deduplicate_atomic: bool,
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
            seed_index: HashMap::new(),
            deduplicate_atomic: true,
        };

        // 1. Generation 1 Base
        let o = Point::new(0.into(), 0.into());
        let p = Point::new(r.clone(), 0.into());
        s.lines.push((o.clone(), p.clone(), LineType::Axis, 1, 0));

        let o_idx = s.all_points.len();
        s.all_points
            .push((o.clone(), PointLabel::Seed(0, PointType::A), 1, 1));
        s.point_map.insert(o.key(), o_idx);

        let p_idx = s.all_points.len();
        s.all_points
            .push((p.clone(), PointLabel::Seed(0, PointType::B), 0, 1));
        s.point_map.insert(p.key(), p_idx);

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
            &mut s.all_points,
            &mut s.lines,
            0,
        );

        s.setup_gen1_foundation(r.clone());

        // 2. Recursive Expansion
        if max_gen > 1 {
            // Processing loop for each generation depth
            for g in 1..=max_gen {
                if g == 3 {
                    s.lines.reserve(2_000_000); // More realistic pre-allocation to avoid OOM
                }
                // In-place analysis instead of cloning to save GBs of RAM
                s.generation = g;
                s.run_global_analysis(r.clone());

                // Collect parent data for the GUI based on the parent generation
                if g == max_gen - 1 {
                    s.parent_ratios.clear();
                    s.parent_instances.clear();
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

                // Write out the generation ratio data to a text file
                use std::io::Write;
                let filename = format!("gen{}_atomic_ratios.txt", g);
                if let Ok(file) = std::fs::File::create(&filename) {
                    let mut writer = std::io::BufWriter::new(file);
                    writeln!(writer, "=== GEN {} ATOMIC SPECTRUM ===", g).ok();
                    writeln!(writer, "Index  Ratio (L/r)                         Length                              Freq").ok();
                    writeln!(writer, "--------------------------------------------------------------------------------------").ok();
                    for (i, (ratio, len)) in s.unique_ratios.iter().enumerate() {
                        writeln!(
                            writer,
                            "{:<6} {:<35} {:<35} x{}",
                            i + 1,
                            ratio.format_exact(),
                            len.format_exact(),
                            s.frequencies[i]
                        )
                        .ok();
                    }
                    println!("    Saved {} ratios to {}", s.unique_ratios.len(), filename);
                }

                // Spawn CHILDREN for generation G+1
                if g >= max_gen {
                    continue;
                }

                let old_line_count = s.lines.len();
                let unique_ratios = s.unique_ratios.clone();
                let ratio_pairs = s.ratio_pairs.clone();
                let total_seeds: usize = ratio_pairs.iter().map(|v| v.len()).sum();
                println!(
                    "  Spawning Generation {} children from {} seeds...",
                    g + 1,
                    total_seeds
                );
                let mut seeds_spawned = 0;

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
                        let seed_id = ((g + 1) * 100_000_000) + (i * 100_000) + ins_idx;

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
                            &mut s.all_points,
                            &mut s.lines,
                            seed_id,
                        );

                        seeds_spawned += 1;
                        if seeds_spawned % 500 == 0 {
                            println!(
                                "    Progress: {}/{} seeds spawned...",
                                seeds_spawned, total_seeds
                            );
                        }

                        seeds_spawned += 1;
                        if seeds_spawned % 1000 == 0 {
                            println!(
                                "    Progress: {}/{} seeds spawned...",
                                seeds_spawned, total_seeds
                            );
                        }

                        let key_a = p_a.key();
                        if !s.point_map.contains_key(&key_a) {
                            let idx = s.all_points.len();
                            s.all_points.push((
                                p_a,
                                PointLabel::Seed(seed_id, PointType::A),
                                seed_id,
                                1,
                            ));
                            s.point_map.insert(key_a, idx);
                        }
                        let key_b = p_b.key();
                        if !s.point_map.contains_key(&key_b) {
                            let idx = s.all_points.len();
                            s.all_points.push((
                                p_b,
                                PointLabel::Seed(seed_id, PointType::B),
                                seed_id,
                                1,
                            ));
                            s.point_map.insert(key_b, idx);
                        }
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

        // After the expansion loop, the generation is already set to max_gen
        // The last iteration of the loop already called run_global_analysis for max_gen
        // EXCEPT if max_gen == 1, in which case the loop didn't run.
        if max_gen == 1 {
            s.generation = 1;
            s.run_global_analysis(r.clone());
        }

        if s.generation == 1 {
            s.run_latent_analysis(r.clone());
        }

        // Finalize data handles writing the text log. For large gens it uses too much memory.
        s.finalize_data(r.to_f64());

        // Build seed_index for tracing
        s.seed_index.clear();
        for (i, (_, _, l_type, _, seed_id)) in s.lines.iter().enumerate() {
            if *l_type == LineType::Axis {
                s.seed_index.insert(*seed_id, i);
            }
        }
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
        _point_map: &mut HashMap<(VesicaNumber, VesicaNumber), usize>,
        _all_points: &mut Vec<(Point, PointLabel, usize, usize)>,
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

            let t_key = t.key();
            if !_point_map.contains_key(&t_key) {
                let idx = _all_points.len();
                _all_points.push((
                    t.clone(),
                    PointLabel::Seed(seed_id, PointType::T),
                    seed_id,
                    1,
                ));
                _point_map.insert(t_key, idx);
            }
            let bot_key = bot.key();
            if !_point_map.contains_key(&bot_key) {
                let idx = _all_points.len();
                _all_points.push((
                    bot.clone(),
                    PointLabel::Seed(seed_id, PointType::Bot),
                    seed_id,
                    1,
                ));
                _point_map.insert(bot_key, idx);
            }
        }

        // Single-circle measurement: only measure circle A using B, T, Bot
        let pairs = vec![(o.clone(), p.clone(), format!("{}A-B", prefix))];
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

            // Register ALL construction points to point_map
            // Square vertices
            for (pt, pt_type) in [
                (sq.k.clone(), PointType::K),
                (sq.l.clone(), PointType::L),
                (sq.m.clone(), PointType::M),
                (sq.n.clone(), PointType::N),
                (sq.s.clone(), PointType::S),
                (sq.p1.clone(), PointType::P1),
                (sq.p2.clone(), PointType::P2),
                (sq.p3.clone(), PointType::P3),
                (sq.p4.clone(), PointType::P4),
                (sq.p5.clone(), PointType::P5),
                (sq.p6.clone(), PointType::P6),
                (sq.c1.clone(), PointType::C1),
                (sq.c2.clone(), PointType::C2),
                (sq.c3.clone(), PointType::C3),
                (sq.c4.clone(), PointType::C4),
            ] {
                let key = pt.key();
                if !_point_map.contains_key(&key) {
                    let idx = _all_points.len();
                    _all_points.push((pt, PointLabel::Seed(seed_id, pt_type), seed_id, 1));
                    _point_map.insert(key, idx);
                }
            }

            squares.push(sq);
        }
    }

    fn setup_gen1_foundation(&mut self, r: VesicaNumber) {
        // This function explicitly labels the 17 core points and splits the 11 construction lines
        // into the 21 pure "atomic" segments required for particle physics mapping.
        
        let root3 = VesicaNumber::new(0.into(), 1.into(), 1.into());
        let half = VesicaNumber::new(1.into(), 0.into(), 2.into());
        let half_root3 = (&root3) * (&half);
        
        // Target Coordinates for the 17 base points
        let three_halves = VesicaNumber::new(3.into(), 0.into(), 2.into());
        let coords = vec![
            (VesicaNumber::zero(), VesicaNumber::zero(), PointType::A),
            (r.clone(), VesicaNumber::zero(), PointType::B),
            ((&r) * (&half), (&r) * (&half_root3), PointType::T),
            ((&r) * (&half), -((&r) * (&half_root3)), PointType::Bot),
            (-((&r) * (&half)), (&r) * (&half_root3), PointType::P3),
            ((&r) * (&three_halves), (&r) * (&half_root3), PointType::P4),
            (-((&r) * (&half)), -((&r) * (&half_root3)), PointType::P5),
            ((&r) * (&three_halves), -((&r) * (&half_root3)), PointType::P6),
            ((&r) * (&half_root3), (&r) * (&half), PointType::C1),
            (-((&r) * (&half_root3)), -((&r) * (&half)), PointType::C2),
            ((&r) * (&half_root3), -((&r) * (&half)), PointType::C3),
            (-((&r) * (&half_root3)), (&r) * (&half), PointType::C4),
            (-((&r) * (&half_root3)), (&r) * (&half_root3), PointType::K),
            ((&r) * (&half_root3), (&r) * (&half_root3), PointType::L),
            (-((&r) * (&half_root3)), -((&r) * (&half_root3)), PointType::M),
            ((&r) * (&half_root3), -((&r) * (&half_root3)), PointType::N),
            ((&r) * (&half_root3), VesicaNumber::zero(), PointType::X17),
        ];

        // 1. Rebuild all_points with explicit labels
        self.all_points.clear();
        self.point_map.clear();
        for (x, y, pt_type) in coords {
            let p = Point::new(x, y);
            let key = p.key();
            if !self.point_map.contains_key(&key) {
                let idx = self.all_points.len();
                self.all_points.push((p, PointLabel::Seed(0, pt_type), 0, 1));
                self.point_map.insert(key, idx);
            }
        }

        // Use a more direct way since we just built the list
        let pt_map: HashMap<PointType, Point> = self.all_points.iter().map(|(p, l, _, _)| {
            if let PointLabel::Seed(_, t) = l {
                (*t, p.clone())
            } else {
                panic!("Expected Seed label");
            }
        }).collect();

        let initial_segs = vec![
            (pt_map[&PointType::A].clone(), pt_map[&PointType::B].clone(), LineType::Axis),
            (pt_map[&PointType::T].clone(), pt_map[&PointType::P3].clone(), LineType::ScaffP1P3),
            (pt_map[&PointType::P5].clone(), pt_map[&PointType::Bot].clone(), LineType::ScaffP5P2),
            (pt_map[&PointType::C1].clone(), pt_map[&PointType::C3].clone(), LineType::ScaffC1C3),
            (pt_map[&PointType::C4].clone(), pt_map[&PointType::C2].clone(), LineType::ScaffC4C2),
            (pt_map[&PointType::P4].clone(), pt_map[&PointType::C2].clone(), LineType::ScaffP4C2),
            (pt_map[&PointType::P6].clone(), pt_map[&PointType::C4].clone(), LineType::ScaffP6C4),
            (pt_map[&PointType::K].clone(), pt_map[&PointType::L].clone(), LineType::EdgeKL),
            (pt_map[&PointType::L].clone(), pt_map[&PointType::N].clone(), LineType::EdgeLN),
            (pt_map[&PointType::N].clone(), pt_map[&PointType::M].clone(), LineType::EdgeNM),
            (pt_map[&PointType::M].clone(), pt_map[&PointType::K].clone(), LineType::EdgeMK),
        ];

        // 3. Split the segments into the 21 atomic lines
        let mut split_lines = Vec::new();
        let mut seen_segments = HashSet::new();
        let points: Vec<Point> = self.all_points.iter().map(|(p, _, _, _)| p.clone()).collect();

        for (s_start, s_end, l_type) in initial_segs {
            let mut pts_on_seg = Vec::new();
            for p in &points {
                if p.is_on_segment(&s_start, &s_end) {
                    pts_on_seg.push(p.clone());
                }
            }
            // Sort points by X then Y to order along segment
            pts_on_seg.sort_by(|p1, p2| {
                match p1.x.partial_cmp(&p2.x) {
                    Some(std::cmp::Ordering::Equal) => p1.y.partial_cmp(&p2.y).unwrap_or(std::cmp::Ordering::Equal),
                    Some(ord) => ord,
                    None => std::cmp::Ordering::Equal,
                }
            });
            for i in 0..(pts_on_seg.len() - 1) {
                let mut p1 = pts_on_seg[i].clone();
                let mut p2 = pts_on_seg[i+1].clone();
                if p1.key() > p2.key() {
                    std::mem::swap(&mut p1, &mut p2);
                }
                let key = (p1.key(), p2.key());
                if !self.deduplicate_atomic || seen_segments.insert(key) {
                    split_lines.push((p1, p2, l_type, 1, 0));
                }
            }
        }

        self.lines = split_lines;
        println!("  Generation 1 foundation established: 17 points, 21 atomic lines.");
    }

    fn run_global_analysis(&mut self, r: VesicaNumber) {
        let target_gen = self.generation;

        // ==================== PHASE 1: INTERSECTIONS (CACHED) ====================
        let phase1_cache_path = format!("cache/gen{}_phase1.bin", target_gen);
        if let Some((cached_points, cached_point_map, cached_hub_angles)) =
            load_cache_from_file::<Phase1CacheData>(&phase1_cache_path)
        {
            println!("  ★ Phase 1 loaded from cache for gen {}!", target_gen);
            self.all_points = cached_points;
            self.point_map = cached_point_map;
            self.hub_angles = cached_hub_angles;
            if target_gen == 1 {
                self.setup_gen1_foundation(r.clone());
            }
        } else {
            // --- Phase 1: compute from scratch ---
            let mut unique_lines: Vec<(Line, LineType, usize, usize)> = Vec::new();
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
                    unique_lines.push((Line::new(a, b), *l_type, *gen, *seed_id));
                }
            }

            println!(
                "Analyzing gen {} intersections for {} unique lines...",
                target_gen,
                unique_lines.len()
            );

            // Cache BBox with Line to avoid separate Vec indexing overhead
            #[derive(Clone)]
            struct LineWithBBox {
                line: Line,
                la: LineType,
                gen: usize,
                seed_id: usize,
                p1_f: (f64, f64),
                p2_f: (f64, f64),
                x_min: f64,
                x_max: f64,
                y_min: f64,
                y_max: f64,
            }

            let mut unique_lines_with_bbox: Vec<LineWithBBox> = unique_lines
                .into_iter()
                .map(|(line, la, gen, seed_id)| {
                    let p1f = (line.p1.x.to_f64(), line.p1.y.to_f64());
                    let p2f = (line.p2.x.to_f64(), line.p2.y.to_f64());
                    LineWithBBox {
                        line,
                        la,
                        gen,
                        seed_id,
                        p1_f: p1f,
                        p2_f: p2f,
                        x_min: p1f.0.min(p2f.0),
                        x_max: p1f.0.max(p2f.0),
                        y_min: p1f.1.min(p2f.1),
                        y_max: p1f.1.max(p2f.1),
                    }
                })
                .collect();

            // SORT lines by x_min to enable early-break in inner loop (O(N log N) optimization)
            unique_lines_with_bbox.sort_by(|a, b| {
                a.x_min
                    .partial_cmp(&b.x_min)
                    .unwrap_or(std::cmp::Ordering::Equal)
            });

            use std::sync::atomic::{AtomicUsize, Ordering};
            let total_outer_loops = unique_lines_with_bbox.len();
            let progress_counter_atomic = AtomicUsize::new(0);

            // Use std::thread::scope + channel: producer thread owns tx (proper drop),
            // main thread is consumer that registers points into self incrementally.
            // This avoids both the 9 GB Vec allocation AND the rayon::join deadlock.
            let (tx, rx) = std::sync::mpsc::channel();

            println!("  Phase 1: Finding intersections (streaming)...");
            std::thread::scope(|scope| {
                // Spawn producer in a thread — `move` captures `tx` by value
                scope.spawn(move || {
                    unique_lines_with_bbox
                        .par_iter()
                        .enumerate()
                        .for_each(|(i, line_a)| {
                            let current_prog =
                                progress_counter_atomic.fetch_add(1, Ordering::Relaxed);
                            if current_prog % 5000 == 0 && current_prog > 0 {
                                println!(
                                    "    Progress: {}/{} lines...",
                                    current_prog, total_outer_loops
                                );
                            }

                            let mut j = i + 1;
                            while j < unique_lines_with_bbox.len() {
                                let line_b = &unique_lines_with_bbox[j];
                                if line_b.x_min > line_a.x_max {
                                    break;
                                }
                                j += 1;

                                if line_a.gen < target_gen && line_b.gen < target_gen {
                                    continue;
                                }

                                if line_a.y_max < line_b.y_min || line_b.y_max < line_a.y_min {
                                    continue;
                                }

                                // Fast f64 check
                                let (x1, y1) = line_a.p1_f;
                                let (x2, y2) = line_a.p2_f;
                                let (x3, y3) = line_b.p1_f;
                                let (x4, y4) = line_b.p2_f;

                                let f_denom = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
                                if f_denom.abs() < 1e-12 {
                                    continue;
                                }

                                let t = ((x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4)) / f_denom;
                                let u = ((x1 - x3) * (y1 - y2) - (y1 - y3) * (x1 - x2)) / f_denom;

                                if t < -0.0001 || t > 1.0001 || u < -0.0001 || u > 1.0001 {
                                    continue;
                                }

                                if let Some(ix) = line_a.line.intersect(&line_b.line) {
                                    if ix.is_on_segment(&line_a.line.p1, &line_a.line.p2)
                                        && ix.is_on_segment(&line_b.line.p1, &line_b.line.p2)
                                    {
                                        // Send immediately — don't accumulate
                                        tx.send((
                                            ix,
                                            line_a.seed_id,
                                            line_a.la,
                                            line_b.seed_id,
                                            line_b.la,
                                            line_a.gen.max(line_b.gen),
                                        ))
                                        .ok();
                                    }
                                }
                            }
                        });
                    // tx is dropped here (owned via move) → channel closes → rx.recv() returns Err
                });

                // Main thread: consume intersections and register into self
                let mut received = 0usize;
                while let Ok((ix, seed_a, la, seed_b, lb, _gen)) = rx.recv() {
                    received += 1;
                    if received % 500000 == 0 {
                        println!("    Registered {} intersections so far...", received);
                    }

                    let key = ix.key();
                    let is_axis_pair = la == LineType::Axis || lb == LineType::Axis;

                    if !self.point_map.contains_key(&key) {
                        let idx = self.all_points.len();
                        self.all_points.push((
                            ix,
                            PointLabel::Intersection(seed_a, la, seed_b, lb),
                            seed_a,
                            0,
                        ));
                        self.point_map.insert(key.clone(), idx);
                    }

                    if !is_axis_pair {
                        let angles = self.hub_angles.entry(key).or_insert_with(HashSet::new);
                        let line_a_label = resolve_line_label(seed_a, la);
                        let line_b_label = resolve_line_label(seed_b, lb);
                        angles.insert(line_a_label);
                        angles.insert(line_b_label);
                    }
                }
                println!(
                    "  Processed {} total intersections. {} unique points.",
                    received,
                    self.all_points.len()
                );
            });

            // Save Phase 1 cache
            println!("  Saving Phase 1 cache...");
            save_cache_to_file(
                &phase1_cache_path,
                &(&self.all_points, &self.point_map, &self.hub_angles),
            );
        } // end Phase 1 cache miss

        // ==================== PHASES 2+3: HUB COUNTS + SORT (CACHED) ====================
        let phase23_cache_path = format!("cache/gen{}_phase2_3.bin", target_gen);
        if let Some(cached_points) = load_cache_from_file::<Phase23CacheData>(&phase23_cache_path) {
            println!("  ★ Phases 2+3 loaded from cache for gen {}!", target_gen);
            self.all_points = cached_points;
        } else {
            // Phase 2: Hub counts
            println!(
                "  Phase 2: Computing hub angles for {} hubs...",
                self.hub_angles.len()
            );
            for (key, lines_at_hub) in &self.hub_angles {
                if let Some(&idx) = self.point_map.get(&key) {
                    self.all_points[idx].3 = lines_at_hub.len();
                }
            }

            // Phase 3: Sort points
            println!("  Phase 3: Sorting {} points...", self.all_points.len());
            self.all_points.sort_by(|a, b| {
                let ax_f64 = a.0.x.to_f64();
                let bx_f64 = b.0.x.to_f64();
                if (ax_f64 - bx_f64).abs() > 1e-10 {
                    ax_f64
                        .partial_cmp(&bx_f64)
                        .unwrap_or(std::cmp::Ordering::Equal)
                } else {
                    let x_cmp = a.0.x.cmp(&b.0.x);
                    if x_cmp != std::cmp::Ordering::Equal {
                        x_cmp
                    } else {
                        let ay_f64 = a.0.y.to_f64();
                        let by_f64 = b.0.y.to_f64();
                        if (ay_f64 - by_f64).abs() > 1e-10 {
                            ay_f64
                                .partial_cmp(&by_f64)
                                .unwrap_or(std::cmp::Ordering::Equal)
                        } else {
                            a.0.y.cmp(&b.0.y)
                        }
                    }
                }
            });

            // Save Phase 2+3 cache
            println!("  Saving Phase 2+3 cache...");
            save_cache_to_file(&phase23_cache_path, &self.all_points);
        } // end Phase 2+3 cache miss

        println!(
            "Generation {} intersection analysis complete. {} unique points.",
            target_gen,
            self.all_points.len()
        );

        // ==================== PHASE 4: ATOMIC SPECTRUM (CACHED) ====================
        let phase4_cache_path = format!("cache/gen{}_phase4.bin", target_gen);
        if let Some((cached_ratios, cached_pairs, cached_freqs)) =
            load_cache_from_file::<Phase4CacheData>(&phase4_cache_path)
        {
            println!("  ★ Phase 4 loaded from cache for gen {}!", target_gen);
            self.unique_ratios = cached_ratios;
            self.ratio_pairs = cached_pairs;
            self.frequencies = cached_freqs;
        } else {
            // --- Phase 4: compute from scratch (or resume from checkpoint) ---

            // Step 4a: Build or load pairs
            let pairs_cache_path = format!("cache/gen{}_phase4_pairs.bin", target_gen);
            let pairs_sorted: Vec<(usize, usize)> = if let Some(cached) =
                load_cache_from_file::<Phase4PairsCache>(&pairs_cache_path)
            {
                println!(
                    "  ★ Phase 4 pairs loaded from cache ({} pairs).",
                    cached.len()
                );
                cached
            } else {
                // Collect pairs from generators x points (with batched checkpointing for gen 4+)
                let generators: Vec<(Point, Point)> = self
                    .lines
                    .iter()
                    .filter(|(_, _, _, gen, _)| *gen == target_gen)
                    .map(|(a, b, _, _, _)| (a.clone(), b.clone()))
                    .collect();

                let all_points_ref = &self.all_points;
                let points_f64: Vec<(f64, f64)> = all_points_ref
                    .iter()
                    .map(|(pt, _, _, _)| (pt.x.to_f64(), pt.y.to_f64()))
                    .collect();

                let total_generators = generators.len();
                println!(
                    "  Phase 4: Building atomic spectrum ({} generators x {} points)...",
                    total_generators,
                    all_points_ref.len()
                );

                let batch_size = 100_000usize;
                let pairs_progress_path =
                    format!("cache/gen{}_phase4_pairs_progress.bin", target_gen);

                // Try loading pair-collection progress checkpoint
                let (start_gen_idx, mut pairs): (usize, HashSet<(usize, usize)>) = if target_gen
                    >= 4
                {
                    if let Some(cached) =
                        load_cache_from_file::<(usize, Vec<(usize, usize)>)>(&pairs_progress_path)
                    {
                        let (saved_idx, saved_pairs_vec) = cached;
                        println!(
                                "  \u{2605} Pair collection resumed at generator {}/{} ({} pairs so far).",
                                saved_idx, total_generators, saved_pairs_vec.len()
                            );
                        (saved_idx, saved_pairs_vec.into_iter().collect())
                    } else {
                        (0, HashSet::new())
                    }
                } else {
                    (0, HashSet::new())
                };

                let points_f64_ref = &points_f64;
                let remaining = total_generators.saturating_sub(start_gen_idx);
                let num_batches = (remaining + batch_size - 1) / batch_size;

                for batch_idx in 0..num_batches {
                    let batch_start = start_gen_idx + batch_idx * batch_size;
                    let batch_end = (batch_start + batch_size).min(total_generators);
                    let batch = &generators[batch_start..batch_end];

                    println!(
                        "    Processing generators {}-{}/{} (batch {}/{})...",
                        batch_start,
                        batch_end,
                        total_generators,
                        batch_idx + 1,
                        num_batches
                    );

                    let pairs_vec: Vec<_> = batch
                        .par_iter()
                        .flat_map(|(ps, pe)| {
                            let sx = ps.x.to_f64();
                            let sy = ps.y.to_f64();
                            let ex = pe.x.to_f64();
                            let ey = pe.y.to_f64();

                            let dx_line = ex - sx;
                            let dy_line = ey - sy;
                            let line_len_sq = dx_line * dx_line + dy_line * dy_line;

                            let min_x = sx.min(ex) - 1e-9;
                            let max_x = sx.max(ex) + 1e-9;
                            let min_y = sy.min(ey) - 1e-9;
                            let max_y = sy.max(ey) + 1e-9;

                            let mut on_line: Vec<_> = all_points_ref
                                .iter()
                                .enumerate()
                                .filter_map(|(idx, (pt, _, _, _))| {
                                    let px = points_f64_ref[idx].0;
                                    let py = points_f64_ref[idx].1;

                                    let cross = (px - sx) * dy_line - (py - sy) * dx_line;
                                    let dist_sq = (cross * cross) / line_len_sq;

                                    if dist_sq > 1e-12 {
                                        None
                                    } else if px < min_x || px > max_x || py < min_y || py > max_y {
                                        None
                                    } else if pt.is_on_segment(ps, pe) {
                                        let dx = px - sx;
                                        let dy = py - sy;
                                        let dist_f64 = dx * dx + dy * dy;
                                        Some((idx, dist_f64))
                                    } else {
                                        None
                                    }
                                })
                                .collect();

                            on_line.sort_by(|a, b| {
                                if (a.1 - b.1).abs() > 1e-10 {
                                    a.1.partial_cmp(&b.1).unwrap_or(std::cmp::Ordering::Equal)
                                } else {
                                    all_points_ref[a.0]
                                        .0
                                        .distance_sq(ps)
                                        .cmp(&all_points_ref[b.0].0.distance_sq(ps))
                                }
                            });

                            on_line
                                .windows(2)
                                .map(|w| {
                                    let mut a = w[0].0;
                                    let mut b = w[1].0;
                                    if a > b {
                                        std::mem::swap(&mut a, &mut b);
                                    }
                                    (a, b)
                                })
                                .collect::<Vec<_>>()
                        })
                        .collect();

                    for pair in pairs_vec {
                        pairs.insert(pair);
                    }

                    // Checkpoint after each batch (gen 4+ only)
                    if target_gen >= 4 {
                        let pairs_vec_for_cache: Vec<(usize, usize)> =
                            pairs.iter().copied().collect();
                        println!(
                            "    \u{1F4BE} Pair checkpoint: {}/{} generators done, {} unique pairs so far.",
                            batch_end, total_generators, pairs.len()
                        );
                        save_cache_to_file(
                            &pairs_progress_path,
                            &(batch_end, &pairs_vec_for_cache),
                        );
                    }
                }

                println!("    {} unique pairs total.", pairs.len());

                // Convert to sorted Vec for deterministic ratio iteration
                let mut sorted: Vec<(usize, usize)> = pairs.into_iter().collect();
                sorted.sort();

                // Save final sorted pairs cache
                println!("  Saving Phase 4 pairs cache...");
                save_cache_to_file(&pairs_cache_path, &sorted);

                // Clean up pair-collection progress cache
                if std::fs::remove_file(&pairs_progress_path).is_ok() {
                    println!("  \u{1F5D1} Cleaned up pair collection progress cache.");
                }
                sorted
            };

            // Step 4b: Ratio computation (with incremental checkpointing for gen 4+)
            let total_ratio_pairs = pairs_sorted.len();
            let progress_cache_path = format!("cache/gen{}_phase4_progress.bin", target_gen);

            // Try loading incremental progress checkpoint
            let (start_idx, mut ratio_map) = if target_gen >= 4 {
                if let Some((saved_idx, saved_map, saved_ratios, saved_pairs, saved_freqs)) =
                    load_cache_from_file::<Phase4ProgressCache>(&progress_cache_path)
                {
                    println!(
                        "  ★ Phase 4 progress resumed at {}/{} for gen {}!",
                        saved_idx, total_ratio_pairs, target_gen
                    );
                    self.unique_ratios = saved_ratios;
                    self.ratio_pairs = saved_pairs;
                    self.frequencies = saved_freqs;
                    (saved_idx, saved_map)
                } else {
                    self.unique_ratios.clear();
                    self.ratio_pairs.clear();
                    self.frequencies.clear();
                    (0, HashMap::new())
                }
            } else {
                self.unique_ratios.clear();
                self.ratio_pairs.clear();
                self.frequencies.clear();
                (0, HashMap::new())
            };

            if start_idx < total_ratio_pairs {
                println!(
                    "    Computing ratios: {}/{} remaining...",
                    total_ratio_pairs - start_idx,
                    total_ratio_pairs
                );
            }

            for (offset, &(i, j)) in pairs_sorted[start_idx..].iter().enumerate() {
                let ratio_progress = start_idx + offset + 1;

                if ratio_progress % 10000 == 0 {
                    println!(
                        "    Ratio computation: {}/{} pairs...",
                        ratio_progress, total_ratio_pairs
                    );
                }

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

                // Incremental checkpoint every 100k steps (gen 4+ only)
                if target_gen >= 4 && ratio_progress % 100_000 == 0 {
                    println!(
                        "    💾 Saving incremental checkpoint at {}/{}...",
                        ratio_progress, total_ratio_pairs
                    );
                    save_cache_to_file(
                        &progress_cache_path,
                        &(
                            ratio_progress,
                            &ratio_map,
                            &self.unique_ratios,
                            &self.ratio_pairs,
                            &self.frequencies,
                        ),
                    );
                }
            }

            // Sort ratios
            let mut indices: Vec<usize> = (0..self.unique_ratios.len()).collect();
            indices.sort_by(|&a, &b| self.unique_ratios[a].0.cmp(&self.unique_ratios[b].0));

            let old_ratios = self.unique_ratios.clone();
            let old_pairs = self.ratio_pairs.clone();
            let old_freqs = self.frequencies.clone();

            self.unique_ratios = indices.iter().map(|&i| old_ratios[i].clone()).collect();
            self.ratio_pairs = indices.iter().map(|&i| old_pairs[i].clone()).collect();
            self.frequencies = indices.iter().map(|&i| old_freqs[i]).collect();

            println!(
                "  Atomic spectrum: {} unique ratios.",
                self.unique_ratios.len()
            );

            // Save final Phase 4 cache
            println!("  Saving final Phase 4 cache...");
            save_cache_to_file(
                &phase4_cache_path,
                &(&self.unique_ratios, &self.ratio_pairs, &self.frequencies),
            );

            // Clean up incremental caches (no longer needed)
            if std::fs::remove_file(&pairs_cache_path).is_ok() {
                println!("  🗑 Cleaned up pairs cache.");
            }
            if std::fs::remove_file(&progress_cache_path).is_ok() {
                println!("  🗑 Cleaned up progress cache.");
            }
        } // end Phase 4 cache miss
    }

    fn finalize_data(&mut self, _r: f64) {
        // Prevent OOM for massive generations
        if self.lines.len() > 50000 {
            self.data_log = format!(
                "Generation {} Summary:\nLines: {}\nPoints: {}\nCircles: {}\nSquares: {}\n\n(Detailed log skipped for memory safety)",
                self.generation,
                self.lines.len(),
                self.all_points.len(),
                self.circles.len(),
                self.squares.len()
            );
        }
        use std::io::Write;
        let filename = format!("gen{}_full_data.txt", self.generation);
        let file = std::fs::File::create(&filename).expect("Failed to create file");
        let mut writer = std::io::BufWriter::new(file);

        writeln!(
            writer,
            "=== THE ATOMIC SPECTRUM (Gen {} - Strict) ===",
            self.generation
        )
        .ok();
        writeln!(writer, "Index  Ratio (L/r)     Length          Freq").ok();
        writeln!(writer, "--------------------------------------------").ok();

        for (i, (ratio, len)) in self.unique_ratios.iter().enumerate() {
            writeln!(
                writer,
                "{:<6} {:<35} {:<35} x{}",
                i + 1,
                ratio.format_exact(),
                len.format_exact(),
                self.frequencies[i]
            )
            .ok();
        }

        writeln!(
            writer,
            "\n[STATS]\nSquares: {}\nPoints: {}\nUnique Ratios: {}\n",
            self.squares.len(),
            self.all_points.len(),
            self.unique_ratios.len()
        )
        .ok();

        // Separate file for atomic ratios only (small)
        let mut atomic_out = String::new();
        for (i, (ratio, len)) in self.unique_ratios.iter().enumerate() {
            atomic_out.push_str(&format!(
                "{:<6} {:<35} {:<35} x{}\n",
                i + 1,
                ratio.format_exact(),
                len.format_exact(),
                self.frequencies[i]
            ));
        }
        std::fs::write("gen_atomic_ratios_summary.txt", atomic_out).ok();

        writeln!(
            writer,
            "=== ARIORI GEN {} SEED (STRICT) - DATA LOG ===\n",
            self.generation
        )
        .ok();

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

        writeln!(writer, "--- ALGEBRAIC TEST ---").ok();
        writeln!(
            writer,
            "Total Scaffolding Length: {}",
            total_scaff_len.format_exact()
        )
        .ok();
        writeln!(
            writer,
            "Total Square Edge Length: {}",
            total_edge_len.format_exact()
        )
        .ok();
        if !total_edge_len.is_zero() {
            let ratio_test = total_scaff_len / total_edge_len;
            writeln!(
                writer,
                "Ratio (Scaff / Edge):   {} ({:.12})\n",
                ratio_test.format_exact(),
                ratio_test.to_f64()
            )
            .ok();
        }

        let mut unique_primary = HashSet::new();
        for c in &self.circles {
            unique_primary.insert((c.center.key(), c.radius.format_exact()));
        }
        let mut unique_arcs = HashSet::new();
        for a in &self.arcs {
            unique_arcs.insert((a.center.key(), a.radius.format_exact()));
        }

        writeln!(writer, "Primary Circles: {}", unique_primary.len()).ok();
        writeln!(writer, "Unique Arcs: {}", unique_arcs.len()).ok();
        writeln!(writer, "Total Squares: {}", self.squares.len()).ok();
        writeln!(writer, "Total Points: {}\n", self.all_points.len()).ok();

        if self.generation == 1 {
            // Build a fresh coordinate→label map from the CURRENT all_points state
            // (point_map indices can be stale after Phase 2+3 cache overwrites all_points)
            let fresh_label_map: HashMap<(VesicaNumber, VesicaNumber), PointLabel> = self
                .all_points
                .iter()
                .map(|(p, label, _, _)| (p.key(), label.clone()))
                .collect();

            writeln!(writer, "=== GEN 1 ATOMIC LINES (Point-to-Point) ===").ok();
            writeln!(writer, "Idx  Point 1        Point 2        Type                Length               Status").ok();
            writeln!(writer, "-----------------------------------------------------------------------------------------").ok();
            let mut seen = HashSet::new();
            for (idx, (p1, p2, l_type, _, _)) in self.lines.iter().enumerate() {
                let mut p1_key = p1.key();
                let mut p2_key = p2.key();
                if p1_key > p2_key {
                    std::mem::swap(&mut p1_key, &mut p2_key);
                }
                let is_duplicate = !seen.insert((p1_key, p2_key));
                
                let p1_name = fresh_label_map.get(&p1.key())
                    .map(|l| resolve_label(l))
                    .unwrap_or_else(|| format!("?({:.1},{:.1})", p1.x.to_f64(), p1.y.to_f64()));
                let p2_name = fresh_label_map.get(&p2.key())
                    .map(|l| resolve_label(l))
                    .unwrap_or_else(|| format!("?({:.1},{:.1})", p2.x.to_f64(), p2.y.to_f64()));
                let dist_sq = p1.distance_sq(p2);
                let d_str = if let Some(d) = dist_sq.vesica_sqrt() {
                    d.format_exact()
                } else {
                    format!("sqrt({})", dist_sq.format_exact())
                };
                
                let status = if is_duplicate { "[DUPLICATE]" } else { "" };
                
                writeln!(
                    writer,
                    "{:<4} {:<14} {:<14} {:<19} {:<20} {}",
                    idx + 1,
                    p1_name,
                    p2_name,
                    l_type.as_str(),
                    d_str,
                    status
                ).ok();
            }
            writeln!(writer, "\n").ok();
        }

        writeln!(writer, "--- ATOMIC SPECTRUM ---").ok();
        // (Previously written above)

        writeln!(writer, "\n--- GEOMETRIC ANALYSIS ---").ok();
        writer.write_all(self.data_log.as_bytes()).ok();

        if !self.latent_ratios.is_empty() {
            writeln!(
                writer,
                "\n--- LATENT SPECTRUM (Gen 1) ---\nTotal Latent Ratios: {} (from 115 point pairs)\n",
                self.latent_ratios.len()
            )
            .ok();

            writeln!(writer, "Index  Ratio (L/r)                         Length                              Freq   Type               ").ok();
            writeln!(writer, "---------------------------------------------------------------------------------------------------------").ok();

            for (i, (ratio, len)) in self.latent_ratios.iter().enumerate() {
                let type_info = &self.latent_ratio_types[i];
                let freq = self.latent_frequencies[i];
                let type_str = match type_info {
                    LatentRatioType::PureAtomic => "Pure Atomic".to_string(),
                    LatentRatioType::PureLatent => "Pure Latent".to_string(),
                    LatentRatioType::Mixed(l, a) => format!("Mixed ({}L/{}A)", l, a),
                };

                let line = format!(
                    "{:<6} {:<35} {:<35} x{:<6} ",
                    i + 1,
                    ratio.format_exact(),
                    len.format_exact(),
                    freq
                );

                writeln!(writer, "{}{}", line, type_str).ok();
            }

        }

        writer.flush().ok();
        println!("Full data log saved to {}", filename);
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

        // Guard: Only run for Generation 1 and only use the 17 base points
        if self.generation > 1 {
            println!("  Skipping latent analysis for Gen {} (restricted to Gen 1).", self.generation);
            return;
        }

        let n_pts = self.all_points.len().min(17);
        if n_pts < 2 {
            return;
        }

        println!("LATENT_DIAGNOSTIC_START");
        for (i, (p, label, _, _)) in self.all_points.iter().enumerate().take(n_pts) {
            println!("PT_{}: ({}, {}) - {:?}", i, p.x.format_exact(), p.y.format_exact(), label);
        }
        println!("LATENT_DIAGNOSTIC_END");

        // Step 1: Build exclusion set from the atomic spectrum pairs
        // The 6 atomic ratios have a total of 21 point pairs — these are the "atomic lines".
        let mut atomic_line_pairs: HashSet<(usize, usize)> = HashSet::new();
        for pairs in &self.ratio_pairs {
            for &(a, b) in pairs {
                let pair = if a < b { (a, b) } else { (b, a) };
                atomic_line_pairs.insert(pair);
            }
        }
        println!(
            "  Excluding {} atomic line pairs (from {} atomic ratios) from latent set.",
            atomic_line_pairs.len(),
            self.unique_ratios.len()
        );

        // Step 2: Generate ALL latent lines (all C(N,2) pairs minus atomic lines)
        let mut latent_line_idx: Vec<(usize, usize)> = Vec::new();
        let mut line_counter = 0usize;
        for i in 0..n_pts {
            for j in (i + 1)..n_pts {
                if !atomic_line_pairs.contains(&(i, j)) {
                    let label = format!("L{}", line_counter + 1);
                    self.latent_lines.push((
                        self.all_points[i].0.clone(),
                        self.all_points[j].0.clone(),
                        i,
                        j,
                        label,
                    ));
                    latent_line_idx.push((i, j));
                    line_counter += 1;
                }
            }
        }
        println!(
            "  Generated {} latent lines (from {} total pairs, {} atomic excluded).",
            self.latent_lines.len(),
            n_pts * (n_pts - 1) / 2,
            atomic_line_pairs.len()
        );

        // Step 3: Compute ratios for latent lines where vesica_sqrt succeeds
        let mut ratio_map: HashMap<String, usize> = HashMap::new();
        let all_points = &self.all_points;

        let latent_pairs_data: Vec<_> = latent_line_idx
            .par_iter()
            .filter_map(|&(i, j)| {
                let dist_sq = all_points[i].0.distance_sq(&all_points[j].0);
                if let Some(dist) = dist_sq.vesica_sqrt() {
                    let ratio = dist.clone() / r.clone();
                    if ratio.to_f64() >= 1e-10 {
                        return Some((ratio.format_exact(), ratio, dist, i, j));
                    }
                }
                None
            })
            .collect();

        let exact_ratio_count = latent_pairs_data.len();

        for (key, ratio, dist, i, j) in latent_pairs_data {
            if let Some(&idx) = ratio_map.get(&key) {
                self.latent_pairs[idx].push((i, j));
                self.latent_frequencies[idx] += 1;
            } else {
                ratio_map.insert(key.clone(), self.latent_ratios.len());
                self.latent_ratios.push((ratio, dist));
                self.latent_pairs.push(vec![(i, j)]);
                self.latent_frequencies.push(1);
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

        println!(
            "  {} latent ratios computed ({} lines have exact VesicaNumber distances).",
            self.latent_ratios.len(),
            exact_ratio_count
        );

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

        let mut temp_point_data: HashMap<
            (VesicaNumber, VesicaNumber),
            (Point, Vec<(Point, Point)>, Vec<String>),
        > = HashMap::new();

        if self.generation == 1 {
            println!(
                "Computing latent x latent intersections ({} lines)...",
                self.latent_lines.len()
            );
            let latent_latent_ix: Vec<_> = self
                .latent_lines
                .par_iter()
                .enumerate()
                .flat_map(|(i, line_a)| {
                    self.latent_lines[i + 1..]
                        .par_iter()
                        .filter_map(|line_b| {
                            let (a1, a2, _, _, la) = line_a;
                            let (b1, b2, _, _, lb) = line_b;

                            if let Some(ix) = Line::new(a1.clone(), a2.clone())
                                .intersect(&Line::new(b1.clone(), b2.clone()))
                            {
                                if ix.is_on_segment(a1, a2) && ix.is_on_segment(b1, b2) {
                                    return Some((
                                        ix,
                                        (a1.clone(), a2.clone()),
                                        (b1.clone(), b2.clone()),
                                        la.clone(),
                                        lb.clone(),
                                    ));
                                }
                            }
                            None
                        })
                        .collect::<Vec<_>>()
                })
                .collect();

            for (ix, p_a, p_b, la, lb) in latent_latent_ix {
                let key = ix.key();
                if self.point_map.contains_key(&key) {
                    continue;
                }

                let entry = temp_point_data
                    .entry(key)
                    .or_insert((ix, Vec::new(), Vec::new()));
                entry.1.push(p_a);
                entry.1.push(p_b);
                entry.2.push(format!("LX[{} ^ {}]", la, lb));
            }
        }

        let target_gen = self.generation;
        let construction_lines: Vec<(Point, Point)> = self
            .lines
            .iter()
            .filter(|(_, _, _, gen, _)| *gen <= target_gen)
            .map(|(a, b, _, _, _)| (a.clone(), b.clone()))
            .collect();

        println!(
            "Computing latent x atomic intersections ({} latent lines x {} atomic lines)...",
            self.latent_lines.len(),
            construction_lines.len()
        );

        let latent_atomic_ix: Vec<_> = self
            .latent_lines
            .par_iter()
            .flat_map(|line_l| {
                let (a1, a2, _, _, l_label) = line_l;
                construction_lines
                    .iter()
                    .filter_map(|(con_a, con_b)| {
                        if let Some(ix) = Line::new(a1.clone(), a2.clone())
                            .intersect(&Line::new(con_a.clone(), con_b.clone()))
                        {
                            if ix.is_on_segment(a1, a2) && ix.is_on_segment(con_a, con_b) {
                                return Some((ix, (a1.clone(), a2.clone()), l_label.clone()));
                            }
                        }
                        None
                    })
                    .collect::<Vec<_>>()
            })
            .collect();

        for (ix, parents_l, l_label) in latent_atomic_ix {
            let key = ix.key();
            if self.point_map.contains_key(&key) {
                continue;
            }

            let entry = temp_point_data
                .entry(key)
                .or_insert((ix, Vec::new(), Vec::new()));
            entry.1.push(parents_l);
            entry.2.push(format!("LCX[{} ^ Atomic]", l_label));
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
        let mut new_ratio_map: HashMap<VesicaNumber, usize> = HashMap::new();
        let latent_new_points = &self.latent_new_points;
        let all_points = &self.all_points;
        let new_ratios_data: Vec<_> = latent_new_points
            .par_iter()
            .flat_map(|l_pt| {
                all_points
                    .par_iter()
                    .filter_map(|(apt, _, _, _)| {
                        let dist_sq = l_pt.pt.distance_sq(apt);
                        if let Some(dist) = dist_sq.vesica_sqrt() {
                            let ratio = dist.clone() / r.clone();
                            if ratio.to_f64() >= 1e-10 {
                                return Some((ratio.clone(), ratio, dist));
                            }
                        }
                        None
                    })
                    .collect::<Vec<_>>()
            })
            .collect();

        for (key, ratio, dist) in new_ratios_data {
            if let Some(&idx) = new_ratio_map.get(&key) {
                self.latent_new_frequencies[idx] += 1;
            } else {
                new_ratio_map.insert(key, self.latent_new_ratios.len());
                self.latent_new_ratios.push((ratio, dist));
                self.latent_new_frequencies.push(1);
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

    pub fn get_lineage(
        &self,
        pt_idx: usize,
        out_lines: &mut Vec<(Point, Point)>,
        out_points: &mut HashSet<usize>,
    ) {
        if !out_points.insert(pt_idx) {
            return;
        }
        let (_pt, label, _s_id, _) = &self.all_points[pt_idx];

        let find_line = |s_id: usize, lt: LineType| -> Option<(Point, Point)> {
            let start = *self.seed_index.get(&s_id)?;
            // Lines for a seed are grouped together starting with Axis
            for offset in 0..12 {
                // 1 Axis + 6 Scaff + 4 Edge = 11 lines
                if let Some((p1, p2, l_type, _, sid)) = self.lines.get(start + offset) {
                    if *sid == s_id && *l_type == lt {
                        return Some((p1.clone(), p2.clone()));
                    }
                }
            }
            None
        };

        match label {
            PointLabel::Intersection(seed_a, la, seed_b, lb) => {
                for (s_id, lt) in [(*seed_a, *la), (*seed_b, *lb)] {
                    if let Some((p1, p2)) = find_line(s_id, lt) {
                        out_lines.push((p1.clone(), p2.clone()));
                        if let Some(&p1_idx) = self.point_map.get(&p1.key()) {
                            self.get_lineage(p1_idx, out_lines, out_points);
                        }
                        if let Some(&p2_idx) = self.point_map.get(&p2.key()) {
                            self.get_lineage(p2_idx, out_lines, out_points);
                        }
                    }
                }
            }
            PointLabel::Latent(_) => return,
            PointLabel::Seed(seed_id, _pt_type) => {
                if *seed_id == 0 || *seed_id == 1 {
                    return;
                }
                if let Some((p1, p2)) = find_line(*seed_id, LineType::Axis) {
                    out_lines.push((p1.clone(), p2.clone()));
                    if let Some(&p1_idx) = self.point_map.get(&p1.key()) {
                        self.get_lineage(p1_idx, out_lines, out_points);
                    }
                    if let Some(&p2_idx) = self.point_map.get(&p2.key()) {
                        self.get_lineage(p2_idx, out_lines, out_points);
                    }
                }
            }
        }
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
    trace_mode: bool,
    traced_instance: usize,
    traced_lines: Vec<(Point, Point)>,
    traced_points: HashSet<usize>,
    loading_promise: Option<std::sync::mpsc::Receiver<Gen1Seed>>,
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
            trace_mode: false,
            traced_instance: 0,
            traced_lines: Vec::new(),
            traced_points: HashSet::new(),
            loading_promise: None,
        }
    }
}

impl App {
    fn update_trace(&mut self) {
        self.traced_lines.clear();
        self.traced_points.clear();
        if let Some(r_idx) = self.selected_ratio {
            if self.trace_mode && r_idx < self.seed.ratio_pairs.len() {
                let inst = self
                    .traced_instance
                    .min(self.seed.ratio_pairs[r_idx].len().saturating_sub(1));
                let (pt_a_idx, pt_b_idx) = self.seed.ratio_pairs[r_idx][inst];
                self.seed
                    .get_lineage(pt_a_idx, &mut self.traced_lines, &mut self.traced_points);
                self.seed
                    .get_lineage(pt_b_idx, &mut self.traced_lines, &mut self.traced_points);
            }
        }
    }
}

impl eframe::App for App {
    fn update(&mut self, ctx: &egui::Context, _frame: &mut eframe::Frame) {
        if let Some(rx) = &self.loading_promise {
            if let Ok(seed) = rx.try_recv() {
                self.seed = seed;
                self.loading_promise = None;
                self.child_filter = None;
                self.instance_filter = None;
                self.update_trace();
            }
        }

        let is_loading = self.loading_promise.is_some();

        egui::SidePanel::left("controls").show(ctx, |ui| {
            egui::ScrollArea::vertical().show(ui, |ui| {
                ui.heading("Ariori Seed Visualizer");
                ui.separator();

                if is_loading {
                    ui.horizontal(|ui| {
                        ui.spinner();
                        ui.heading("Loading Generation Data...");
                    });
                    ui.label("This may take some time depending on the generation and cache.");
                    ui.separator();
                }

                ui.horizontal(|ui| {
                    ui.label("Generation:");
                    let mut switch_gen = None;
                    if ui.radio_value(&mut self.selected_gen, 1, "1").clicked() && !is_loading {
                        switch_gen = Some(1);
                    }
                    if ui.radio_value(&mut self.selected_gen, 2, "2").clicked() && !is_loading {
                        switch_gen = Some(2);
                    }
                    if ui.radio_value(&mut self.selected_gen, 3, "3").clicked() && !is_loading {
                        switch_gen = Some(3);
                    }
                    if ui.radio_value(&mut self.selected_gen, 4, "4").clicked() && !is_loading {
                        switch_gen = Some(4);
                    }

                    if let Some(target_g) = switch_gen {
                        let (tx, rx) = std::sync::mpsc::channel();
                        self.loading_promise = Some(rx);
                        let ctx_clone = ctx.clone();
                        std::thread::spawn(move || {
                            let s = Gen1Seed::new(100.0, target_g);
                            tx.send(s).ok();
                            ctx_clone.request_repaint();
                        });
                        self.show_step = 0;
                        self.selected_ratio = None;
                        self.update_trace();
                    }
                });

                ui.add_enabled_ui(!is_loading, |ui| {
                    if self.selected_gen > 1 {
                        ui.separator();
                        ui.label(format!(
                            "Parent Seeds Filter (by Gen {} Ratio):",
                            self.selected_gen - 1
                        ));
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
                    let mut newly_selected = None;
                    let mut unselected = false;
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
                                        unselected = true;
                                    } else {
                                        newly_selected = Some(i);
                                    }
                                }
                            }
                        });

                    if unselected {
                        self.selected_ratio = None;
                        self.update_trace();
                    } else if let Some(i) = newly_selected {
                        self.selected_ratio = Some(i);
                        self.traced_instance = 0;
                        self.update_trace();
                    }

                    ui.separator();
                    if ui
                        .checkbox(&mut self.trace_mode, "Trace Genesis Lineage")
                        .changed()
                    {
                        self.update_trace();
                    }
                    if self.trace_mode && self.selected_ratio.is_some() {
                        let r_idx = self.selected_ratio.unwrap();
                        if r_idx < self.seed.frequencies.len() {
                            let freq = self.seed.frequencies[r_idx];
                            ui.label(format!("Tracing Instance (1-{}):", freq));
                            let mut inst = self.traced_instance + 1;
                            if ui.add(egui::Slider::new(&mut inst, 1..=freq)).changed() {
                                self.traced_instance = inst - 1;
                                self.update_trace();
                            }
                        }
                    }

                    ui.separator();
                    if ui.button("Reset View").clicked() {
                        self.zoom = 1.5;
                        self.offset = [0.0, 0.0];
                    }

                    // ========== LATENT SPECTRUM SECTION ==========
                    ui.separator();
                    ui.separator();
                    if ui.checkbox(&mut self.seed.deduplicate_atomic, "Deduplicate Atomic").changed() {
                        let r = self.seed.circles[1].radius.clone();
                        self.seed.setup_gen1_foundation(r);
                        self.seed.finalize_data(100.0);
                    }
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
                            .id_source("latent_spectrum_scroll")
                            .max_height(250.0)
                            .show(ui, |ui| {
                                for (i, (ratio, len)) in self.seed.latent_ratios.iter().enumerate()
                                {
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
                }); // End of add_enabled_ui block
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

            if is_loading {
                return;
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
                    // New seed_id: (g)*100,000,000 + (ratio)*100,000 + ins
                    // Decodings handle this correctly via decode_seed
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

            // Draw all unique points as dots (only if zoomed in or reasonably few)
            if self.show_points && self.show_step == 0 {
                let limit = if self.child_filter.is_some() {
                    10000
                } else {
                    2000
                };
                if self.seed.all_points.len() > limit && zoom < 5.0 && self.child_filter.is_none() {
                    // Skip drawing millions of dots if zoomed out and unfiltered to prevent freeze
                } else {
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
                            // Draw with small offset and dark color for visibility on white background
                            paint.text(
                                to_s(pt.clone()) + egui::vec2(2.0, -2.0),
                                egui::Align2::LEFT_BOTTOM,
                                name,
                                egui::FontId::proportional(10.0), // Slightly larger
                                egui::Color32::BLACK,             // Dark color
                            );
                        }
                    }
                }
            }

            // Draw highlighted ratio pairs
            if let Some(idx) = self.selected_ratio {
                if idx < self.seed.ratio_pairs.len() {
                    let pairs = &self.seed.ratio_pairs[idx];
                    let orange = egui::Color32::from_rgb(255, 165, 0);
                    if self.trace_mode {
                        let inst = self.traced_instance.min(pairs.len().saturating_sub(1));
                        let (i, j) = pairs[inst];
                        let p1 = self.seed.all_points[i].0.clone();
                        let p2 = self.seed.all_points[j].0.clone();
                        paint.line_segment(
                            [to_s(p1.clone()), to_s(p2.clone())],
                            egui::Stroke::new(6.0, orange),
                        );
                        paint.circle_filled(to_s(p1), 8.0, orange);
                        paint.circle_filled(to_s(p2), 8.0, orange);
                    } else {
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
                }
            }

            // Draw Traced Lineage
            if self.trace_mode && !self.traced_lines.is_empty() {
                let magenta = egui::Color32::from_rgb(255, 0, 255);
                let cyan = egui::Color32::from_rgb(0, 255, 255);

                // Draw Ancestor Lines
                for (p1, p2) in &self.traced_lines {
                    paint.line_segment(
                        [to_s(p1.clone()), to_s(p2.clone())],
                        egui::Stroke::new(2.5, magenta),
                    );
                }

                // Draw Ancestor Points
                for &pt_idx in &self.traced_points {
                    if pt_idx < self.seed.all_points.len() {
                        let (pt, _, _, _) = &self.seed.all_points[pt_idx];
                        paint.circle_filled(to_s(pt.clone()), 4.0, cyan);
                    }
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
    let args: Vec<String> = std::env::args().collect();
    if args.contains(&"--export-gui".to_string()) {
        let seed = Gen1Seed::new(100.0, 2);
        println!("==== CIRCLES ====");
        for c in &seed.circles {
            println!("C: {} {} {}", c.center.x.to_f64(), c.center.y.to_f64(), c.radius.to_f64());
        }
        println!("==== SQUARES ====");
        for sq in &seed.squares {
            // The square vertices are k, l, n, m. (In that order for drawing: K->L->N->M->K)
            println!("SQ: {} {} {} {} {} {} {} {}", 
               sq.k.x.to_f64(), sq.k.y.to_f64(),
               sq.l.x.to_f64(), sq.l.y.to_f64(),
               sq.n.x.to_f64(), sq.n.y.to_f64(),
               sq.m.x.to_f64(), sq.m.y.to_f64());
        }
        println!("==== SCAFFOLDING ====");
        for sq in &seed.squares {
            // The GUI reconstructions the 6 scaffolding lines per square
            let scaff = [
                (&sq.p1, &sq.p3),
                (&sq.p5, &sq.p2),
                (&sq.c1, &sq.c3),
                (&sq.c4, &sq.c2),
                (&sq.p4, &sq.c2),
                (&sq.p6, &sq.c4),
            ];
            for (pt1, pt2) in scaff {
                println!("L: {} {} {} {}", pt1.x.to_f64(), pt1.y.to_f64(), pt2.x.to_f64(), pt2.y.to_f64());
            }
        }
        // Also the main horizontal axis if it's rendered by scaffolding in GUI
        let o = Point::new(VesicaNumber::zero(), VesicaNumber::zero());
        let p = Point::new(seed.circles[1].radius.clone(), VesicaNumber::zero());
        println!("L: {} {} {} {}", o.x.to_f64(), o.y.to_f64(), p.x.to_f64(), p.y.to_f64());
        return Ok(());
    }
    if args.contains(&"--headless".to_string()) {
        println!("Starting Headless Generation 4 Calculation...");
        println!("This may take several hours. Progress will be reported every 5000 lines.");
        let start = std::time::Instant::now();
        let _seed = Gen1Seed::new(100.0, 4);
        let duration = start.elapsed();

        println!("Generation 4 complete in {:?}", duration);
        println!("Output saved to gen4_full_data.txt");
        return Ok(());
    }

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

#[cfg(test)]
mod tests {
    use super::*;
    use std::time::Instant;

    #[test]
    fn test_gen4_performance() {
        println!("Starting Gen 4 performance test...");
        let start = Instant::now();
        let _seed = Gen1Seed::new(100.0, 4);
        let duration = start.elapsed();
        println!("Gen 4 completed in: {:?}", duration);
    }
}
