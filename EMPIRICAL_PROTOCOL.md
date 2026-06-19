# Ariori Gen-1 — Empirical Comparison Protocol

This document separates **machine-checked Lean facts** from **physics conjectures**, and fixes a comparison procedure before tuning labels or parameters.

## 1. What is proved (compile-time, `ArioriFull.lean`)

| Claim | Certificate |
|--------|-------------|
| 17-point Gen-1 coordinates, 21 edges | `native_decide` on explicit data |
| Row sums: `deg(i) = \|N(i)\|` | `laplacian_row_sums_zero` |
| `(Δ·1)_i = 0` from row sums | `laplacian_apply_const_zero_of_degree_eq_neighbor_count` (symbolic) |
| `L·1⃗ = 0` (mod 97), rank 16 | `laplacian_ones_in_kernel_mod97`, `laplacian_rank_16_mod97` |
| Connected graph | `gen1_graph_connected` |
| Exactly two autos found | `gen1_exactly_two_automorphisms` |
| Assignments are `[id, mirror]` only | `gen1_automorphism_assignments_eq` |
| σ witnessed in list ⇒ σ = id or mirror | `graph_automorphism_is_id_or_mirror_of_witness` |
| Mass order at unit `r` | `mass_well_order_*`, `mass_well_X17_second_after_A` |
| S[φ] invariant under id/mirror on probe field | `discrete_action_invariant_*` |
| Recursion history length, spectrum pipeline | `processGenerations_history_length`, `recursion_preserves_spectrum_pipeline` |

## 2. What is conjectured (not proved in Lean)

- Identification of nodes with specific Standard Model fermions.
- Numerical equality of `V(i)/V(A)` with measured mass ratios.
- Triangle couplings ↔ SU(3)×SU(2)×U(1).
- Physical scale: what length is `r = 1` in metres or GeV⁻¹.
- **Completeness:** every graph automorphism σ has `sigmaAssignmentInCollect σ = true` (follows from exhaustive search meta-theory; not a quantified Lean theorem over all σ).

## 3. Pre-registered comparisons

Run `lake build` then `.lake/build/bin/ariori.exe` to print:

- **Mass ratios** `V(n)/V(A)` at `r = 1` and `r = 100` (exact + float), with **$V_i = \sum_j (D_{ij}/r)^2$** (Lean `centralityPotentialSq`; same definition as the paper).
- **Gen-2 spectrum** after one `recursionStep` (new ratio classes).

### 3.1 Anchor

Pick **one** external anchor (state before looking at ratios):

- Option A: fix `V(A)` ≡ unit mass (compare all ratios to A only).
- Option B: fix `V(X17)/V(A)` to a named experimental ratio (uses one free parameter).

Do not add a second anchor after seeing the table.

### 3.2 Candidate ratio list (compare float from `massRatioToA`)

| ID | Quantity | Source in code |
|----|----------|----------------|
| R1 | `V(C2)/V(A)` | `massRatioToA r .C2` |
| R2 | `V(C4)/V(A)` | `massRatioToA r .C4` |
| R3 | `V(X17)/V(A)` | `massRatioToA r .X17` |
| R4 | `V(C1)/V(A)` | `massRatioToA r .C1` |
| R5 | `V(C1)/V(C2)` | ratio of potentials |
| R6 | Gen-2 new ratios | `processGenerations r 1` → last `spectrum` |

### 3.3 Tolerance (fixed in advance)

- **Match:** relative error ≤ 2% for dimensionless ratios in ℚ(√3) vs PDG target.
- **Near miss:** 2–10% (record, do not relabel nodes).
- **Fail:** > 10% (counts against SM identification conjecture).

### 3.4 Node–particle dictionary (draft; change only with new protocol version)

| Node | Hypothesis (test only) |
|------|-------------------------|
| A | Lightest / reference |
| X17 | Second generation anchor |
| C1, C3 | Quark-frame (mirror pair) |
| C2, C4 | Lepton-frame (mirror pair) |

## 4. Gen-2 hypothesis

After one recursion step, list **new** atomic length ratios not present in Gen-1’s six classes. Compare only ratios that appear with frequency ≥ 1 in the Gen-2 spectrum output.

Question (pre-registered): Does any Gen-2 ratio equal (within tolerance) a known mass ratio, e.g. m_μ/m_e, without new free parameters?

## 5. Outcomes

- **Strong:** ≥ 3 pre-registered ratios match at ≤ 2% with anchor A only.
- **Weak:** orderings (`V(A) < V(X17) < V(C1) < V(C2)`) hold but ratios miss — geometry constrains hierarchy only.
- **Negative:** orderings hold, ratios systematically miss — keep formal math, revise SM mapping.

## 6. Reproducibility

```powershell
cd ariori-lean
lake build
.\.lake\build\bin\ariori.exe
```

Record git commit hash and `lean-toolchain` when archiving results.

## 7. Latest run

Automated output: `python ariori_empirical_test.py`  
Summary: [EMPIRICAL_RESULTS.md](EMPIRICAL_RESULTS.md)
