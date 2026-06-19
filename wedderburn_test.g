# ===================================================================
# ARIORI WEDDERBURN-ARTIN CLASSIFICATION TEST
# ===================================================================

LoadPackage("grape");

Print("=== ARIORI WEDDERBURN-ARTIN CLASSIFICATION TEST ===\n\n");

gamma1 := Graph( Group(()), [1..17], OnPoints, function(x,y)
    local edges;
    edges := [
        [1,2], [1,4], [1,5], [1,6], [1,7],
        [2,3], [2,4], [2,6],
        [4,11], [4,15],
        [5,7], [5,16],
        [6,13], [6,17],
        [7,14],
        [8,10], [8,15],
        [9,12], [9,17],
        [10,14], [10,16], [10,17]
    ];
    return [x,y] in edges or [y,x] in edges;
end, true);

A := AdjacencyMatrix(gamma1);

L := NullMat(17,17);
for i in [1..17] do
    L[i][i] := Sum(A[i]);
    for j in [1..17] do
        if A[i][j] = 1 then
            L[i][j] := -1;
        fi;
    od;
od;

R := NullMat(17,17);
for i in [1..17] do
    R[i][i] := 1;
od;
# The parity reflection swaps Top/Bot, P3/P5, P4/P6, C1/C3, C2/C4, K/M, L/N
# Mapping array:
# A=1, B=2, X17=3 (invariant)
# Top=4, Bot=5
# P3=6, P4=7, P5=8, P6=9
# C1=10, C2=11, C3=12, C4=13
# K=14, L=15, M=16, N=17
R[4][4] := 0; R[4][5] := 1;
R[5][5] := 0; R[5][4] := 1;
R[6][6] := 0; R[6][8] := 1;
R[8][8] := 0; R[8][6] := 1;
R[7][7] := 0; R[7][9] := 1;
R[9][9] := 0; R[9][7] := 1;
R[10][10] := 0; R[10][12] := 1;
R[12][12] := 0; R[12][10] := 1;
R[11][11] := 0; R[11][13] := 1;
R[13][13] := 0; R[13][11] := 1;
R[14][14] := 0; R[14][16] := 1;
R[16][16] := 0; R[16][14] := 1;
R[15][15] := 0; R[15][17] := 1;
R[17][17] := 0; R[17][15] := 1;

Alg := Algebra(Rationals, [A, L, R]);
dimAlg := Dimension(Alg);
Print("Dimension of Algebra Alg(A, L, R): ", dimAlg, "\n");

# Try Wedderburn decomposition
Print("Attempting WedderburnDecomposition (may take a moment)...\n");
decomp := WedderburnDecomposition(Alg);
Print("Wedderburn Decomposition yielded ", Length(decomp), " components.\n");
for i in [1..Length(decomp)] do
    comp := decomp[i];
    dim := Dimension(comp);
    Print("Component ", i, " dimension: ", dim, "\n");
od;
