# The 17-Point Seed: Geometric Verification Bundle

This repository contains the strict, zero-parameter computational validations and algebraic proofs for the paper **"The 17-Point Seed: Topological Derivation of the Standard Model from Compass-and-Straightedge Geometry"** by Iyindamope Edward Ariori.

This codebase serves as an exact, transparent replication bundle for the derivations presented in the manuscript. There are no tuned exponents, fitted parameters, or heuristic approximations. Every script relies entirely on Euclidean distances and topological properties derived natively from the recursive Vesica Piscis.

## Falsifiable Structural Predictions (Section 4)

The primary verification scripts mathematically generate the structural predictions on which the theory stands or falls:

1. **`ariori_falsifiable_prediction.py`**: Computes the topological inverse-path interactions to the symmetry-breaking node $X_{17}$, verifying the strict mathematical requirement of a **Normal Neutrino Mass Hierarchy** ($m_1 < m_2 \approx m_3$).
2. **`ariori_symmetry_test.py`**: Recursively maps Generation 2 and systematically executes Cartesian parity transformations ($T(y) = -y$) against the local point field, counting the exact 22 nodes that structurally mandate lower-energy **Spontaneous CP-Violation**.
3. **`ariori_mixing_weighted.py`**: Extracts the three generational flavor triangulations, assigns exact Riemann node curvature (degrees), and executes Symmetric Löwdin Orthogonalization to yield exactly $\theta_{12} = 34.54^\circ$ while preserving exact atmospheric maximality.
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
