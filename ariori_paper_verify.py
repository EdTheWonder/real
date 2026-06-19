#!/usr/bin/env python3
"""Deprecated: paper mapping tests live in Lean (ArioriFull.lean, `paper_*`)."""

import sys

print("Paper mapping verification is machine-checked in Lean.")
print("  cd ariori-lean && lake build && .\\.lake\\build\\bin\\ariori.exe")
print("  Theorem: paper_mapping_certificate")
sys.exit(0)
