#!/usr/bin/env python3
"""
Bridge experiments (L0-L1 + L2 tables): spectrum dynamical system, angles,
geometric operator eigenvalues, mirror×recursion, triangle coupling ratios.

Does NOT enumerate infinite generations. Verifies gen1/gen2 Rust exports + closed-form spectrumStep.
"""

from __future__ import annotations

import math
import re
import sys
from pathlib import Path

import numpy as np

ROOT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT))

from ariori_empirical_test import (  # noqa: E402
    PTS,
    R,
    SM_CATALOG,
    S3,
    RatioClass,
    best_sm_match,
    centrality_sq_sum_dist2,
    classify,
    load_atomic_spectrum,
    parse_ratio_expr,
    rel_err,
    spectrum_fingerprint,
)

GEN1_RATIOS = [
    (2 - S3) / 2,
    (S3 - 1) / 2,
    0.5,
    S3 - 1,
    S3 / 2,
    1.0,
]


def spectrum_step(r_vals: list[float], r1: list[float], ndigits: int = 10) -> list[float]:
    fp = spectrum_fingerprint([RatioClass("", v, 1) for v in r_vals], ndigits)
    products = [round(r * s, ndigits) for r in r_vals for s in r1]
    out = fp | spectrum_fingerprint([RatioClass("", v, 1) for v in products], ndigits)
    return sorted(out)


def spectrum_evolution(n: int, ndigits: int = 10) -> list[float]:
    r = sorted(spectrum_fingerprint([RatioClass("", v, 1) for v in GEN1_RATIOS], ndigits))
    for _ in range(n - 1):
        r = spectrum_step(r, GEN1_RATIOS, ndigits)
    return r


def experiment_spectrum_dynamics() -> None:
    print("=" * 72)
    print("EXPERIMENT 1: Spectrum dynamical system (gen1/gen2 files only)")
    print("=" * 72)
    r1_path = ROOT / "gen1_atomic_ratios.txt"
    r2_path = ROOT / "gen2_atomic_ratios.txt"
    r1 = spectrum_fingerprint(load_atomic_spectrum(r1_path))
    r2 = spectrum_fingerprint(load_atomic_spectrum(r2_path))
    print(f"Gen-1 file unique ratio classes: {len(r1)}  (Lean cert: 6)")
    print(f"Gen-2 file unique ratio classes: {len(r2)}  (Lean cert: 52)")
    print(f"Gen-1 subset of Gen-2: {r1 <= r2}")
    print(f"Gen-2 new vs Gen-1: {len(r2 - r1)} classes")
    print(f"Gen-1 == Gen-2: {r1 == r2}")
    for g in (1, 2):
        file_fp = r1 if g == 1 else r2
        model_fp = set(spectrum_evolution(g))
        overlap = len(file_fp & model_fp)
        print(
            f"Gen-{g}: minimal spectrumStep model size={len(model_fp):3d}  "
            f"overlap with file={overlap}/{len(file_fp)}"
        )
        if g == 2 and (r2 - model_fp):
            sample = sorted(r2 - model_fp)[:3]
            print(f"       sample file-only (not in R1* closure at step 2): {sample}")
    print("(Gen-3/4 exports ignored here; re-run Rust gen2 if counts disagree.)")
    print()


def dist(p, q):
    return math.hypot(p[0] - q[0], p[1] - q[1])


def cos_angle(p, q, r):
    v1 = (q[0] - p[0], q[1] - p[1])
    v2 = (r[0] - p[0], r[1] - p[1])
    dot = v1[0] * v2[0] + v1[1] * v2[1]
    n1 = math.hypot(*v1)
    n2 = math.hypot(*v2)
    if n1 == 0 or n2 == 0:
        return float("nan")
    return dot / (n1 * n2)


def gen1_neighbors():
    edges = [
        ("A", "X17"), ("X17", "B"), ("P5", "Bot"), ("P3", "Top"),
        ("C1", "X17"), ("X17", "C3"), ("C4", "C2"), ("C4", "A"),
        ("A", "C3"), ("C3", "P6"), ("C2", "A"), ("A", "C1"),
        ("C1", "P4"), ("M", "P5"), ("Bot", "N"), ("L", "C1"),
        ("C3", "N"), ("K", "P3"), ("Top", "L"), ("K", "C4"), ("C2", "M"),
    ]
    nbr: dict[str, set[str]] = {k: set() for k in PTS}
    for u, v in edges:
        nbr[u].add(v)
        nbr[v].add(u)
    return nbr


def experiment_angles() -> None:
    print("=" * 72)
    print("EXPERIMENT 2: Gen-1 angle spectrum (chemistry bridge)")
    print("=" * 72)
    nbr = gen1_neighbors()
    cos_set: set[float] = set()
    tet = -1 / 3
    tet_hits = []
    for n, p in PTS.items():
        ns = sorted(nbr[n])
        for i, j in enumerate(ns):
            for k in ns[i + 1 :]:
                c = cos_angle(p, PTS[j], PTS[k])
                if math.isfinite(c):
                    c = round(c, 8)
                    cos_set.add(c)
                    if abs(c - tet) < 1e-6:
                        tet_hits.append((n, j, k, c))
    print(f"Distinct cos(theta) values at Gen-1 nodes: {len(cos_set)}")
    print(f"Tetrahedral cos theta = -1/3 present: {any(abs(c - tet) < 1e-6 for c in cos_set)}")
    if tet_hits:
        print(f"  Example triples (vertex, n1, n2): {tet_hits[:5]}")
    for label, val in [("60deg", 0.5), ("90deg", 0.0), ("tetrahedral", tet)]:
        hit = min((abs(c - val) for c in cos_set), default=999)
        print(f"  nearest to cos({label})={val}: delta={hit:.6f}")
    print()


def build_laplacian_and_V():
    names = sorted(PTS.keys())
    idx = {n: i for i, n in enumerate(names)}
    n = len(names)
    a = np.zeros((n, n))
    edges = [
        ("A", "X17"), ("X17", "B"), ("P5", "Bot"), ("P3", "Top"),
        ("C1", "X17"), ("X17", "C3"), ("C4", "C2"), ("C4", "A"),
        ("A", "C3"), ("C3", "P6"), ("C2", "A"), ("A", "C1"),
        ("C1", "P4"), ("M", "P5"), ("Bot", "N"), ("L", "C1"),
        ("C3", "N"), ("K", "P3"), ("Top", "L"), ("K", "C4"), ("C2", "M"),
    ]
    for u, v in edges:
        i, j = idx[u], idx[v]
        a[i, j] = a[j, i] = 1
    deg = np.diag(a.sum(axis=1))
    lap = deg - a
    v = centrality_sq_sum_dist2()
    vvec = np.array([v[n] for n in names])
    return names, lap, vvec


def experiment_eigenvalues() -> None:
    print("=" * 72)
    print("EXPERIMENT 3: Eigenvalues of H_geom = Laplacian + diag(V)  (L2 table)")
    print("=" * 72)
    names, lap, vvec = build_laplacian_and_V()
    h = lap + np.diag(vvec)
    w = np.linalg.eigvalsh(h)
    w_sorted = np.sort(w)
    print("Eigenvalues (float):")
    for i, ev in enumerate(w_sorted):
        print(f"  lambda_{i} = {ev:12.6f}")
    pos = w_sorted[w_sorted > 1e-8]
    if len(pos) >= 2:
        for i in range(min(5, len(pos))):
            for j in range(i + 1, min(5, len(pos))):
                ratio = pos[j] / pos[i]
                sm, err, cl = best_sm_match(ratio)
                if err < 0.5:
                    print(f"  ratio lambda_{j}/lambda_{i} = {ratio:.4f}  ~{sm} ({cl}, err={err:.4f})")
    print()


def experiment_triangle_coupling() -> None:
    print("=" * 72)
    print("EXPERIMENT 4: Triangle geometric weights / kinetic scale (alpha bridge)")
    print("=" * 72)
    triangles = [
        ("A", "C1", "X17"),
        ("A", "C2", "C4"),
        ("A", "C3", "X17"),
    ]
    weights = []
    for a, b, c in triangles:
        la = dist(PTS[a], PTS[b]) / R
        lb = dist(PTS[b], PTS[c]) / R
        lc = dist(PTS[a], PTS[c]) / R
        w = la * lb * lc
        weights.append(w)
        print(f"  triangle {a}-{b}-{c}: weight ~ L^3/r^3 = {w:.6f}")
    total = sum(weights)
    alpha_inv = 137.035999084
    for i, (t, w) in enumerate(zip(triangles, weights)):
        g2 = (w / total) ** 2 if total else 0
        print(f"  normalized g^2 for {t}: {g2:.6f}  (1/137 = {1/alpha_inv:.6f})")
    print()


def experiment_growth() -> None:
    print("=" * 72)
    print("EXPERIMENT 5: Growth stats from gen1/gen2 full_data headers")
    print("=" * 72)
    for g in (1, 2):
        path = ROOT / f"gen{g}_full_data.txt"
        if not path.exists():
            continue
        text = path.read_text(encoding="utf-8", errors="replace")
        pts = re.search(r"Total Points:\s*(\d+)", text)
        edges = re.search(r"Total.*Segments:\s*(\d+)", text) or re.search(r"segments:\s*(\d+)", text, re.I)
        ratios = re.search(r"Unique Ratios:\s*(\d+)", text)
        p = int(pts.group(1)) if pts else -1
        e = int(edges.group(1)) if edges else -1
        ur = int(ratios.group(1)) if ratios else -1
        ep = e / p if p > 0 and e > 0 else float("nan")
        print(f"Gen-{g}: points={p}  edges~={e}  E/P={ep:.3f}  unique_ratios={ur}")
    print()


def main() -> int:
    experiment_spectrum_dynamics()
    experiment_angles()
    experiment_eigenvalues()
    experiment_triangle_coupling()
    experiment_growth()
    return 0


if __name__ == "__main__":
    sys.exit(main())
