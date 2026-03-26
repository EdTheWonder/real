import math

s3 = math.sqrt(3)
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
    if -TOL <= t <= 1+TOL:
        return (a1[0] + t*dx1, a1[1] + t*dy1)
    return None

def line_circle_intersections(p1, p2, center, radius):
    dx, dy = p2[0]-p1[0], p2[1]-p1[1]
    a = dx*dx + dy*dy
    if a < TOL: return []
    fx, fy = p1[0]-center[0], p1[1]-center[1]
    b = 2*(fx*dx + fy*dy)
    c = fx*fx + fy*fy - radius*radius
    disc = b*b - 4*a*c
    if disc < -TOL: return []
    disc = max(0, disc)
    t1 = (-b - math.sqrt(disc)) / (2*a)
    t2 = (-b + math.sqrt(disc)) / (2*a)
    return [(p1[0]+t1*dx, p1[1]+t1*dy), (p1[0]+t2*dx, p1[1]+t2*dy)]

def point_on_segment(pt, a, b):
    return abs(dist(a, pt) + dist(pt, b) - dist(a, b)) < TOL

def build_square_simple(ax, ay, bx, by):
    radius = dist((ax,ay), (bx,by))
    A, B = (ax, ay), (bx, by)
    vp = circle_circle_intersections(A, B, radius, radius)
    if len(vp) < 2: return []
    P1, P2 = vp[0], vp[1]
    exclude = [A, B, P1, P2]
    P3 = next((p for p in circle_circle_intersections(P1, A, radius, radius) if not any(pts_equal(p, e) for e in exclude)), None)
    P4 = next((p for p in circle_circle_intersections(P1, B, radius, radius) if not any(pts_equal(p, e) for e in exclude)), None)
    P5 = next((p for p in circle_circle_intersections(P2, A, radius, radius) if not any(pts_equal(p, e) for e in exclude)), None)
    P6 = next((p for p in circle_circle_intersections(P2, B, radius, radius) if not any(pts_equal(p, e) for e in exclude)), None)
    if any(p is None for p in [P3, P4, P5, P6]): return []
    
    hits_1 = line_circle_intersections(P4, A, A, radius)
    if len(hits_1) < 2: return []
    C1, C2 = hits_1[0], hits_1[1]
    if dist(C1, P4) > dist(C2, P4): C1, C2 = C2, C1
    hits_2 = line_circle_intersections(P6, A, A, radius)
    if len(hits_2) < 2: return []
    C3, C4 = hits_2[0], hits_2[1]
    if dist(C3, P6) > dist(C4, P6): C3, C4 = C4, C3
    
    pts = [A, B, P1, P2, P3, P4, P5, P6, C1, C2, C3, C4]
    
    # We extend the lines infinitely conceptually, but for bounding intersecting, we just use large segments
    lines_def = [(P4, C2), (P6, C4), (P1, P3), (P5, P2), (C1, C3), (C4, C2), (A, B)]
    
    for i in range(len(lines_def)):
        for j in range(i+1, len(lines_def)):
            pt = line_seg_intersect(lines_def[i][0], lines_def[i][1], lines_def[j][0], lines_def[j][1])
            if pt: add_unique(pts, pt)
    return pts, lines_def

def get_atomic_lines_simple(pts, lines):
    atomic = []
    for (a, b) in lines:
        on_seg = [p for p in pts if point_on_segment(p, a, b) and not pts_equal(p, a) and not pts_equal(p, b)]
        on_seg.sort(key=lambda p: dist(a, p))
        chain = [a] + on_seg + [b]
        for i in range(len(chain)-1):
            if dist(chain[i], chain[i+1]) > TOL:
                atomic.append((chain[i], chain[i+1], dist(chain[i], chain[i+1])))
    return atomic

print("=" * 80)
print("BRUTAL SYMMETRY TEST: GEN 1 -> GEN 2")
print("=" * 80)

r = 100.0
result = build_square_simple(0, 0, r, 0)
if not result:
    print("Failed to build Gen 1")
    exit()

gen1_pts, gen1_lines = result
gen1_atomic = get_atomic_lines_simple(gen1_pts, gen1_lines)

print(f"Gen 1 Points: {len(gen1_pts)}")
print(f"Gen 1 Atomic Lines: {len(gen1_atomic)}")

# Check Gen 1 y-symmetry
y_broken_gen1 = 0
for px, py in gen1_pts:
    reflect_p = (px, -py)
    found = any(pts_equal(reflect_p, p) for p in gen1_pts)
    if not found:
        y_broken_gen1 += 1

print(f"Gen 1 y-reflection symmetry broken count: {y_broken_gen1}")

gen2_all_pts = []
for p in gen1_pts:
    gen2_all_pts.append(p)

print("\nGenerating Gen 2 Points...")
for idx, (a, b, seg_len) in enumerate(gen1_atomic):
    child = build_square_simple(a[0], a[1], b[0], b[1])
    if child:
        child_pts, _ = child
        for p in child_pts:
            add_unique(gen2_all_pts, p)

print(f"\nGen 2 Total Unique Points: {len(gen2_all_pts)}")

# 1. UP/DOWN Reflection Symmetry (y -> -y)
print("\nTesting Up/Down Reflection Symmetry (y -> -y):")
y_symmetry_broken = []
for p in gen2_all_pts:
    px, py = p
    reflect_p = (px, -py)
    # Check if reflect_p exists in the set
    found = any(pts_equal(reflect_p, target) for target in gen2_all_pts)
    if not found:
        y_symmetry_broken.append(p)

if len(y_symmetry_broken) == 0:
    print("  >>> VERDICT: EXACT REFLECTION SYMMETRY PRESERVED IN GEN 2 <<<")
    print("  The geometry is perfectly symmetric across the central axis.")
else:
    print(f"  >>> VERDICT: SYMMETRY BROKEN! {len(y_symmetry_broken)} points have no mirror image. <<<")
    
# 2. LEFT/RIGHT Reflection Symmetry (x -> r - x)
print("\nTesting Left/Right Reflection Symmetry (x -> r - x):")
x_symmetry_broken = []
for p in gen2_all_pts:
    px, py = p
    reflect_p = (r - px, py)
    found = any(pts_equal(reflect_p, target) for target in gen2_all_pts)
    if not found:
        x_symmetry_broken.append(p)

if len(x_symmetry_broken) == 0:
    print("  >>> VERDICT: EXACT LEFT/RIGHT SYMMETRY PRESERVED IN GEN 2 <<<")
else:
    print(f"  >>> VERDICT: LEFT/RIGHT SYMMETRY BROKEN! {len(x_symmetry_broken)} points have no mirror image. <<<")
