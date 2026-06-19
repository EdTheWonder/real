LoadPackage("grape");

Print("=== Ariori GAP Generator Search ===\n");

# The 17 nodes
# 1:A, 2:X17, 3:B, 4:C1, 5:C2, 6:C3, 7:C4, 8:Top, 9:Bot, 10:P3, 11:P4, 12:P5, 13:P6, 14:K, 15:L, 16:M, 17:N

# Define graph by edges
gamma := Graph( Group(()), [1..17], OnPoints, function(x,y)
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
        [10,14],
        [12,16]
    ];
    return [x,y] in edges or [y,x] in edges;
end, true );

aut := AutGroupGraph(gamma);
Print("Automorphism Group Size: ", Size(aut), "\n");
Print("Automorphism Group Generators: \n", GeneratorsOfGroup(aut), "\n\n");

y_ref := (4,6)(5,7)(8,9)(10,12)(11,13)(14,16)(15,17);
Print("Is y-reflection in Aut(gamma)? ", y_ref in aut, "\n\n");

Print("Structure Description of Aut(gamma): ", StructureDescription(aut), "\n");

# Let's explore the adjacency matrix as an algebraic generator
A := NullMat(17,17);
edges := [
    [1,2], [1,4], [1,5], [1,6], [1,7],
    [2,3], [2,4], [2,6],
    [4,11], [4,15],
    [5,7], [5,16],
    [6,13], [6,17],
    [7,14],
    [8,10], [8,15],
    [9,12], [9,17],
    [10,14],
    [12,16]
];
for e in edges do
    A[e[1]][e[2]] := 1;
    A[e[2]][e[1]] := 1;
od;

# Check rank of A over rationals
Print("Rank of Adjacency Matrix A: ", RankMat(A), "\n");

quit;
