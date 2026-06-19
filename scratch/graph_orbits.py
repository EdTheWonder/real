# Pure Python Zero-Dependency Graph Automorphism and Orbit Calculator
nodes = ['A', 'B', 'Top', 'Bot', 'P3', 'P4', 'P5', 'P6', 'C1', 'C2', 'C3', 'C4', 'K', 'L', 'M', 'N', 'X17']

# The 21 atomic edges
edges = [
    ('A', 'X17'),
    ('X17', 'B'),
    ('P5', 'Bot'),
    ('P3', 'Top'),
    ('C1', 'X17'),
    ('X17', 'C3'),
    ('C4', 'C2'),
    ('C4', 'A'),
    ('A', 'C3'),
    ('C3', 'P6'),
    ('C2', 'A'),
    ('A', 'C1'),
    ('C1', 'P4'),
    ('M', 'P5'),
    ('Bot', 'N'),
    ('L', 'C1'),
    ('C3', 'N'),
    ('K', 'P3'),
    ('Top', 'L'),
    ('K', 'C4'),
    ('C2', 'M')
]

# Build adjacency lists
adj = {n: set() for n in nodes}
for u, v in edges:
    adj[u].add(v)
    adj[v].add(u)

# Compute degrees
degrees = {n: len(adj[n]) for n in nodes}

# Backtracking search to find all isomorphisms G -> G
isomorphisms = []

def backtrack(node_idx, mapping, mapped_targets):
    if node_idx == len(nodes):
        # Verify all edges are mapped correctly
        # mapping is a dict mapping from node -> mapped_node
        for u in nodes:
            mu = mapping[u]
            for v in adj[u]:
                mv = mapping[v]
                if mv not in adj[mu]:
                    return  # Invalid mapping
        isomorphisms.append(mapping.copy())
        return

    u = nodes[node_idx]
    for v in nodes:
        if v in mapped_targets:
            continue
        # Degree check
        if degrees[u] != degrees[v]:
            continue
        # Structural neighborhood check:
        # For already mapped neighbors of u, their targets must be adjacent to v in G.
        possible = True
        for neighbor in adj[u]:
            if neighbor in mapping:
                m_neighbor = mapping[neighbor]
                if m_neighbor not in adj[v]:
                    possible = False
                    break
        if not possible:
            continue

        # Try mapping u -> v
        mapping[u] = v
        mapped_targets.add(v)
        backtrack(node_idx + 1, mapping, mapped_targets)
        del mapping[u]
        mapped_targets.remove(v)

backtrack(0, {}, set())

print(f"Number of automorphisms found: {len(isomorphisms)}")

# Compute orbits
orbits = []
visited = set()
for node in nodes:
    if node in visited:
        continue
    orbit = set()
    for iso in isomorphisms:
        orbit.add(iso[node])
    orbits.append(sorted(list(orbit)))
    visited.update(orbit)

print("\nOrbits under the Graph Automorphism Group:")
for idx, orb in enumerate(orbits):
    print(f"Orbit {idx+1}: {orb} (size {len(orb)})")

# Let's count how many distinguishable classes we have if we use local graph invariants:
# degree, triangle membership, and distance to X17.
# Let's see if we can distinguish them.
# The 17 points and their properties:
# We'll compute triangle membership count
triangles = []
for i in range(len(nodes)):
    for j in range(i+1, len(nodes)):
        for k in range(j+1, len(nodes)):
            u, v, w = nodes[i], nodes[j], nodes[k]
            if v in adj[u] and w in adj[v] and w in adj[u]:
                triangles.append({u, v, w})

def triangle_count(node):
    return sum(1 for t in triangles if node in t)

print("\nNode Invariants:")
print(f"{'Node':<6} | {'Degree':<6} | {'Triangles':<9} | {'Orbit':<10}")
print("-" * 45)
for n in nodes:
    # Find which orbit it belongs to
    orbit_idx = next(i+1 for i, orb in enumerate(orbits) if n in orb)
    print(f"{n:<6} | {degrees[n]:<6} | {triangle_count(n):<9} | Orbit {orbit_idx}")
