import math
import numpy as np
from itertools import combinations

# ================================================================
# ARIORI DISCRETE GRAPH LAGRANGIAN (GEN 1)
# ================================================================
# This script converts the 17-point discrete geometry into a 
# formal Lattice Field Theory Action:
# S = 1/2 phi^T * Laplacian * phi - 1/2 phi^T * Mass * phi - g/3! sum(Triangles)

print("=" * 80)
print("EXTRACTING THE DISCRETE GRAPH LAGRANGIAN FROM TOPOLOGY")
print("=" * 80)

s3 = math.sqrt(3)
r = 100.0  # Scale invariant constant

# The exact 17 Generation 1 discrete points
pts = {
    'A':   (0, 0),
    'B':   (r, 0),
    'P1':  (r/2, r*s3/2),        
    'P2':  (r/2, -r*s3/2),       
    'P3':  (-r/2, r*s3/2),       
    'P4':  (3*r/2, r*s3/2),      
    'P5':  (-r/2, -r*s3/2),      
    'P6':  (3*r/2, -r*s3/2),     
    'C1':  (r*s3/2, r/2),        
    'C2':  (-r*s3/2, -r/2),      
    'C3':  (r*s3/2, -r/2),       
    'C4':  (-r*s3/2, r/2),       
    'K':   (-r*s3/2, r*s3/2),    
    'L':   (r*s3/2, r*s3/2),     
    'M':   (-r*s3/2, -r*s3/2),   
    'N':   (r*s3/2, -r*s3/2),    
    'X17': (r*s3/2, 0),         
}

# The 21 completely determined atomic edges
atomic_edges = [
    ('A', 'X17'), ('X17', 'B'), ('P5', 'P2'), ('P3', 'P1'), 
    ('C1', 'X17'), ('X17', 'C3'), ('C4', 'C2'), ('C4', 'A'), 
    ('A', 'C3'), ('C3', 'P6'), ('C2', 'A'), ('A', 'C1'), 
    ('C1', 'P4'), ('M', 'P5'), ('P2', 'N'), ('L', 'C1'), 
    ('C3', 'N'), ('K', 'P3'), ('P1', 'L'), ('K', 'C4'), ('C2', 'M')
]

node_names = sorted(pts.keys())
N = len(node_names)
idx = {name: i for i, name in enumerate(node_names)}

def dist(p1, p2):
    return math.sqrt((p1[0]-p2[0])**2 + (p1[1]-p2[1])**2)

# 1. KINEMATIC OPERATOR: Adjacency and Laplacian
A_mat = np.zeros((N, N))
for u, v in atomic_edges:
    A_mat[idx[u], idx[v]] = 1
    A_mat[idx[v], idx[u]] = 1

degree_arr = np.sum(A_mat, axis=1)
D_mat = np.diag(degree_arr)
Laplacian = D_mat - A_mat

# 2. MASS MATRIX: Geometric Centrality (Sum of Distances)
# Based on the paper's proof that geometric centrality limits inertia
Dist_mat = np.zeros((N, N))
for i in range(N):
    for j in range(N):
        Dist_mat[i, j] = dist(pts[node_names[i]], pts[node_names[j]]) / r

V_potentials = np.sum(Dist_mat, axis=1)
Mass_matrix = np.diag(V_potentials)

# 3. INTERACTION TENSOR: 3-Cycles (Triangles)
triangles = []
interaction_coeff = np.zeros((N, N, N))
for (i, j, k) in combinations(range(N), 3):
    if A_mat[i,j] and A_mat[j,k] and A_mat[k,i]:
        triangles.append((node_names[i], node_names[j], node_names[k]))
        # Symmetric 3-point tensor
        interaction_coeff[i,j,k] = 1; interaction_coeff[i,k,j] = 1
        interaction_coeff[j,i,k] = 1; interaction_coeff[j,k,i] = 1
        interaction_coeff[k,i,j] = 1; interaction_coeff[k,j,i] = 1

print("\n[STEP 1] KINEMATIC LAPLACIAN (The discrete derivative ∂²)")
print(f"Matrix Dimension: {Laplacian.shape}")
print(f"Graph Energy (Trace of Δ): {np.trace(Laplacian):.0f} = 2E exactly.")
print(f"Nullity: {N - np.linalg.matrix_rank(Laplacian)} (Guarantees zero-energy symmetric vacuum)")

print("\n[STEP 2] TOPOLOGICAL MASS MATRIX (m² = diag(V_i))")
print("Top 5 Strictly Massive Nodes (Largest Centrality Absolute Volume):")
sorted_masses = sorted([(V_potentials[i], node_names[i]) for i in range(N)], reverse=True)
for vol, name in sorted_masses[:5]:
    print(f"  Node {name:<3}: m² = {vol:.6f} r")
print(f"Lightest Node: {sorted_masses[-1][1]} (m² = {sorted_masses[-1][0]:.6f} r) [Origin Frame]")

print("\n[STEP 3] COUPLING VERTICES (The 3-point Interactions)")
print(f"Total Structural Triangles Found: {len(triangles)}")
for i, tri in enumerate(triangles):
    print(f"  Δ_{i+1}: {'-'.join(tri)}")

print("\n[THE TOPOLOGICAL ACTION]")
print("S[φ] = 1/2 φ^T [Δ] φ  -  1/2 φ^T [M²] φ  -  g/3! Σ φ_i φ_j φ_k")
print("Mechanics are fully defined purely by Euclidean proximity and deterministic edges.")
print("=" * 80)
