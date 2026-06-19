# Codebase and Paper Overview

This document describes the repository and manuscript for contributors and reviewers. For quick-start commands and script names, see [README.md](README.md).

## What this project is

**Author / theory:** Iyindamope Edward Ariori — the **Ariori** framework.

**Central claim:** Starting from a single radius \(r\) and three Euclidean axioms (existence of \(r\), Vesica replication, record line intersections), a fixed compass-and-straightedge algorithm yields exactly **17 points**, **21 atomic edges**, and **6 length ratios** in \(\mathbb{Q}(\sqrt{3})\). The resulting planar graph is argued to **force** an 11-orbit classification matching Standard Model structure (gauge sectors, three fermion generations, Higgs locus, confinement vs. decay topology). Higher "generations" come from re-running the same algorithm on each atomic segment as a new axis—not from adding new physics by hand.

**Repository role:** Independent replication of geometric and topological claims. Design rule: **no tuned exponents, no fitted masses, no imported PDG constants** in verification scripts—only distances and graph invariants from the construction.

**External replication data:** Paper Section 6 references [github.com/EdTheWonder/real](https://github.com/EdTheWonder/real) for point-culling arrays used in falsifiable predictions.

---

## The paper (`ariori_paper.tex`)

**Title:** *The 17-Point Seed: Geometric Correspondences and Structural Foundations for the Standard Model from Compass-and-Straightedge Geometry*

**Deliverable:** LaTeX source and compiled `ariori_paper.pdf` (13 sections + bibliography).

### Section map

| Section | Topic |
|---------|--------|
| **1. The Construction** | Motivation (circle–square without free parameters), axioms A1–A3, 6-step algorithm, generational recursion on atomic lines, uniqueness theorem, coordinates table, 6-ratio spectrum |
| **2. Six Structural Theorems** | 17-point count; 3 triangles → 3 fermion generations; chiral asymmetry at \(X_{17}\); degree tiers (5/4/3/2/1); \(\mathbb{Q}(\sqrt{13})\) vs \(\mathbb{Q}(\sqrt{3})\) Higgs coupling split; \((1,16)\) and \((1,3)\) Lorentzian signatures from distance matrices; Machian mass as graph centrality |
| **3. Forced Orbit Structure** | 11 geometric orbits from degree, triangle membership, axis, and algebraic field—mapped to SM roles |
| **4. Weak Isospin (\(y\))** | Proposal: \(T_3\) from \(y\)-coordinate sign; **open:** prove reflection operators = Pauli algebra in Lean |
| **5. Open Problems** | Gluon orbit degeneracy; geometric hypercharge \(Y\); GAP Wedderburn \(M_{10} \oplus M_7\); boundary Laplacian in \(\mathbb{Q}(\sqrt{2})\) vs \(\mathbb{Q}(\sqrt{3})\) |
| **6. Falsifiable Predictions** | Normal neutrino hierarchy; \(\theta_{13}\) from phases at \(X_{17}\); \(\theta_{12} \approx 31.63^\circ\) via Löwdin; flat rotation curves from \(\rho \propto 1/r^2\) |
| **7–8. Cross-gen & topology** | Invariants through Gen 4 (~46k nodes); Euler \(F=6\); Fermat prime 17 |
| **9. Discrete Lagrangian** | Graph Laplacian, Machian mass, \(\phi^3\) on 3 triangles; tree mass ratio \(\approx 1.42\) |
| **10–12. Gravity & QFT** | Discrete curvature → Einstein limit; \(\alpha\), \(SU(3)\) from 8 boundary nodes; lattice path integral program |
| **13. Conclusion** | Discrete manifold as invariant boundary for continuum QFT/GR |

### Gen 1 construction (summary)

1. Circle \(\mathcal{C}_A\) at \(A\) with radius \(r\).
2. Vesica: circle \(\mathcal{C}_B\) at \(B\) on the circumference → \(P_1, P_2\).
3. Compass arcs from \(P_1, P_2\) → \(P_3\)–\(P_6\).
4. Six scaffolding lines → \(C_1\)–\(C_4\), square \(K,L,M,N\), and \(X_{17}\) on the axis.

**Outputs:** 17 points, 21 atomic segments, 6 unique length ratios (all in \(\mathbb{Q}(\sqrt{3})\) at Gen 1).

### Critical mapping rule

The full Standard Model inventory is claimed to live in **Gen 1 topology only**. Recursive generations grow the **point cloud** for cosmology and kinematics; they do **not** mean "Gen 2 = muon" or "Gen 3 = \(SU(3)\)". Three fermion generations are the three triangles \(\Delta_1, \Delta_2, \Delta_3\) inside Gen 1.

---

## Codebase architecture

```
ariori_paper.tex  ──►  ariori_*.py, ariori-lean/
gen1_seed.rs      ──►  gen*_full_data.txt, cache/
*.g (GAP)         ──►  Section 5 algebra (Wedderburn, SU(3) boundary)
```

### 1. Rust geometric engine — `gen1_seed.rs`

- **`VesicaNumber`:** Exact arithmetic in \(\mathbb{Q}(\sqrt{3})\) as \((a + b\sqrt{3})/d\) with `num-bigint`.
- **Gen 1:** 17 points, 21 atomic segments, adjacency, ratios.
- **Gen 2–4:** Each atomic line is an axis for a child Vesica; phased pipeline with caches in `cache/gen{N}_phase*.bin`.
- **UI:** `eframe` / `egui` visualizer; headless mode for batch runs.
- **Outputs:** `gen1_full_data.txt` … `gen4_full_data.txt`, `gen*_atomic_ratios.txt`, `edges_gen*.txt`.

```bash
cargo run --bin gen1_seed
```

### 2. Python verification suite

| Script | Paper tie-in |
|--------|----------------|
| `ariori_invariant_catalog.py` | 21 segments, 6 ratios, Table 2 |
| `ariori_deep_structure.py` | Euler boundary, 12+5=17 |
| `ariori_falsifiable_prediction.py` | Normal neutrino hierarchy |
| `ariori_symmetry_test.py` | Gen 2 parity, CP-violation node count |
| `ariori_mixing_corrected.py` | \(\theta_{12}\), \(\theta_{23}=45^\circ\) |
| `ariori_four_tests.py` | Rotation-curve / halo geometry |
| `ariori_metric_predictions.py` | Distance-matrix eigenvalues, \((1,3)\) signature |
| `ariori_lagrangian.py` | Discrete Laplacian + mass + triangles |
| `ariori_einstein_gen2.py` | Gen 2 discrete curvature |
| `hypercharge_search.py` | Exploratory hypercharge (open problem) |
| `scratch/graph_orbits.py` | Orbit classification experiments |

### 3. Lean 4 formalization — `ariori-lean/`

Lake package with `native_decide` certificates for Gen 1 theorems over `VesicaNumber`:

- `Ariori/VesicaNumber.lean` — field arithmetic
- `Ariori/Geometry.lean`, `Construction.lean`, `Spectrum.lean`
- `Ariori/Graph.lean` — 17 nodes, 21 edges, triangles
- `Ariori/Theorems.lean` — main theorems
- `Main.lean` — executable entry

```bash
cd ariori-lean && lake build
```

### 4. GAP scripts

- `gap_lie_test.g`, `generator_search.g`, `wedderburn_test.g` — boundary Lie algebra and Wedderburn decomposition (Section 5).

### 5. Data artifacts

- **Text dumps:** Per-generation geometry (`gen*_full_data.txt`, `gen*_atomic_ratios.txt`).
- **`cache/`:** Binary checkpoints for Gen 3–4 intersection passes.
- **Misc:** `NGC3198_rotmod.dat` (galaxy rotation data), PNG figures, LaTeX build artifacts.

---

## How the pieces fit together

1. **Define** the unique Gen 1 construction (paper Section 1; Rust + Lean).
2. **Prove** structural theorems on the Gen 1 graph (Section 2; Lean + Python).
3. **Classify** nodes into 11 orbits → SM correspondence (Section 3).
4. **Predict** testable physics (Section 6) via distances, phases, degrees, recursive density.
5. **Extend** recursively for scale (Section 7; `gen1_seed` + caches).
6. **Formalize gaps** (Sections 4–5): hypercharge, gluon orbits, weak isospin in Lean.

---

## Epistemic framing

The manuscript combines classical geometry, spectral graph theory, lattice field theory, and phenomenology. The repository is strongest where claims reduce to **finite combinatorics or exact algebra** (point counts, triangle traces, distances in \(\mathbb{Q}(\sqrt{3})\), degree sequences).

Continuum Einstein equations, exact \(\alpha\), and full QFT emergence are **programmatic** (sketched + open problems). Section 5 lists internal tensions (e.g. 8 gluon nodes in 4 geometric orbits vs exact \(SU(3)\) degeneracy).

**Contributors:** Read `ariori_paper.tex` first. Do not assign physical sectors to recursive generation index without manuscript justification.

---

## Suggested reading order

1. [README.md](README.md) — scope and AI handoff constraints
2. `ariori_paper.tex` — Abstract, Sections 1–3, 5–6
3. `gen1_full_data.txt` + `ariori_invariant_catalog.py`
4. `ariori-lean/Ariori/Theorems.lean` — machine-checked claims
5. `ariori_falsifiable_prediction.py`, `ariori_mixing_corrected.py`, `ariori_four_tests.py`
