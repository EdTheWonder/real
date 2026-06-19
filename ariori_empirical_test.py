#!/usr/bin/env python3
"""
Pre-registered empirical test (see EMPIRICAL_PROTOCOL.md).

- Gen-1: Machian potentials V_i = sum_j (d_ij/r)^2 (matches Lean centralityPotentialSq).
- Gens 1-4: parse atomic ratio spectra from repo files; report NEW ratio classes per step
  (finite snapshots — not an infinite generation-by-generation search for a "solution").
"""

from __future__ import annotations

import math
import re
import sys
from dataclasses import dataclass
from pathlib import Path

ROOT = Path(__file__).resolve().parent
S3 = math.sqrt(3)

# Gen-1 coordinates at r=100 (scale cancels in V_i/V_j ratios)
PTS = {
    "A": (0.0, 0.0),
    "B": (100.0, 0.0),
    "Top": (50.0, 50.0 * S3),
    "Bot": (50.0, -50.0 * S3),
    "P3": (-50.0, 50.0 * S3),
    "P4": (150.0, 50.0 * S3),
    "P5": (-50.0, -50.0 * S3),
    "P6": (150.0, -50.0 * S3),
    "C1": (50.0 * S3, 50.0),
    "C2": (-50.0 * S3, -50.0),
    "C3": (50.0 * S3, -50.0),
    "C4": (-50.0 * S3, 50.0),
    "K": (-50.0 * S3, 50.0 * S3),
    "L": (50.0 * S3, 50.0 * S3),
    "M": (-50.0 * S3, -50.0 * S3),
    "N": (50.0 * S3, -50.0 * S3),
    "X17": (50.0 * S3, 0.0),
}

R = 100.0
TOL_MATCH = 0.02
TOL_NEAR = 0.10

# PDG dimensionless ratios (for hypothesis checks only; not used in Lean)
SM_CATALOG = {
    "m_mu/m_e": 206.7682830,
    "m_tau/m_e": 3477.23,
    "m_p/m_e": 1836.15267343,
    "m_c/m_u": 589.35,  # MS-bar order of magnitude
    "m_s/m_d": 20.2,
    "m_b/m_s": 44.76,
    "m_t/m_c": 135.56,
    "m_W/m_Z": 0.88147,
    "m_H/m_W": 1.558,  # rough
}


@dataclass
class RatioClass:
    expr: str
    value: float
    freq: int


def parse_ratio_expr(expr: str) -> float:
    """Evaluate algebraic ratio in Q(sqrt(3)) from Rust/Lean text form."""
    s = expr.strip()
    s = s.replace(" ", "")
    s = re.sub(r"\((\d+)\+-(\d+)\*sqrt\(3\)\)", r"(\1-\2*sqrt(3))", s)
    s = re.sub(r"\((-?\d+)\+(-?\d+)\*sqrt\(3\)\)", r"(\1+\2*sqrt(3))", s)
    s = s.replace("sqrt(3)", f"({S3})")
    s = s.replace("+-", "-")
    # bare sqrt(3) without parens
    if s == f"({S3})":
        return S3
    return float(eval(s, {"__builtins__": {}}, {}))


def load_atomic_spectrum(path: Path) -> list[RatioClass]:
    text = path.read_text(encoding="utf-8", errors="replace")
    rows: list[RatioClass] = []
    for line in text.splitlines():
        if "x" not in line or "Ratio" in line or "===" in line or "---" in line:
            continue
        m = re.match(
            r"\s*\d+\s+([^\s].+?)\s{2,}[^\s].+?\s+x(\d+)\s*$",
            line,
        )
        if not m:
            continue
        expr, freq_s = m.group(1).strip(), m.group(2)
        try:
            val = parse_ratio_expr(expr)
        except Exception:
            continue
        rows.append(RatioClass(expr, val, int(freq_s)))
    return rows


def centrality_sq_sum_dist2() -> dict[str, float]:
    names = list(PTS.keys())
    v: dict[str, float] = {}
    for i, ni in enumerate(names):
        pi = PTS[ni]
        s = 0.0
        for j, nj in enumerate(names):
            if i == j:
                continue
            pj = PTS[nj]
            d = math.hypot(pi[0] - pj[0], pi[1] - pj[1]) / R
            s += d * d
        v[ni] = s
    return v


def rel_err(obs: float, exp: float) -> float:
    if exp == 0:
        return float("inf")
    return abs(obs - exp) / abs(exp)


def classify(err: float) -> str:
    if err <= TOL_MATCH:
        return "MATCH"
    if err <= TOL_NEAR:
        return "NEAR"
    return "FAIL"


def best_sm_match(value: float) -> tuple[str, float, str]:
    best_name, best_err = "", float("inf")
    for name, target in SM_CATALOG.items():
        e = rel_err(value, target)
        if e < best_err:
            best_err, best_name = e, name
    return best_name, best_err, classify(best_err)


def print_gen1_centrality() -> dict[str, float]:
    print("=" * 72)
    print("GEN-1 CENTRALITY  V_i = sum_j (d_ij/r)^2  (Lean-aligned, r scale-free)")
    print("=" * 72)
    v = centrality_sq_sum_dist2()
    va = v["A"]
    order = sorted(v.items(), key=lambda x: x[1])
    print(f"{'Node':<6} {'V_i':>14} {'V_i/V(A)':>14} {'rank':>6}")
    for rank, (n, vi) in enumerate(order, 1):
        print(f"{n:<6} {vi:14.6f} {vi/va:14.6f} {rank:6}")
    print()
    # Pre-registered R1-R5
    tests = [
        ("R1", "C2", "C2/A"),
        ("R2", "C4", "C4/A"),
        ("R3", "X17", "X17/A"),
        ("R4", "C1", "C1/A"),
        ("R5", "C1/C2", None),
    ]
    print("Pre-registered ratios (Option A: anchor V(A)):")
    print(f"{'ID':<4} {'Quantity':<12} {'Value':>14}  {'vs SM (best)':<20} {'class':<6}")
    for tid, node, _ in tests[:4]:
        val = v[node] / va
        sm, err, cl = best_sm_match(val)
        print(f"{tid:<4} {node+'/A':<12} {val:14.6f}  {sm+' err='+f'{err:.4f}':<20} {cl:<6}")
    val5 = v["C1"] / v["C2"]
    sm, err, cl = best_sm_match(val5)
    print(f"R5   {'C1/C2':<12} {val5:14.6f}  {sm+' err='+f'{err:.4f}':<20} {cl:<6}")
    ok_order = v["A"] < v["X17"] < v["C1"] < v["C2"]
    print(f"\nHierarchy A < X17 < C1 < C2: {'YES' if ok_order else 'NO'}")
    print()
    return v


def spectrum_fingerprint(classes: list[RatioClass], ndigits: int = 8) -> set[float]:
    return {round(c.value, ndigits) for c in classes}


def analyze_generations() -> None:
    print("=" * 72)
    print("ATOMIC SPECTRA GENS 1-4  (structural growth, not per-gen solving)")
    print("=" * 72)
    cumulative: set[float] = set()
    for g in (1, 2, 3, 4):
        path = ROOT / f"gen{g}_atomic_ratios.txt"
        if not path.exists():
            print(f"Gen-{g}: missing {path.name}")
            continue
        classes = load_atomic_spectrum(path)
        fp = spectrum_fingerprint(classes)
        new = fp - cumulative if g > 1 else set()
        if g == 1:
            extra = "baseline"
        else:
            extra = f"{len(new):4d} NEW vs gens 1..{g - 1}"
        print(
            f"Gen-{g}: {len(classes):4d} listed classes, {len(fp):4d} unique values, {extra}"
        )
        if g > 1 and new:
            # Top new ratios by frequency in this gen
            new_classes = [c for c in classes if round(c.value, 8) in new]
            new_classes.sort(key=lambda c: -c.freq)
            print(f"       Top new (up to 5):")
            for c in new_classes[:5]:
                sm, err, cl = best_sm_match(c.value)
                print(
                    f"         val={c.value:.8f}  freq={c.freq:6d}  "
                    f"~{sm} ({cl}, err={err:.4f})  expr={c.expr[:50]}"
                )
        cumulative |= fp
    print(f"\nCumulative unique ratio values through Gen-4: {len(cumulative)}")
    print(
        "(Growth of NEW classes per step measures combinatorial enrichment;\n"
        " infinite recursion is not enumerated — only this finite snapshot.)"
    )
    print()


def compare_gen1_atomic_to_centrality() -> None:
    """Cross-check: do the 6 Gen-1 atomic LENGTH ratios relate to V ratios?"""
    print("=" * 72)
    print("GEN-1 ATOMIC LENGTH RATIOS (6 classes) vs centrality V_i/V(A)")
    print("=" * 72)
    classes = load_atomic_spectrum(ROOT / "gen1_atomic_ratios.txt")
    v = centrality_sq_sum_dist2()
    va = v["A"]
    print(f"{'Ratio L/r':<40} {'float':>12}  note")
    for c in classes:
        print(f"{c.expr:<40} {c.value:12.8f}  freq={c.freq}")
    print(f"\nCentrality ratios are separate emergent quantities (sum of d^2), not L/r.")
    print(f"Example: V(C2)/V(A) = {v['C2']/va:.6f}  vs atomic (2-sqrt3)/2 = {(2-S3)/2:.6f}")
    print()


def outcome_summary(v: dict[str, float]) -> None:
    va = v["A"]
    prereg = {
        "R1": v["C2"] / va,
        "R2": v["C4"] / va,
        "R3": v["X17"] / va,
        "R4": v["C1"] / va,
        "R5": v["C1"] / v["C2"],
    }
    matches = sum(1 for val in prereg.values() if best_sm_match(val)[2] == "MATCH")
    print("=" * 72)
    print("OUTCOME (pre-registered protocol §5)")
    print("=" * 72)
    print(f"Strong (>=3 SM matches at 2% with blind best-catalog): {matches}/5  -> ", end="")
    if matches >= 3:
        print("STRONG (catalog hit; not same as proving SM)")
    elif all(v["A"] < v["X17"] < v["C1"] < v["C2"] for _ in [0]):
        print("WEAK (hierarchy holds; ratios do not blindly match SM masses)")
    else:
        print("NEGATIVE / mixed")
    print(
        "\nNote: 'best SM match' is exploratory unless node–particle map is fixed in advance.\n"
        "Zero-parameter doctrine: V and ratios are geometry-derived; SM labels are external."
    )


def main() -> int:
    v = print_gen1_centrality()
    compare_gen1_atomic_to_centrality()
    analyze_generations()
    outcome_summary(v)
    return 0


if __name__ == "__main__":
    sys.exit(main())
