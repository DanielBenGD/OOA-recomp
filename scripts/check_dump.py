#!/usr/bin/env python3
"""Validate the local user-supplied XEX without distributing it."""
from hashlib import sha256
from pathlib import Path
import sys

EXPECTED = "1e97c08af72dd19f674a03da1b7dc15c8825ec2283f985d71dcc92b97b6775f0"
path = Path(__file__).resolve().parents[1] / "game" / "default.xex"
if not path.is_file():
    print(f"Missing {path}", file=sys.stderr)
    print("Extract your legally obtained game dump into game/ first.", file=sys.stderr)
    raise SystemExit(2)
actual = sha256(path.read_bytes()).hexdigest()
if actual != EXPECTED:
    print(f"Unsupported default.xex SHA-256: {actual}", file=sys.stderr)
    print(f"Expected: {EXPECTED}", file=sys.stderr)
    raise SystemExit(1)
print(f"OK: {path.name} matches {EXPECTED}")
