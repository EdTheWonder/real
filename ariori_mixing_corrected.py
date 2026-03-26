"""
Ariori Topological Mixing Matrix (Corrected)
=============================================
Derives the PMNS-like mixing matrix from the 17-point Vesica Piscis
graph using CORRECT node degrees from gen1_full_data.txt (Rust engine).

The three generational triangles (Theorem 2) define flavor eigenstates.
Each state vector is 6-dimensional over the triangle-participating nodes
[A, C1, C2, C3, C4, X17], weighted by the node's topological degree
(number of atomic lines touching that node).

Degrees verified from 21 atomic edges:
  A=5, C1=4, C2=3, C3=4, C4=3, X17=4

Löwdin symmetric orthogonalization extracts the mixing rotation.
"""
import numpy as np
import math

print("=" * 70)
print("TOPOLOGICAL MIXING MATRIX (CORRECTED DEGREES)")
print("=" * 70)

# ============================================================
# STEP 1: Node degrees from 21 atomic lines (gen1_full_data.txt)
# ============================================================
# Counted directly from Rust engine output:
#   A:   X17, C1, C2, C3, C4           -> degree 5
#   X17: A, B, C1, C3                  -> degree 4
#   C1:  A, X17, P4, L                 -> degree 4
#   C3:  A, X17, P6, N                 -> degree 4
#   C2:  A, C4, M                      -> degree 3
#   C4:  A, C2, K                      -> degree 3

nodes = ['A', 'C1', 'C2', 'C3', 'C4', 'X17']
degrees = [5, 4, 3, 4, 3, 4]

print("\n1. NODE DEGREES (from 21 atomic edges)")
for n, d in zip(nodes, degrees):
    print(f"   {n:>3s}: degree {d}")

# ============================================================
# STEP 2: Triangle membership (Theorem 2)
# ============================================================
# D1 = {A, C2, C4}       Gen I   (equilateral, Higgs-free)
# D2 = {A, X17, C1}      Gen II  (right triangle)
# D3 = {A, X17, C3}      Gen III (right triangle, mirror of D2)

# State vectors: degree at node position if in triangle, else 0
#                [A,  C1, C2, C3, C4, X17]
f1 = np.array([5,  0,  3,  0,  3,  0], dtype=float)   # Gen I
f2 = np.array([5,  4,  0,  0,  0,  4], dtype=float)   # Gen II
f3 = np.array([5,  0,  0,  4,  0,  4], dtype=float)   # Gen III

print("\n2. RAW STATE VECTORS (degree-weighted)")
print(f"   Gen I   (A,C2,C4):      {f1.astype(int)}")
print(f"   Gen II  (A,C1,X17):     {f2.astype(int)}")
print(f"   Gen III (A,C3,X17):     {f3.astype(int)}")

# Normalize
f1n = f1 / np.linalg.norm(f1)
f2n = f2 / np.linalg.norm(f2)
f3n = f3 / np.linalg.norm(f3)

# ============================================================
# STEP 3: Overlap matrix S
# ============================================================
S = np.zeros((3, 3))
states = [f1n, f2n, f3n]
for i in range(3):
    for j in range(3):
        S[i, j] = np.dot(states[i], states[j])

print("\n3. GEOMETRIC OVERLAP MATRIX S")
for i, row in enumerate(S):
    print(f"   [{row[0]:.6f}  {row[1]:.6f}  {row[2]:.6f}]")

# Note: S[1,2] = S[2,1] because f2 and f3 share A and X17
# but differ only in C1 vs C3 (both degree 4) -> exact mirror symmetry
print(f"\n   S[0,1] = S[0,2] = {S[0,1]:.6f}  (Gen I overlaps II and III equally)")
print(f"   S[1,2] = {S[1,2]:.6f}  (Gen II-III overlap via shared A + X17)")

# ============================================================
# STEP 4: Löwdin orthogonalization
# ============================================================
evals, evecs = np.linalg.eigh(S)
U = evecs
U_sq = np.abs(U)**2

# Order mass states: m1 (largest Ue1), m2 (next), m3 (smallest Ue3)
row_e = U_sq[0, :]
idx_m3 = np.argmin(row_e)
rem_idx = [i for i in range(3) if i != idx_m3]
if U_sq[0, rem_idx[0]] > U_sq[0, rem_idx[1]]:
    idx_m1, idx_m2 = rem_idx[0], rem_idx[1]
else:
    idx_m1, idx_m2 = rem_idx[1], rem_idx[0]

P = np.column_stack((U_sq[:, idx_m1], U_sq[:, idx_m2], U_sq[:, idx_m3]))

print("\n4. SQUARED MIXING MATRIX |U_ij|^2")
labels = ['Gen I  ', 'Gen II ', 'Gen III']
for i, row in enumerate(P):
    print(f"   {labels[i]}: [{row[0]:.6f}  {row[1]:.6f}  {row[2]:.6f}]")

# ============================================================
# STEP 5: Extract mixing angles
# ============================================================
sin2_13 = P[0, 2]
cos2_13 = 1.0 - sin2_13
sin2_12 = P[0, 1] / cos2_13 if cos2_13 != 0 else 0
sin2_23 = P[1, 2] / cos2_13 if cos2_13 != 0 else 0

t12 = math.degrees(math.asin(math.sqrt(max(0, min(1, sin2_12)))))
t23 = math.degrees(math.asin(math.sqrt(max(0, min(1, sin2_23)))))
t13 = math.degrees(math.asin(math.sqrt(max(0, min(1, sin2_13)))))

print(f"\n{'='*70}")
print(f"GEOMETRIC PREDICTIONS (zero free parameters)")
print(f"{'='*70}")
print(f"  sin2(theta_12) = {sin2_12:.6f}  =>  theta_12 = {t12:.2f} deg")
print(f"  sin2(theta_23) = {sin2_23:.6f}  =>  theta_23 = {t23:.2f} deg")
print(f"  sin2(theta_13) = {sin2_13:.6f}  =>  theta_13 = {t13:.2f} deg")

print(f"\nEXPERIMENTAL VALUES (NuFIT 5.2):")
print(f"  sin2(theta_12) = 0.304   =>  theta_12 = 33.4 deg")
print(f"  sin2(theta_23) = 0.573   =>  theta_23 = 49.2 deg")
print(f"  sin2(theta_13) = 0.022   =>  theta_13 =  8.6 deg")

print(f"\nDEVIATIONS:")
print(f"  theta_12: {abs(t12 - 33.4):.2f} deg ({abs(sin2_12 - 0.304)/0.304*100:.1f}%)")
print(f"  theta_23: {abs(t23 - 49.2):.2f} deg (exact maximality vs. data)")
print(f"  theta_13: {abs(t13 - 8.6):.2f} deg  (zero at tree-level; nonzero requires Gen 2+ corrections)")
