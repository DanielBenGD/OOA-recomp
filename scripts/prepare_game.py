#!/usr/bin/env python3
"""Prepare a legal OutRun Online Arcade dump for the recomp runtime.

The retail menu projects are zlib-compressed .gpz files. The game first probes
for unpacked .gpu siblings, but ReXGlue's plain host VFS does not provide the
original title's transparent decompression layer. Materialize those .gpu files
locally so the guest reads the expected bytes instead of compressed data.
"""

from __future__ import annotations

import argparse
import os
from pathlib import Path
import tempfile
import zlib


def inflate_gpz(path: Path, *, force: bool) -> tuple[str, int]:
    output = path.with_suffix(".gpu")

    compressed = path.read_bytes()
    try:
        inflated = zlib.decompress(compressed)
    except zlib.error as exc:
        raise RuntimeError(f"{path}: invalid zlib GPZ stream: {exc}") from exc

    # The stream expands to a big-endian 32-bit payload length followed by the
    # GPU data. The original title's transparent decompression layer consumes
    # this prefix. Exposing it through the host VFS shifts the entire project by
    # four bytes, producing the horizontal/scanline texture corruption visible
    # in the menu.
    if len(inflated) < 4:
        raise RuntimeError(f"{path}: inflated GPZ stream is missing its size prefix")
    expected_size = int.from_bytes(inflated[:4], "big")
    payload = inflated[4:]
    if expected_size != len(payload):
        raise RuntimeError(
            f"{path}: GPZ size prefix says {expected_size} bytes, got {len(payload)}"
        )

    state = "created"
    if output.exists() and not force:
        existing = output.read_bytes()
        if existing == payload:
            return "exists", len(payload)
        # Repair files produced by older versions of this script, which wrote
        # the four-byte decompressed-size prefix into the .gpu file. Those
        # files can render 2D textures after partial runtime workarounds, but
        # their shifted model descriptors produce invalid 3D pointers.
        if existing == inflated:
            state = "repaired"
        else:
            raise RuntimeError(
                f"{output}: existing GPU project does not match its GPZ payload; "
                "use --force only if this file should be replaced"
            )

    output.parent.mkdir(parents=True, exist_ok=True)
    fd, temporary_name = tempfile.mkstemp(prefix=output.name + ".", dir=output.parent)
    try:
        with os.fdopen(fd, "wb") as temporary:
            temporary.write(payload)
            temporary.flush()
            os.fsync(temporary.fileno())
        os.replace(temporary_name, output)
    finally:
        if os.path.exists(temporary_name):
            os.unlink(temporary_name)
    return state, len(payload)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("game_root", nargs="?", default="game", type=Path)
    parser.add_argument("--force", action="store_true", help="replace existing .gpu files")
    args = parser.parse_args()

    root = args.game_root.resolve()
    if not (root / "default.xex").is_file():
        parser.error(f"{root} does not contain default.xex")

    gpz_files = sorted(root.rglob("*.gpz"))
    if not gpz_files:
        parser.error(f"no .gpz files found below {root}")

    created = repaired = skipped = total_bytes = 0
    for gpz in gpz_files:
        state, size = inflate_gpz(gpz, force=args.force)
        total_bytes += size
        if state == "created":
            created += 1
            print(f"created {gpz.with_suffix('.gpu').relative_to(root)} ({size} bytes)")
        elif state == "repaired":
            repaired += 1
            print(f"repaired {gpz.with_suffix('.gpu').relative_to(root)} ({size} bytes)")
        else:
            skipped += 1

    print(
        f"Prepared {created} GPU project(s); repaired {repaired}; "
        f"{skipped} already valid; {total_bytes} bytes ready"
    )
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
