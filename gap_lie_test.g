# ===================================================================
# PRIORITY 3: SU(3) GELL-MANN ALGEBRA ON THE BOUNDARY
# ===================================================================

LoadPackage("grape");

Print("=== PRIORITY 3: SU(3) LIE ALGEBRA SEARCH ===\n\n");

# The 8 boundary nodes are: K, L, M, N, Top, Bot, P3, P5
# In our previous numbering (from gen1Edges):
# K=13, L=14, M=15, N=16, Top=3, Bot=4, P3=5, P5=7
# Let's rebuild the boundary subgraph.

bnd_nodes := [3, 4, 5, 7, 13, 14, 15, 16];
bnd_edges := [
    [5,3], [7,4], [15,7], [4,16], [14,5], [13,15]
]; # Just the edges between boundary nodes? Wait, what are the edges?
# Let's extract the adjacency matrix of the 8 boundary nodes directly.
# Neighbors in gen 1:
# Top(3)-L(14), Top(3)-P3(5)
# Bot(4)-N(16), Bot(4)-P5(7)
# P3(5)-Top(3), P3(5)-K(13)
# P5(7)-Bot(4), P5(7)-M(15)
# K(13)-C4, K(13)-P3(5) -> internal K-P3
# L(14)-C1, L(14)-Top(3) -> internal L-Top
# M(15)-C2, M(15)-P5(7) -> internal M-P5
# N(16)-C3, N(16)-Bot(4) -> internal N-Bot
# This gives exactly 4 disjoint pairs! (Top-L), (Bot-N), (P3-K), (P5-M)?
# Wait, let's look at the edges again.
# Top-L, Top-P3  -> Path: L - Top - P3 - K
# Bot-N, Bot-P5  -> Path: N - Bot - P5 - M
# This is exactly 2 * P4!
# L(14) - Top(3) - P3(5) - K(13)
# N(16) - Bot(4) - P5(7) - M(15)

A_bnd := NullMat(8, 8);
# 1:L, 2:Top, 3:P3, 4:K
A_bnd[1][2] := 1; A_bnd[2][1] := 1;
A_bnd[2][3] := 1; A_bnd[3][2] := 1;
A_bnd[3][4] := 1; A_bnd[4][3] := 1;
# 5:N, 6:Bot, 7:P5, 8:M
A_bnd[5][6] := 1; A_bnd[6][5] := 1;
A_bnd[6][7] := 1; A_bnd[7][6] := 1;
A_bnd[7][8] := 1; A_bnd[8][7] := 1;

D_bnd := NullMat(8, 8);
for i in [1..8] do
    D_bnd[i][i] := Sum(A_bnd[i]);
od;

L_bnd := D_bnd - A_bnd;

# Parity operator R swaps Top<->Bot, P3<->P5, K<->M, L<->N
# Mapping: 1(L)<->5(N), 2(Top)<->6(Bot), 3(P3)<->7(P5), 4(K)<->8(M)
R_bnd := NullMat(8, 8);
R_bnd[1][5] := 1; R_bnd[5][1] := 1;
R_bnd[2][6] := 1; R_bnd[6][2] := 1;
R_bnd[3][7] := 1; R_bnd[7][3] := 1;
R_bnd[4][8] := 1; R_bnd[8][4] := 1;

# Generate the algebra over Rationals
alg_bnd := Algebra(Rationals, [A_bnd, L_bnd, R_bnd]);
dim := Dimension(alg_bnd);
Print("Boundary Algebra Dimension: ", dim, "\n");

# Generate the Lie algebra from this associative algebra
# The bracket is [x, y] = x*y - y*x
basis := BasisVectors(Basis(alg_bnd));
lie_mats := basis;
L_alg := LieAlgebraByStructureConstants(Rationals, EmptySCTable(dim, 0, "antisymmetric"));
# Wait, GAP can construct a Lie algebra natively from matrix generators:
Lie_alg_bnd := LieAlgebra(Rationals, basis);
lie_dim := Dimension(Lie_alg_bnd);
Print("Boundary Lie Algebra Dimension: ", lie_dim, "\n");

Print("If the Lie algebra dimension is >= 8, we can search for an su(3) subalgebra.\n");
Print("su(3) requires dimension 8.\n");

# Let's decompose it to check if it's semisimple
# lie_rad := StandardRadical(Lie_alg_bnd); # Not always available for Lie algebras in basic GAP
# We will just print the dimension.
