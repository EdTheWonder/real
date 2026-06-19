# Empirical test results (automated)

**Script:** `python ariori_empirical_test.py`  
**Protocol:** [EMPIRICAL_PROTOCOL.md](EMPIRICAL_PROTOCOL.md)  
**Centrality:** `V_i = Σ_j (d_ij/r)²` (matches Lean `centralityPotentialSq`; scale-free in `r`)

## Gen-1 centrality hierarchy

| Node | V_i / V(A) | Rank (light → heavy) |
|------|------------|----------------------|
| A | 1.000 | 1 (lightest) |
| X17 | 1.199 | 2 |
| C1, C3 | 1.394 | 4–5 |
| C2, C4 | 2.169 | 12–13 |

**Lean ordering** `V(A) < V(X17) < V(C1) < V(C2)`: **YES** (subset of full order).

Pre-registered ratios R1–R5 are **O(1)** numbers (~1.2–2.2), not SM mass ratios (~10²–10³).

| ID | Value | Blind best SM catalog (2% target) |
|----|-------|-----------------------------------|
| R1 C2/A | 2.169 | FAIL (no catalog hit at 2%) |
| R2 C4/A | 2.169 | FAIL |
| R3 X17/A | 1.199 | FAIL |
| R4 C1/A | 1.394 | FAIL |
| R5 C1/C2 | 0.643 | FAIL |

**Protocol outcome:** **WEAK** — hierarchy holds; pre-registered centrality ratios do not match PDG mass ratios without a node–particle map and scale bridge.

## Gen-1 atomic length ratios (6 classes)

These are **segment length / r**, not `V_i`:

| L/r | ≈ float |
|-----|---------|
| (2−√3)/2 | 0.134 |
| (√3−1)/2 | 0.366 |
| 1/2 | 0.500 |
| √3−1 | 0.732 |
| √3/2 | 0.866 |
| 1 | 1.000 |

Centrality `V(C2)/V(A) ≈ 2.17` and atomic `(2−√3)/2 ≈ 0.13` are **different emergent quantities**.

## Gens 1–4 atomic spectra (finite snapshot)

| Gen | Listed classes | Unique values | NEW vs earlier gens |
|-----|----------------|---------------|---------------------|
| 1 | 6 | 6 | — |
| 2 | 52 | 52 | 46 |
| 3 | 378 | 378 | 337 |
| 4 | 378 | 378 | **0** |

**Cumulative** distinct ratio values through Gen-4: **389**.

Interpretation (not gen-by-gen “solution”):

- Recursion **enriches** the ratio vocabulary at Gen-2 and Gen-3.
- Gen-4 snapshot adds **no new** ratio *classes* beyond Gen-1–3 in this run (saturation of the extracted atomic spectrum at this depth for the stored data).
- Infinite generations are **not** searched; this is a **growth / closure** statistic on available logs.

## Zero-parameter doctrine

- **Emergent from geometry:** 6 Gen-1 length ratios, 389 cumulative ratio values by Gen-4, centrality ordering, Laplacian kernel (Lean).
- **Not emergent in this test:** numerically matching SM mass ratios (e.g. m_μ/m_e ≈ 207) from `V_i/V(A)` with anchor A only.
- **Next step if pursuing physics:** fix an **a priori** node–particle dictionary and compare to a **small** list of dimensionless targets; do not tune labels after seeing Gen-4.

## Reproduce

```powershell
python ariori_empirical_test.py
```
