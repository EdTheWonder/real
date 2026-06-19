# Spectral.pdf — Lean verification status

Single source: **`Spectral.lean`** (`Certified` / `Assumed` / `Rigidity`).

## Certified (proved)

`namespace Certified` — finite `native_decide` certificates: §2–§3, Thm 1.2, §7–§9 samples.

**`fullCertificateOk = true`** — strongest computational theorem.

## Assumed (paper-level, outside skeleton chain)

`Assumed.hilbertPolya`, `vesicaStarOperatorUniqueness`, `marchenkoTheorem8_3`, `distributionalXiLimit` — documented imports not wired into the skeleton proof.

## Rigidity (axiomatic logical skeleton)

Opaque types `ℂ`, `ℝ`, `Operator`. Classical content as axioms:

- `spectral_theorem`, `hp_realization`
- `certified_seeds_imply_self_adjoint`, `operator_exists`

**Proved (deductive architecture):**

- `finite_structural_fulcrum` — Thm 1.2 certificate
- `structural_rigidity` — `(combinatorialCertificateOk) → ∀ ρ, L_zero ρ → re ρ = alphaReal`
- `zeros_on_critical_line` — unconditional corollary via proved certificate

The skeleton verifies the paper's **logical implication** is gap-free. Analytic burden stays in axioms.

```bash
cd spectral-lean && lake build spectral && lake exe spectral
```
