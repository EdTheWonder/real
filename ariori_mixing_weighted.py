import numpy as np
from scipy.linalg import fractional_matrix_power
import math

print("=" * 80)
print("ZERO-PARAMETER EXPERIMENT: WEIGHTED TOPOLOGICAL MIXING")
print("=" * 80)

# We define the 3 spatial generations by their constituent nodes.
# Instead of assuming the quantum state is uniformly distributed (1s and 0s),
# we weight the state mathematically by the intrinsic Topological Degree of each node,
# representing the geometric "potential" or "mass" at that vertex.

# Degrees from ariori_einstein.py:
# A: 5
# C1: 3
# C3: 3
# C2: 2
# C4: 2
# X17: 2

# The union of nodes is: A, C1, C2, C3, C4, X17
nodes = ['A', 'C1', 'C2', 'C3', 'C4', 'X17']
degrees = np.array([5, 3, 2, 3, 2, 2])

# Construct the weighted state vectors
f1 = np.array([5, 0, 2, 0, 2, 0], dtype=float)  # Gen I (A, C2, C4)
f2 = np.array([5, 3, 0, 0, 0, 2], dtype=float)  # Gen II (A, C1, X17)
f3 = np.array([5, 0, 0, 3, 0, 2], dtype=float)  # Gen III (A, C3, X17)

# Normalize the states
f1 = f1 / np.linalg.norm(f1)
f2 = f2 / np.linalg.norm(f2)
f3 = f3 / np.linalg.norm(f3)

print("1. WEIGHTED FLAVOR STATES (Normalized)")
print(f"  Gen I:   {np.array2string(f1, formatter={'float_kind':lambda x: f'{x:.3f}'})}")
print(f"  Gen II:  {np.array2string(f2, formatter={'float_kind':lambda x: f'{x:.3f}'})}")
print(f"  Gen III: {np.array2string(f3, formatter={'float_kind':lambda x: f'{x:.3f}'})}")

# Compute the Overlap Matrix S
S = np.zeros((3, 3))
states = [f1, f2, f3]
for i in range(3):
    for j in range(3):
        S[i, j] = np.dot(states[i], states[j])

print("\n2. TOPOLOGICAL OVERLAP MATRIX (S)")
print(np.array2string(S, formatter={'float_kind':lambda x: f"{x:.4f}"}))

# Perform Löwdin Orthogonalization to find the mixing matrix U
# We diagonalize S = V D V^T to get the unitary mixing matrix.
evals, evecs = np.linalg.eigh(S)

U = evecs
U_sq = np.abs(U)**2

# Ordering the mass states:
# Row 0 is e (Gen I). The smallest entry is U_e3 (associated with θ_13).
row_e = U_sq[0, :]
idx_m3 = np.argmin(row_e)
rem_idx = [i for i in range(3) if i != idx_m3]
if U_sq[0, rem_idx[0]] > U_sq[0, rem_idx[1]]:
    idx_m1, idx_m2 = rem_idx[0], rem_idx[1]
else:
    idx_m1, idx_m2 = rem_idx[1], rem_idx[0]

P = np.column_stack((U_sq[:, idx_m1], U_sq[:, idx_m2], U_sq[:, idx_m3]))

print("\n3. SQUARED MIXING MATRIX |U_ij|² (PROBABILITIES)")
print(np.array2string(P, formatter={'float_kind':lambda x: f"{x:.4f}"}))

# Extract mixing angles
sin2_theta_13 = P[0, 2]
cos2_theta_13 = 1.0 - sin2_theta_13

sin2_theta_12 = P[0, 1] / cos2_theta_13 if cos2_theta_13 != 0 else 0
sin2_theta_23 = P[1, 2] / cos2_theta_13 if cos2_theta_13 != 0 else 0

theta_12 = math.degrees(math.asin(math.sqrt(sin2_theta_12)))
theta_23 = math.degrees(math.asin(math.sqrt(sin2_theta_23)))
theta_13 = math.degrees(math.asin(math.sqrt(sin2_theta_13)))

print("\n4. GEOMETRIC PREDICTIONS (Degree-Weighted)")
print(f"  sin²(θ_12) = {sin2_theta_12:.4f}  (θ_12 = {theta_12:.2f}°)")
print(f"  sin²(θ_23) = {sin2_theta_23:.4f}  (θ_23 = {theta_23:.2f}°)")
print(f"  sin²(θ_13) = {sin2_theta_13:.4f}  (θ_13 = {theta_13:.2f}°)")

print("\n  MEASURED VALUES (NuFIT 5.2):")
print("  sin²(θ_12) ≈ 0.304  (θ_12 ≈ 33.4°)")
print("  sin²(θ_23) ≈ 0.573  (θ_23 ≈ 49.2°)")
print("  sin²(θ_13) ≈ 0.022  (θ_13 ≈  8.6°)")
