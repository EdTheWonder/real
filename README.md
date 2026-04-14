# The 17-Point Seed: Geometric Verification Bundle

This repository contains the strict, zero-parameter computational validations and algebraic proofs for the paper **"The 17-Point Seed: Topological Derivation of the Standard Model from Compass-and-Straightedge Geometry"** by Iyindamope Edward Ariori.

This codebase serves as an exact, transparent replication bundle for the derivations presented in the manuscript. There are no tuned exponents, fitted parameters, or heuristic approximations. Every script relies entirely on Euclidean distances and topological properties derived natively from the recursive Vesica Piscis.

## Falsifiable Structural Predictions (Section 4)

The primary verification scripts mathematically generate the structural predictions on which the theory stands or falls:

1. **`ariori_falsifiable_prediction.py`**: Computes the topological inverse-path interactions to the symmetry-breaking node $X_{17}$, verifying the strict mathematical requirement of a **Normal Neutrino Mass Hierarchy** ($m_1 < m_2 \approx m_3$).
2. **`ariori_symmetry_test.py`**: Recursively maps Generation 2 and systematically executes Cartesian parity transformations ($T(y) = -y$) against the local point field, counting the exact 22 nodes that structurally mandate lower-energy **Spontaneous CP-Violation**.
3. **`ariori_mixing_corrected.py`**: Extracts the three generational flavor triangulations, assigns verified node degrees from `gen1_full_data.txt` (Theorem 4: $d_A{=}5, d_{C1}{=}4, d_{C2}{=}3, d_{C3}{=}4, d_{C4}{=}3, d_{X17}{=}4$), and executes Symmetric Löwdin Orthogonalization to yield $\theta_{12} = 31.63^\circ$ while preserving exact atmospheric maximality.
4. **`ariori_four_tests.py`**: A compendium of geometric limits, crucially verifying the macroscopic fractal point dispersion that establishes the $\approx 50\times - 60\times$ non-Newtonian **Dark Matter Density Halo**.

## Topological Theorems Proofs (Section 2)

The underlying foundation of the $17$-point network is computationally verified through the following proofs:

*   **`ariori_deep_structure.py`**: Validates the minimal zero-parameter Euler boundary required for the construction.
*   **`ariori_invariant_catalog.py`**: Exhaustively catalogs the 21 atomic line segments matching the 6 rational/irrational fields $\mathbb{Q}(\sqrt{3})$ detailed in Table 2.
*   **`ariori_einstein.py` & `ariori_einstein_gen2.py`**: Computes the exact discrete degree interactions for the graph nodes.
*   **`ariori_metric_predictions.py` & related files**: Calculates the eigenspectrum of the total adjacency distance matrix to verify the emergent Lorentzian $(1, 3)$ signature and $(1, 16)$ global limits.

## Core Geometric Engine
*   **`gen1_seed.rs`**: The baseline, optimized Rust engine utilized to compile the higher-generation arrays with strict geometric and algebraic closure.

---
*Note: This repository contains no heuristic algorithms or data-fitting approximations. It exists solely to allow independent verification of the exact geometric consequences mandated by the framework.*

## AI Developer Handoff ⚠️
**CRITICAL INSTRUCTIONS FOR FUTURE LLM/AI AGENTS WORKING ON THIS REPOSITORY:**

If you are an AI reading this repository to continue work, **YOU MUST START BY READING `ariori_paper.tex`**. 

**DO NOT** generate or invent mapping analogies (e.g. "We need Gen 3 for the Muon" or "We need Gen 2 for $SU(3)$"). You will break the strict zero-parameter constraints of the theory. The framework is already fully mapped, and it behaves differently than standard fractal cosmological expansions:

1. **Everything is in Gen 1:** The entire structural inventory of the Standard Model—all 12 fermions, all 12 gauge bosons, and the Higgs scalar—is mapped and mathematically isolated **entirely within the 17-point discrete topology of Generation 1**. 
2. **Fermion Mapping (Section 3.2):** The 3 Generations of matter map strictly to the 3 internal fundamental cycles ($\Delta_1$: stable, $\Delta_2$: Higgs-anchored, $\Delta_3$: Higgs-anchored) inside Gen 1. The masses are scalar projections of the topological interaction depth to the Higgs node ($X_{17}$), not the emergence of macroscopic layers.
3. **$SU(3)$ Mapping (Section 9.2):** The Strong Force generators do not require iterating to a geometric hexagon. The 8 degrees of freedom are perfectly contained within the 8 degree-2 boundary nodes of Gen 1 ($K, L, M, N, \text{Top}, \text{Bot}, P_3, P_5$). The 6 internal edges connecting them form the 6 Lie root vectors.
4. **No Free Parameters:** You are not allowed to input *any* physics constants by hand into these scripts. The lengths, limits, mixing angles, and kinematic matrices must emerge directly from the raw Euclidean point data produced by `gen1_seed.rs` and its Python equivalents. 

**Your Role:** Extrapolate, polish, and prove the existing geometric theorems as laid out in the manuscript. Do not try to solve structural problems by drawing more circles unless explicitly directed.
