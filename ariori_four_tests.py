"""
EXPERIMENT 1: Neutrino Mass Hierarchy Prediction
================================================
The Standard Model originally predicted neutrino masses = 0.
Nobel-winning experiments proved neutrinos oscillate, meaning they MUST have mass.
But nobody knows the absolute masses or the ordering (Normal vs Inverted hierarchy).

Measured mass-squared differences (from oscillation experiments):
  Δm²₂₁ = 7.53 × 10⁻⁵ eV² (solar)
  |Δm²₃₂| = 2.453 × 10⁻³ eV² (atmospheric)

Our framework maps neutrinos to C4 across the 3 generational triangles (Δ₁, Δ₂, Δ₃).
The mass of each neutrino generation is geometrically determined by the 
distance from C4 to the Higgs node X17 through each triangle's interaction path.

EXPERIMENT 2: Muon g-2 Anomalous Magnetic Moment
=================================================
Measured: a_μ = (g-2)/2 = 116592059(22) × 10⁻¹¹
SM Prediction: a_μ = 116591810(43) × 10⁻¹¹  
Deviation: Δa_μ = 249 × 10⁻¹¹ (5.1σ)

The anomalous magnetic moment is caused by virtual particle loops.
In our framework, virtual particles are the Gen 2 points spawned between
the muon node (C2 in Δ₂) and the photon node (A).

EXPERIMENT 3: W-Boson Mass
==========================
SM Prediction: 80.357 ± 0.006 GeV
CDF-II Measurement: 80.4335 ± 0.0094 GeV
Deviation: 7σ

W bosons are mapped to P4, P6.

EXPERIMENT 4: Dark Matter Halo
==============================
Test if the recursive geometry naturally produces excess gravitational
density at the periphery of mass clusters.
"""
import math
import numpy as np

TOL = 1e-9
s3 = math.sqrt(3)
r = 100.0

# ===== GEN 1 EXACT COORDINATES =====
points = {
    'A': (0, 0),
    'B': (r, 0),
    'P1': (r/2, r*s3/2),
    'P2': (r/2, -r*s3/2),
    'P3': (-r/2, r*s3/2),
    'P4': (3*r/2, r*s3/2),
    'P5': (-r/2, -r*s3/2),
    'P6': (3*r/2, -r*s3/2),
    'C1': (r*s3/2, r/2),
    'C2': (-r*s3/2, -r/2),
    'C3': (r*s3/2, -r/2),
    'C4': (-r*s3/2, r/2),
    'K': (-r*s3/2, r*s3/2),
    'L': (r*s3/2, r*s3/2),
    'M': (-r*s3/2, -r*s3/2),
    'N': (r*s3/2, -r*s3/2),
    'X17': (r*s3/2, 0)
}

def dist(p1, p2):
    return math.hypot(p1[0]-p2[0], p1[1]-p2[1])

# ===== EXPERIMENT 1: NEUTRINO MASS HIERARCHY =====
print("="*70)
print("EXPERIMENT 1: NEUTRINO MASS HIERARCHY")
print("="*70)

# Three generational triangles:
# Δ₁ (Gen I, stable): A → C2 → C4 → A
# Δ₂ (Gen II, Higgs-dependent): A → X17 → C1 → A
# Δ₃ (Gen III, Higgs-dependent): A → X17 → C3 → A

# Neutrino mass is determined by C4's coupling through each triangle.
# C4 is the neutrino DOF. Its "mass" in each generation is geometrically 
# its effective interaction path to the Higgs (X17) through that triangle.

# Gen I neutrino (ν_e): C4 interacts via Δ₁ = {A, C2, C4}
# The coupling strength is the geometric path C4 → A → C2 (through Δ₁)
# weighted by the triangle's perimeter (total interaction volume)
tri1_perimeter = dist(points['A'], points['C2']) + dist(points['C2'], points['C4']) + dist(points['C4'], points['A'])
tri1_c4_to_higgs = dist(points['C4'], points['X17'])  # Direct geometric coupling

# Gen II neutrino (ν_μ): C4 interacts via Δ₂ = {A, X17, C1}
# C4 couples to the Higgs-dependent triangle through its nearest vertex
tri2_perimeter = dist(points['A'], points['X17']) + dist(points['X17'], points['C1']) + dist(points['C1'], points['A'])
tri2_c4_coupling = min(dist(points['C4'], points['A']), dist(points['C4'], points['X17']), dist(points['C4'], points['C1']))

# Gen III neutrino (ν_τ): C4 interacts via Δ₃ = {A, X17, C3}
tri3_perimeter = dist(points['A'], points['X17']) + dist(points['X17'], points['C3']) + dist(points['C3'], points['A'])
tri3_c4_coupling = min(dist(points['C4'], points['A']), dist(points['C4'], points['X17']), dist(points['C4'], points['C3']))

# Mass proxy: inverse of (perimeter × coupling distance)
# Smaller perimeter + closer coupling = heavier neutrino
m_nu_e_proxy = 1.0 / (tri1_perimeter * tri1_c4_to_higgs)
m_nu_mu_proxy = 1.0 / (tri2_perimeter * tri2_c4_coupling)
m_nu_tau_proxy = 1.0 / (tri3_perimeter * tri3_c4_coupling)

# Normalize to the lightest
min_proxy = min(m_nu_e_proxy, m_nu_mu_proxy, m_nu_tau_proxy)
m_nu_e_norm = m_nu_e_proxy / min_proxy
m_nu_mu_norm = m_nu_mu_proxy / min_proxy
m_nu_tau_norm = m_nu_tau_proxy / min_proxy

print(f"\nTriangle Perimeters (in units of r):")
print(f"  Δ₁ (Gen I):  {tri1_perimeter/r:.4f}")
print(f"  Δ₂ (Gen II): {tri2_perimeter/r:.4f}")
print(f"  Δ₃ (Gen III):{tri3_perimeter/r:.4f}")

print(f"\nC4 (Neutrino DOF) coupling distances:")
print(f"  ν_e via Δ₁:  {tri1_c4_to_higgs/r:.4f}")
print(f"  ν_μ via Δ₂:  {tri2_c4_coupling/r:.4f}")
print(f"  ν_τ via Δ₃:  {tri3_c4_coupling/r:.4f}")

print(f"\nPredicted Neutrino Mass Ratios (normalized to lightest):")
print(f"  m(ν_e)  : {m_nu_e_norm:.6f}")
print(f"  m(ν_μ)  : {m_nu_mu_norm:.6f}")
print(f"  m(ν_τ)  : {m_nu_tau_norm:.6f}")

if m_nu_e_norm < m_nu_mu_norm < m_nu_tau_norm:
    print("\n  → NORMAL HIERARCHY (m₁ < m₂ < m₃)")
elif m_nu_tau_norm < m_nu_mu_norm < m_nu_e_norm:
    print("\n  → INVERTED HIERARCHY (m₃ < m₁ < m₂)")
else:
    print(f"\n  → HIERARCHY ORDER: {sorted([(m_nu_e_norm, 'ν_e'), (m_nu_mu_norm, 'ν_μ'), (m_nu_tau_norm, 'ν_τ')])}")

# Compute mass-squared differences for comparison
# If ν_e is lightest, set m₁ = 0.01 eV as baseline
m1_eV = 0.01  # Assumed baseline (cosmological upper bound ~0.12 eV total)
scale = m1_eV / min(m_nu_e_norm, m_nu_mu_norm, m_nu_tau_norm)
m_e_eV = m_nu_e_norm * scale
m_mu_eV = m_nu_mu_norm * scale
m_tau_eV = m_nu_tau_norm * scale

dm2_21 = m_mu_eV**2 - m_e_eV**2
dm2_32 = m_tau_eV**2 - m_mu_eV**2

print(f"\nWith m₁ = {m1_eV} eV baseline:")
print(f"  m(ν_e)  = {m_e_eV:.6f} eV")
print(f"  m(ν_μ)  = {m_mu_eV:.6f} eV")
print(f"  m(ν_τ)  = {m_tau_eV:.6f} eV")
print(f"  Δm²₂₁  = {dm2_21:.2e} eV² (measured: 7.53e-05 eV²)")
print(f"  |Δm²₃₂| = {abs(dm2_32):.2e} eV² (measured: 2.453e-03 eV²)")
print(f"  Ratio Δm²₃₂/Δm²₂₁ = {abs(dm2_32/dm2_21):.2f} (measured: ~32.6)")

# ===== EXPERIMENT 2: MUON g-2 =====
print("\n" + "="*70)
print("EXPERIMENT 2: MUON g-2 ANOMALOUS MAGNETIC MOMENT")
print("="*70)

# The muon is C2 in Δ₂. The photon is A.
# The anomalous magnetic moment arises from virtual particle corrections.
# In our framework, the "bare" magnetic moment (g=2 exactly) corresponds to 
# the direct geometric path C2 → A.
# The anomalous correction (g-2)/2 = α/(2π) at leading order.

# Geometric calculation of α:
# α = 1/137.036 in standard physics.
# We showed α ≈ 1/(C(17,2) + 1) = 1/137

# The g-2 correction at 1-loop is exactly α/(2π)
alpha_geometric = 1.0 / 137.0  # Our geometric prediction
g2_1loop = alpha_geometric / (2 * math.pi)

# Higher-order corrections involve the FULL geometric interaction landscape.
# The muon (C2) interacts with ALL other nodes through the complete metric space.
# The total anomalous correction is the sum of all geometric coupling strengths.

# Compute the "geometric g-2" as the summed inverse-distance coupling of C2 to all other nodes
C2 = points['C2']
total_coupling = 0.0
for name, pt in points.items():
    if name != 'C2':
        d = dist(C2, pt) / r  # Normalize to r
        total_coupling += 1.0 / d

# The anomalous correction is α × (total_coupling / normalization)
# Normalization: the coupling of C2 in isolation (just to A, the photon)
bare_coupling = r / dist(C2, points['A'])
a_mu_geometric = alpha_geometric * total_coupling / (2 * math.pi * 16)  # 16 other nodes

print(f"\nGeometric α = 1/{1/alpha_geometric:.0f}")
print(f"1-loop g-2 = α/(2π) = {g2_1loop:.6e}")
print(f"Total C2 coupling sum (all 16 nodes) = {total_coupling:.6f}")
print(f"Bare coupling (C2→A only) = {bare_coupling:.6f}")

# The measured a_μ = 0.00116592059
a_mu_measured = 0.00116592059
a_mu_sm = 0.00116591810
print(f"\nMeasured a_μ = {a_mu_measured}")
print(f"SM prediction = {a_mu_sm}")
print(f"Geometric a_μ = {a_mu_geometric:.11f}")
print(f"Deviation from measured: {abs(a_mu_geometric - a_mu_measured)/a_mu_measured * 100:.4f}%")

# ===== EXPERIMENT 3: W-BOSON MASS =====
print("\n" + "="*70)
print("EXPERIMENT 3: W-BOSON MASS PREDICTION")
print("="*70)

# W bosons = P4, P6 (SU(2) generators)
# Z boson = B
# Higgs = X17
# The mass ratio m_W/m_Z is related to cos(θ_W)

# Geometric mass is proportional to the geometric potential (centrality)
# V_i = sum of distances to all other nodes
V = {}
for name, pt in points.items():
    V[name] = sum(dist(pt, p2) for n2, p2 in points.items() if n2 != name) / r

# W-boson mass proxy (average of P4, P6)
m_W_proxy = (V['P4'] + V['P6']) / 2
# Z-boson mass proxy
m_Z_proxy = V['B']
# Higgs mass proxy
m_H_proxy = V['X17']

# In the SM: m_W/m_Z = cos(θ_W) ≈ 0.8815
# And m_Z = 91.1876 GeV, m_W(SM) = 80.357 GeV, m_W(CDF) = 80.4335 GeV
# m_H = 125.25 GeV

ratio_WZ = m_Z_proxy / m_W_proxy  # Inverted because higher V = lower mass (farther = lighter)
print(f"\nGeometric Potentials (sum of distances / r):")
print(f"  V(W) = V(P4,P6) avg = {m_W_proxy:.4f}")
print(f"  V(Z) = V(B)         = {m_Z_proxy:.4f}")
print(f"  V(H) = V(X17)       = {m_H_proxy:.4f}")

# Mass is INVERSELY proportional to potential (more central = heavier)
print(f"\nMass Ratios (inverse potential):")
inv_W = 1.0 / m_W_proxy
inv_Z = 1.0 / m_Z_proxy
inv_H = 1.0 / m_H_proxy

# Normalize to Z mass = 91.1876 GeV
scale_Z = 91.1876 / inv_Z
m_W_pred = inv_W * scale_Z
m_H_pred = inv_H * scale_Z

print(f"  m_W (geometric) = {m_W_pred:.4f} GeV (SM: 80.357, CDF: 80.4335)")
print(f"  m_Z (fixed)     = 91.1876 GeV")
print(f"  m_H (geometric) = {m_H_pred:.4f} GeV (measured: 125.25)")
print(f"  m_W/m_Z         = {m_W_pred/91.1876:.6f} (measured cos θ_W: 0.8815)")

# ===== EXPERIMENT 4: DARK MATTER HALO =====
print("\n" + "="*70)
print("EXPERIMENT 4: DARK MATTER HALO EMERGENCE")
print("="*70)

# The question: does the recursive geometry produce excess gravitational
# density at the periphery of mass clusters?

# We'll test this by computing the radial density profile of Gen 2 points
# around the center of mass (A).

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
    lines = [(P4, C2), (P6, C4), (P1, P3), (P5, P2), (C1, C3), (C4, C2), (A, B)]
    for i in range(len(lines)):
        for j in range(i+1, len(lines)):
            pt = line_seg_intersect(lines[i][0], lines[i][1], lines[j][0], lines[j][1])
            if pt: add_unique(pts, pt)
    return pts, lines

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

# Build Gen 1 + Gen 2
result = build_square_simple(0, 0, r, 0)
if result:
    gen1_pts, gen1_lines = result
    gen1_atomic = get_atomic_lines_simple(gen1_pts, gen1_lines)
    
    gen2_all_pts = list(gen1_pts)  # Start with Gen 1 points
    for (a, b, seg_len) in gen1_atomic:
        child = build_square_simple(a[0], a[1], b[0], b[1])
        if child:
            child_pts, _ = child
            for p in child_pts:
                add_unique(gen2_all_pts, p)
    
    # Compute radial density profile from center (A = origin)
    center = points['A']
    distances_from_center = [dist(center, p) for p in gen2_all_pts]
    max_dist = max(distances_from_center)
    
    # Create radial bins
    n_bins = 10
    bin_edges = [i * max_dist / n_bins for i in range(n_bins + 1)]
    bin_counts = [0] * n_bins
    
    for d in distances_from_center:
        bin_idx = min(int(d / (max_dist / n_bins)), n_bins - 1)
        bin_counts[bin_idx] += 1
    
    print(f"\nTotal Gen2 Points: {len(gen2_all_pts)}")
    print(f"Max Distance from Origin: {max_dist/r:.2f} r")
    print(f"\nRadial Density Profile from Origin (A):")
    print(f"{'Bin':>4} | {'Range (r)':>15} | {'Points':>6} | {'Density (/area)':>15}")
    print("-" * 55)
    
    for i in range(n_bins):
        r_inner = bin_edges[i]
        r_outer = bin_edges[i+1]
        area = math.pi * (r_outer**2 - r_inner**2) / r**2  # Annular area in r² units
        density = bin_counts[i] / area if area > 0 else 0
        print(f"{i+1:>4} | {r_inner/r:>6.2f} - {r_outer/r:>5.2f} | {bin_counts[i]:>6} | {density:>15.4f}")
    
    # Check for "dark matter halo":
    # A standard massive object's density of surrounding objects might fall as 1/r^2.
    # If the density flattens or increases at the halo boundary, that is a dark matter signature.
    
    print("\nEXPECTED vs ACTUAL DENSITY FALLOFF:")
    # We will use the first bin as our baseline "core" density
    r_core_inner = bin_edges[0]
    r_core_outer = bin_edges[1]
    r_core_mid = (r_core_inner + r_core_outer) / 2
    core_area = math.pi * (r_core_outer**2 - r_core_inner**2) / r**2
    core_density = bin_counts[0] / core_area if core_area > 0 else 0
    
    print(f"{'Bin':>4} | {'r_mid (r)':>10} | {'Measured Dens':>15} | {'1/r² Expected':>15} | {'Excess':>10}")
    print("-" * 65)
    
    halo_excess_list = []
    
    for i in range(1, n_bins):
        r_inner = bin_edges[i]
        r_outer = bin_edges[i+1]
        r_mid = (r_inner + r_outer) / 2
        area = math.pi * (r_outer**2 - r_inner**2) / r**2
        density = bin_counts[i] / area if area > 0 else 0
        
        # Expected density falling as 1/r^2 from the center
        expected_density_invsq = core_density * (r_core_mid / r_mid)**2
        
        excess = density / expected_density_invsq if expected_density_invsq > 0 else 0
        
        print(f"{i+1:>4} | {r_mid/r:>10.2f} | {density:>15.4f} | {expected_density_invsq:>15.4f} | {excess:>9.2f}x")
        
        if i >= n_bins // 2 and density > 0:
            halo_excess_list.append(excess)

    if halo_excess_list and max(halo_excess_list) > 2.0:
        avg_excess = sum(halo_excess_list) / len(halo_excess_list)
        print("\n>>> CONCLUSION: GEOMETRIC DARK MATTER HALO DETECTED <<<")
        print("    The density at the periphery is significantly higher than a")
        print("    standard 1/r² gravitational falloff, producing a self-gravitating")
        print("    'halo' effect purely from the recursive geometry.")
        print(f"    AVERAGE HALO DENSITY EXCESS: {avg_excess:.2f}x")
    else:
        print("\n>>> CONCLUSION: STANDARD FALLOFF <<<")
        print("    The density follows or falls below standard geometric dispersion.")
