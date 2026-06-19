# Bridging Proven Geometry to Science (Zero-Parameter Program)

This document states **what must be measured**, **what counts as emergence**, and **what Lean vs computation should do**. It subordinates physics/chemistry/biology labels to **algebraic outputs** of the construction.

**Already run:** [EMPIRICAL_RESULTS.md](EMPIRICAL_RESULTS.md) — Gen-1 centrality ratios are O(1), not SM masses. **Verified exports:** Gen-1 **6** and Gen-2 **52** unique atomic ratio classes (Gen-1 ⊂ Gen-2). Gen-3/4 file equality is **not** used as a bridge claim (heavy snapshots; re-verify independently).

---

## The bridge in three layers

| Layer | Question | Success criterion |
|-------|----------|-------------------|
| **L0 — Rigidity** | What does the construction *force* on Gen-1? | Lean theorems; no PDG input |
| **L1 — Recursion law** | What does infinite re-application *force* on spectra/graphs? | Closed-form or proved recurrence; finite snapshots only validate |
| **L2 — Identification** | Do *specific* algebraic numbers match *named* experiments? | Pre-registered map + tolerance; failure falsifies identification, not L0 |

**Rule:** L2 never retrofits L0 definitions (e.g. renaming nodes after seeing ratios).

---

## What “emergence” must mean

A quantity **emerges** only if:

1. It is **definable** from `{deriveSquare, split, spawn, merge, atomicSpectrum}` and `ℚ(√3)` arithmetic alone.
2. Its value is **unique** (no continuous knob).
3. Optional L2: it equals a measured number within stated tolerance **without** choosing which of 389 ratios “is” the muon.

**Not emergence:** importing `g`, `α`, `m_e`, diagonal `M²` as physics, then checking numerics.

**Allowed:** defining **geometric** objects (e.g. `V_i = Σ_j d_ij²/r²`, triangle edge products, `spectrumStep`) and comparing **ratios** to experiment.

---

## Domain-specific bridges

### Physics (GR / SM)

| Target | Mathematical probe (zero-parameter) | Not sufficient alone |
|--------|-------------------------------------|----------------------|
| Spacetime signature | 4×4 distance matrix on {C1–C4} (done in Lean) | Full GR |
| Kinetic operator | Graph Laplacian Δ, kernel, rank (done) | Continuum limit |
| Mass **hierarchy** | Limits of `V_i(N)` or eigenvalue ratios of **geometry-derived** operator | `V_i` alone (failed blind SM match) |
| Couplings | Ratios of triangle weights / edge products; **no free `g`** | Setting `g := 1` in `discreteAction` |
| Generations | Field extension tower; `spectrumStep` closure | Counting Gen-2..4 files by hand |
| Gauge group | Automorphism split inherited vs new at `recursionStep` | Aut(G)=ℤ/2 on Gen-1 only |

### Chemistry

| Target | Probe |
|--------|--------|
| Tetrahedral coordination | `cos θ = -1/3` in **angle spectrum** at Gen-1 (exact VesicaNumber) |
| Bond-length ratios | Ratios among **atomic length** classes `R_1`, not `V_i` |
| Close packing | `√3 : 2` from KLMN square (already geometric) |

### Biology

| Target | Probe |
|--------|--------|
| Fibonacci / φ | Growth `P_N, E_N`; ratio of consecutive in `spectrumEvolution` |
| Phyllotaxis | Limit of `r_{i+1}/r_i` in sorted `R_N` |

---

## Tier A — Must pass in Lean (internal closure)

These do **not** cite PDG. They prove the discrete model is coherent and recursion is lawful.

1. **Spectrum dynamical system (Experiment 1 refined)**  
   - Define `R1 : List VesicaNumber` (six Gen-1 atomic ratios).  
   - `spectrumStep R := normalizeMultiset (R ∪ {r·s | r∈R, s∈R1})`.  
   - **Theorems to seek:** `spectrumEvolution 4` cardinality bounds; whether `spectrumStep` is idempotent on the Gen-4 snapshot (matches **0 new** in data).  
   - **Lean:** prove `R1` closed under list from `atomicSpectrum`; prove `spectrumStep` preserves field membership in `ℚ(√3)`.

2. **Recursion vs mirror (Experiment 4)**  
   - `recursionStep_commutes_mirror` or explicit **failure** certificate (chirality = broken).  
   - No physics name — only commutation or defect.

3. **Coupling from geometry, not parameter (Experiment 2 refined)**  
   - Define `triangleWeight Δ` from edge-length product / `r^k` (fixed `k` from dimensional counting in **discrete** action).  
   - Theorem: `triangleWeight` equals a specific `VesicaNumber` rational in `ℚ(√3)`; compare **ratio** `triangleWeight / kineticScale` to 1/137 only in L2 script.

4. **Operator for mass ratios (Experiment 1 refined — honest)**  
   - **Do not** call `M²_ii = V_i` “mass” in Lean.  
   - Define `geometricOperator n` (e.g. `laplacianMatrix` + `diag(centralityPotentialSq r)`).  
   - Compute characteristic polynomial / eigenvalues in `ℚ(√3)` for 17×17 (heavy `native_decide` or external + certificate).  
   - **Prediction to test:** ratios of **positive** eigenvalues are algebraic; compare in L2 to SM — **hypothesis**, not theorem.

---

## Tier B — Recursion laws (finite snapshots + limits)

Use **one** script family (`ariori_empirical_test.py` extended), not gen-by-gen “solving”:

| Statistic | Definition | Gen 1–4 result (current data) |
|-----------|------------|--------------------------------|
| `|R_N|` | Unique atomic ratio values | 6 → 52 → 378 → 378 |
| `NEW(N)` | `R_N \ R_{<N}` | 0, 46, 337, **0** |
| `|Aut(G_N)|` | Backtrack count | compute once per snapshot |
| Extension profile | degree of minimal field per distance² | from `vesicaSqrt` / √13 tests |
| Angles | `cos θ` multiset | **not yet run** |
| Growth | `P_N, E_N, E_N/P_N` | from `gen*_full_data` |

**Key mathematical experiment:** prove or disprove **saturation**: ∃N such that `spectrumStep R_N = R_N` (your Gen-4 data suggests N=4 for this pipeline).

**RG analogy (Experiment 3):** only valid if you define `μ = log(1/r)` from **atomic ratio** `ρ`, not tunable scale. Beta function = discrete derivative of coupling defined in Tier A (3) w.r.t. `μ`.

---

## Tier C — Pre-registered identification (L2 only)

From [EMPIRICAL_PROTOCOL.md](EMPIRICAL_PROTOCOL.md):

- **Anchor A:** ratios from `V_i/V(A)` — **failed** blind SM catalog at 2%.  
- **Redirect:** test **atomic** ratios `R_1` and `spectrumEvolution` values against mass ratios **only after** fixing a dictionary in writing.  
- **Separate tracks:**  
  - **Track P (particle):** best match in `R_∞` to {m_μ/m_e, …}.  
  - **Track C (chemistry):** `cos θ = -1/3`.  
  - **Track B (biology):** Fibonacci in `P_N`.

---

## Priority implementation order

| P | Experiment | Tool | Delivers |
|---|------------|------|----------|
| 1 | `spectrumStep` + saturation | Lean def + Python on gen1–4 files | Renormalization-style closure |
| 2 | Angle spectrum Gen-1 | Python → Lean `native_decide` on cos θ | Chemistry bridge |
| 3 | 17×17 eigenvalues of `Δ + D(V)` | Python float + mod-97 cert; optional Lean | Eigenvalue ratio table (L2) |
| 4 | `recursionStep` vs mirror | Lean | Chirality certificate |
| 5 | Extension tower Gen 1–4 | Python on coordinates in logs | Generation = field jump? |
| 6 | `|Aut(G_N)|` | Rust/Lean backtrack | Gauge as “new autos” |
| 7 | Persistent homology | Python | Speculative; high cost |
| 8 | Centrality limit `V_i(N)` | Limit of merge growth | Needs symbolic bound, not infinite enum |

---

## Corrections to common proposals

1. **“Diagonalize H = αΔ + βM² for particle masses”** — Valid as **math**, but `V_i` is sum of **squared** distances; SM masses are not eigenvalues of this 17-node matrix without a **derived** identification map. Expect O(1) ratios, not 10².

2. **“g = 1/137 from triangles”** — `g` is currently **chosen** (`one` in `discreteAction`). Emergence requires defining `g_geom` from edge data and proving invariance.

3. **“Infinite generations”** — Prove **laws** (`spectrumStep`, `recursion_preserves_spectrum_pipeline`), evaluate **snapshots** (N ≤ 4 in repo), study **saturation** and growth exponents — never “solve Gen 187”.

4. **Hydrogen / full RG / persistent homology** — Tier C or external; need Tier A–B first.

---

## Minimal next Lean additions (suggested)

```lean
def gen1AtomicRatios : List VesicaNumber :=  -- from atomicSpectrum at r=1
def spectrumStep (R : List VesicaNumber) : List VesicaNumber := ...
def spectrumEvolution (n : Nat) : List VesicaNumber := ...
-- Optional: theorem spectrum_evolution_four_saturated :
--   spectrumEvolution 4 = spectrumEvolution 3  -- if certified on data
```

```lean
theorem recursion_step_commutes_mirror_or_defect :
  (∀ g, relabelGeneration mirror (recursionStep r g) = recursionStep r (relabelGeneration mirror g))
  ∨ chiralDefectCertificate = true := ...
```

---

## Summary

**The gap** is not more hand-waving about SM/GR; it is:

1. **Closing L0–L1** — spectrum dynamical system, saturation, mirror commutation, geometric coupling without `g`.  
2. **Choosing the right emergent numbers** — atomic ratios and eigenvalues of **defined** operators, not centrality alone.  
3. **L2 comparison** — pre-registered, with failure already shown for `V_i/V(A)` vs blind PDG.

Lean’s role: **theorems on laws and definitions** — including **all paper-mapping tests** in `ArioriFull.lean` (`paper_mapping_certificate`). Python scripts are optional float tables only; they are not certificates.

Reproduce:

```powershell
cd ariori-lean
lake build
.\.lake\build\bin\ariori.exe
```

---

## Paper-guided verification (Lean certificates)

All tests below are **`native_decide` theorems** in `ariori-lean/ArioriFull.lean` (search `paper_` / `paper_mapping_certificate`). Combined gate: `paper_mapping_certificate`.

| Paper claim | Lean theorem(s) |
|-------------|-----------------|
| Δ₁=A-C2-C4, Δ₂=A-C1-X17, Δ₃=A-C3-X17 forced by adjacency | `paper_triangles_are_forced_triangles` |
| Δ₁ equilateral; Higgs-free | `paper_delta1_equilateral_edges`, `paper_delta1_higgs_free` |
| Quark \|C1-X17\|=r/2; lepton √13 in dist² | `paper_quark_higgs_edge_half_r`, `dist_C2_X17`, `C2_X17_outside_field` |
| V(A)<V(X17); quarks deeper than leptons (linear Mach) | `paper_mach_A_before_X17`, `paper_quark_deeper_than_lepton_lin` |
| m_II/m_I ≈ 1.48 (L² Mach; formal mass matrix) | `paper_generation_mass_ratio_sq_near_148` |
| m_II/m_I ≈ 1.42 (linear Mach auxiliary) | `paper_generation_mass_ratio_near_142` |
| Gen II mass scale > Gen I | `paper_mass_scale_II_gt_I` |
| Higgs depth D(Δ₁) > D(Δ₂)=D(Δ₃) | `paper_higgs_depth_gen1_farther`, `paper_higgs_depth_gen2_equals_gen3` |
| Neutrino v₂, v₃ + mirror | `paper_triangle_degree_vectors`, `paper_v2_v3_mirror_symmetric` |
| α⁻¹ = C(17,2)+1 = 137 | `paper_alpha_inverse_137` |
| Gen-1/2 ratio classes 6 / 52 | `gen1_atomic_ratio_class_count_six`, etc. |

**Not in Lean (open):** blind PDG mass match per fermion; tetrahedral cos θ = −1/3 exact; continuum GR limit.

---

## Bridge run results (2026-06-02)

| Experiment | Result |
|------------|--------|
| **Spectrum step** on six seed ratios | Gen-1 file **6** (matches minimal model); Gen-2 file **52** (46 new vs Gen-1); minimal `spectrumStep` closure **≠** full Rust recursion |
| **Angles** | 6 distinct cos θ; 60° and 90° exact; **tetrahedral −1/3 not exact** (nearest Δ ≈ 0.17) |
| **H = Δ + diag(V)** | 17 eigenvalues; blind SM ratio matches all **FAIL** at 50% tolerance |
| **Triangle weights** | Normalized g² ≈ 0.054–0.29; **not** 1/137 without extra structure |
| **Mirror × recursion (depth 1)** | Checked in Lean (`recursionMirrorCommutes`) |

**Lean additions:** `gen1SeedRatios`, `spectrumStep` / `spectrumEvolution`, **gen1=6 / gen2=52** class counts, `gen1AngleCosSpectrum` (6 classes), `triangleCouplingRatio`, mirror commutation certificate.

**Interpretation:** `spectrumStep` on **R₁ alone** is a minimal L1 law; full Rust recursion adds geometry (lengths at all scales) — do not confuse the two. Chemistry tetrahedral angle is an **L2 target**, not yet an exact Gen-1 Vesica angle.
