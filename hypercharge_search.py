import math

# Points definition: (x, y)
points = {
    "A": (0, 0),
    "B": (1, 0),
    "X17": (math.sqrt(3)/2, 0),
    "Top": (1/2, math.sqrt(3)/2),
    "Bot": (1/2, -math.sqrt(3)/2),
    "P3": (-1/2, math.sqrt(3)/2),
    "P5": (-1/2, -math.sqrt(3)/2),
    "P4": (3/2, math.sqrt(3)/2),
    "P6": (3/2, -math.sqrt(3)/2),
    "C1": (math.sqrt(3)/2, 1/2),
    "C3": (math.sqrt(3)/2, -1/2),
    "C2": (-math.sqrt(3)/2, -1/2),
    "C4": (-math.sqrt(3)/2, 1/2),
    "K": (-math.sqrt(3)/2, math.sqrt(3)/2),
    "M": (-math.sqrt(3)/2, -math.sqrt(3)/2),
    "L": (math.sqrt(3)/2, math.sqrt(3)/2),
    "N": (math.sqrt(3)/2, -math.sqrt(3)/2)
}

degrees = {
    "A": 5, "X17": 4, "C1": 4, "C3": 4,
    "C2": 3, "C4": 3,
    "K": 2, "L": 2, "M": 2, "N": 2,
    "Top": 2, "Bot": 2, "P3": 2, "P5": 2,
    "B": 1, "P4": 1, "P6": 1
}

# The SM Hypercharges Y:
# Leptons: L_L (-1), e_R (-2), nu_R (0)
# Quarks: Q_L (1/3), u_R (4/3), d_R (-2/3)
# Higgs: (1)

def dist_sq(p1, p2):
    return (p1[0]-p2[0])**2 + (p1[1]-p2[1])**2

print(f"{'Node':<5} | {'Deg':<3} | {'Dist to A^2':<15} | {'Dist to X17^2':<15} | {'Y-coord (T3)':<15}")
print("-" * 65)

for name, coords in points.items():
    d_A = dist_sq(coords, points["A"])
    d_X = dist_sq(coords, points["X17"])
    y = coords[1]
    
    # Clean up small floats
    if abs(d_A - round(d_A)) < 1e-9: d_A = round(d_A)
    if abs(d_X - round(d_X)) < 1e-9: d_X = round(d_X)
    if abs(y - round(y)) < 1e-9: y = round(y)
    
    print(f"{name:<5} | {degrees[name]:<3} | {d_A:<15.3f} | {d_X:<15.3f} | {y:<15.3f}")
