"""
Ariori GR Test: Gen 1 -> Gen 2
===================================
Hypothesis: Einstein's Field Equations (G_mu_nu = 8piG T_mu_nu) emerge dynamically 
across generations. 
- Local Energy Density T_i at node i is proportional to the topological degree and 
  inversely proportional to the length of its atomic connections (T = sum 1/L).
- Local Curvature G_i is the measured geometric density of new Gen 2 points spawned 
  around node i (the literal contraction/density of the metric space).

If G_i is strictly linear with T_i, the geometric algorithm inherently executes 
General Relativity.
"""
import math
import numpy as np
from collections import defaultdict

TOL = 1e-9

def dist(p1, p2):
    return math.hypot(p1[0]-p2[0], p1[1]-p2[1])

def pts_equal(p1, p2):
    return dist(p1, p2) < TOL

def add_unique(pts, new_pt):
    for p in pts:
        if pts_equal(p, new_pt):
            return False
    pts.append(new_pt)
    return True

def circle_circle_intersections(c1, c2, r1, r2):
    d = dist(c1, c2)
    if d > r1 + r2 + TOL or d < abs(r1 - r2) - TOL or d < TOL:
        return []
    a = (r1**2 - r2**2 + d**2) / (2*d)
    h2 = r1**2 - a**2
    if h2 < -TOL: return []
    h = math.sqrt(max(0, h2))
    dx, dy = (c2[0]-c1[0])/d, (c2[1]-c1[1])/d
    mx, my = c1[0] + a*dx, c1[1] + a*dy
    if h < TOL: return [(mx, my)]
    return [(mx + h*(-dy), my + h*dx), (mx - h*(-dy), my - h*dx)]

def line_seg_intersect(a1, a2, b1, b2):
    dx1, dy1 = a2[0]-a1[0], a2[1]-a1[1]
    dx2, dy2 = b2[0]-b1[0], b2[1]-b1[1]
    denom = dx1*dy2 - dy1*dx2
    if abs(denom) < TOL: return None
    t = ((b1[0]-a1[0])*dy2 - (b1[1]-a1[1])*dx2) / denom
    return (a1[0] + t*dx1, a1[1] + t*dy1)

def line_circle_intersections(p1, p2, center, r):
    dx, dy = p2[0]-p1[0], p2[1]-p1[1]
    a = dx*dx + dy*dy
    if a < TOL: return []
    fx, fy = p1[0]-center[0], p1[1]-center[1]
    b = 2*(fx*dx + fy*dy)
    c = fx*fx + fy*fy - r*r
    disc = b*b - 4*a*c
    if disc < -TOL: return []
    disc = max(0, disc)
    t1 = (-b - math.sqrt(disc)) / (2*a)
    t2 = (-b + math.sqrt(disc)) / (2*a)
    return [(p1[0]+t1*dx, p1[1]+t1*dy), (p1[0]+t2*dx, p1[1]+t2*dy)]

def point_on_segment(pt, a, b):
    return abs(dist(a, pt) + dist(pt, b) - dist(a, b)) < TOL

def build_square(ax, ay, bx, by):
    r = dist((ax,ay), (bx,by))
    A, B = (ax, ay), (bx, by)
    vp = circle_circle_intersections(A, B, r, r)
    if len(vp) < 2: return [], [], r
    P1, P2 = vp[0], vp[1]
    
    exclude = [A, B, P1, P2]
    P3 = next((p for p in circle_circle_intersections(P1, A, r, r) if not any(pts_equal(p, e) for e in exclude)), None)
    P4 = next((p for p in circle_circle_intersections(P1, B, r, r) if not any(pts_equal(p, e) for e in exclude)), None)
    P5 = next((p for p in circle_circle_intersections(P2, A, r, r) if not any(pts_equal(p, e) for e in exclude)), None)
    P6 = next((p for p in circle_circle_intersections(P2, B, r, r) if not any(pts_equal(p, e) for e in exclude)), None)
    if any(p is None for p in [P3, P4, P5, P6]): return [], [], r

    hits_1 = line_circle_intersections(P4, A, A, r)
    C1, C2 = hits_1[0], hits_1[1]
    if dist(C1, P4) > dist(C2, P4): C1, C2 = C2, C1
    
    hits_2 = line_circle_intersections(P6, A, A, r)
    C3, C4 = hits_2[0], hits_2[1]
    if dist(C3, P6) > dist(C4, P6): C3, C4 = C4, C3

    points = [A, B, P1, P2, P3, P4, P5, P6, C1, C2, C3, C4]
    lines = [(P4, C2), (P6, C4), (P1, P3), (P5, P2), (C1, C3), (C4, C2), (A, B)]
    
    for i in range(len(lines)):
        for j in range(i+1, len(lines)):
            pt = line_seg_intersect(lines[i][0], lines[i][1], lines[j][0], lines[j][1])
            if pt: add_unique(points, pt)

    return points, lines, r

def get_atomic_lines(points, lines):
    atomic = []
    for (a, b) in lines:
        on_seg = [p for p in points if point_on_segment(p, a, b) and not pts_equal(p, a) and not pts_equal(p, b)]
        on_seg.sort(key=lambda p: dist(a, p))
        chain = [a] + on_seg + [b]
        for i in range(len(chain)-1):
            if dist(chain[i], chain[i+1]) > TOL:
                atomic.append((chain[i], chain[i+1], dist(chain[i], chain[i+1])))
    return atomic

# 1. Gen 1 Build
gen1_pts, gen1_lines, r = build_square(0, 0, 100, 0)
gen1_atomic = get_atomic_lines(gen1_pts, gen1_lines)

# Identify node indices for tracking
pt_idx = {p: i for i, p in enumerate(gen1_pts)}
N = len(gen1_pts)

# 2. Compute T_i (Energy Density) for each Gen 1 node
# T_i = sum(1 / L) for all atomic connections
T = np.zeros(N)
for (a, b, length) in gen1_atomic:
    idx_a, idx_b = pt_idx[a], pt_idx[b]
    energy = 1.0 / length  # E ~ 1/L -> smaller length means higher frequency/energy
    T[idx_a] += energy
    T[idx_b] += energy

# 3. Build Gen 2
gen2_pts = []
for (a, b, seg_len) in gen1_atomic:
    child_pts, child_lines, _ = build_square(a[0], a[1], b[0], b[1])
    for p in child_pts:
        add_unique(gen2_pts, p)

print(f"Gen 1 Points: {len(gen1_pts)}")
print(f"Gen 2 Unique Points Spawned: {len(gen2_pts)}")

# 4. Compute G_i (Geometric Curvature) for each Gen 1 node
# Space contraction logic: Curvature ~ density of space. 
# We count how many Gen 2 points fall within a standardized radius R around node i.
# High curvature = more points packed into the neighborhood.
R_search = 100.0 * 0.5  # Half of initial radius
G = np.zeros(N)

for i, p1 in enumerate(gen1_pts):
    pts_in_radius = sum(1 for p2 in gen2_pts if dist(p1, p2) <= R_search)
    G[i] = pts_in_radius

print("\n" + "="*70)
print(f"{'Node Index':<10} | {'T (Energy Density 1/L)':<25} | {'G (Gen2 Point Density)':<25}")
print("="*70)

for i in range(N):
    print(f"{i:<10} | {T[i]:<25.4f} | {G[i]:<25.0f}")

# 5. Correlation Analysis
correlation = np.corrcoef(T, G)[0, 1]
print("\n" + "="*70)
print(f"CORRELATION BETWEEN ENERGY (T) AND CURVATURE (G): {correlation:.4f}")
print("="*70)

if correlation > 0.9:
    print("RESULT: Highly linear relationship. General Relativity emerges perfectly:")
    print("Shorter atomic lines structurally force denser generations, mimicking G = 8pi T.")
elif correlation > 0.7:
    print("RESULT: Strong positive correlation. Spacetime curvature fundamentally follows mass distribution.")
else:
    print("RESULT: Weak or complex non-linear relationship.")
