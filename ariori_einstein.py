"""
Ariori Einstein Field Equation Test (Discrete Curvature)
========================================================
If the Gen 1 graph natively encodes General Relativity, then the geometric 
curvature at each node must perfectly correlate with the energy/mass at 
that node (its topological degree).

We will compute the Forman-Ricci Curvature for each node in Gen 1 and 
test if G_mu_nu is proportional to T_mu_nu.
"""
import numpy as np

# Gen 1 Points
A = (0, 0)
B = (100, 0)
P1 = (50, 86.6025)
P2 = (50, -86.6025)
P3 = (-50, 86.6025)
P4 = (150, 86.6025)
P5 = (-50, -86.6025)
P6 = (150, -86.6025)
C1 = (86.6025, 50)
C2 = (-86.6025, -50)
C3 = (86.6025, -50)
C4 = (-86.6025, 50)
K = (-86.6025, 86.6025)
L = (86.6025, 86.6025)
M = (-86.6025, -86.6025)
N = (86.6025, -86.6025)
X17 = (86.6025, 0)

points = {
    'A': A, 'B': B, 'P1': P1, 'P2': P2, 'P3': P3, 'P4': P4, 'P5': P5, 'P6': P6,
    'C1': C1, 'C2': C2, 'C3': C3, 'C4': C4, 'K': K, 'L': L, 'M': M, 'N': N, 'X17': X17
}

# The 21 atomic lines (edges)
edges = [
    ('A', 'B'),
    ('A', 'C1'), ('A', 'C2'), ('A', 'C3'), ('A', 'C4'),
    ('P1', 'P3'), ('P1', 'K'), ('P1', 'L'), ('P3', 'K'),
    ('P2', 'P5'), ('P2', 'M'), ('P2', 'N'), ('P5', 'M'),
    ('C1', 'L'), ('C1', 'X17'),
    ('C3', 'N'), ('C3', 'X17'),
    ('C4', 'K'), ('C2', 'M'),
    ('B', 'P4'), ('B', 'P6')
]

# Wait, let me make *sure* these are the exact 21 atomic lines from Gen 1.
# Gen 1 has:
# A connected to B, C1, C2, C3, C4
# C1 connected to A, L, X17, ... wait.
# Let's read the exact edges from the graph.
# Our previous analysis found 21 atomic edges.
# The graph is:
from collections import defaultdict

G_nodes = set(points.keys())

# Build adjacency
adj = defaultdict(set)
for u, v in edges:
    adj[u].add(v)
    adj[v].add(u)

degrees = {n: len(adj[n]) for n in G_nodes}

def edge_forman_ricci(u, v):
    deg_u = degrees[u]
    deg_v = degrees[v]
    common_neighbors = len(adj[u].intersection(adj[v]))
    return 4 - deg_u - deg_v + 3 * common_neighbors

edge_curvatures = {}
for u, v in edges:
    c = edge_forman_ricci(u, v)
    edge_curvatures[(u, v)] = c
    edge_curvatures[(v, u)] = c

node_curvatures = {}
for node in G_nodes:
    c = sum(edge_curvatures[(node, neighbor)] for neighbor in adj[node])
    node_curvatures[node] = c

print("="*60)
print(f"{'Node':<5} | {'Degree (Energy)':<15} | {'Discrete Curvature (G)':<20}")
print("-" * 60)
for node in sorted(G_nodes, key=lambda n: degrees[n], reverse=True):
    print(f"{node:<5} | {degrees[node]:<15} | {node_curvatures[node]:<20}")

print("\nCorrelation Analysis:")
curv_vals = [node_curvatures[n] for n in G_nodes]
deg_vals = [degrees[n] for n in G_nodes]

mean_c, mean_d = sum(curv_vals)/len(curv_vals), sum(deg_vals)/len(deg_vals)
numer = sum((c - mean_c) * (d - mean_d) for c, d in zip(curv_vals, deg_vals))
denom = (sum((c - mean_c)**2 for c in curv_vals) * sum((d - mean_d)**2 for d in deg_vals))**0.5
correlation = numer / denom if denom != 0 else 0

print(f"Correlation between Curvature and Energy: {correlation:.4f}")

ratios = []
for n in G_nodes:
    if degrees[n] > 0:
        ratios.append(node_curvatures[n] / degrees[n])
print(f"Curvature/Energy ratios: {[round(r, 2) for r in ratios]}")
mean_ratio = sum(ratios)/len(ratios)
std_ratio = (sum((r - mean_ratio)**2 for r in ratios) / len(ratios))**0.5
print(f"Standard deviation of ratios: {std_ratio:.4f}")

