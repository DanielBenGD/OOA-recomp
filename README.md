# OutRun Online Arcade — static recompilation

Experimental static recompilation of the Xbox 360 release of **OutRun Online
Arcade** (Title ID `58410968`) using [ReXGlue](https://github.com/rexglue/rexglue-sdk).

> **Very early bring-up.** The generated PowerPC-to-C++ translation compiles
> and reaches title startup, but this is not yet a playable port.

## Current status

- ReXGlue SDK: **v0.8.0**
- XEX image base: `0x82000000`
- Guest entry point: `0x8227E3D8`
- Guest code range: `0x820E0000–0x824C9ED4` (`4,103,892` bytes)
- Generated functions: **10,843**
- Unsupported PPC opcodes emitted by codegen: **0**
- Linux x86-64 release build: **passing**
- Windows x86-64 release build: **passing**
- Runtime smoke test: XEX loads, all 10,843 functions register, Xbox kernel/XAM
  imports are patched, and title startup completes on Windows 10 / AMD Vega 8.
- Rendering: **first original title/menu frame reached**. The previous corrupt
  textures and rejected draws were traced to retail zlib-compressed `.gpz`
  projects being exposed to the guest as raw `.gpu` data. Dump preparation now
  materializes the expected unpacked `.gpu` siblings; Windows validation is pending.
- Gameplay: **not working yet**.

See [docs/STATUS.md](docs/STATUS.md) for the bring-up log and next tasks.

## What is not included

This repository contains generated/native source code only. It intentionally
contains **no XEX, STFS package, ROM, audio, textures, stages, or other original
game assets**. You must supply your own legally obtained dump.

## Required game files

Place an extracted game directory in `game/`, with `game/default.xex` at its
root. The expected executable hash is documented in [game/README.md](game/README.md).
Then prepare the retail compressed GPU projects:

```bash
python3 scripts/prepare_game.py game
```

This creates local `.gpu` files beside the dump's `.gpz` files. They remain
untracked and must never be committed or redistributed.

## Regenerate the C++ translation

Install ReXGlue v0.8.0 and put `rexglue` on `PATH`, then run:

```bash
python3 scripts/check_dump.py
rexglue codegen outrun_online_arcade_recomp_manifest.toml
```

The generated source is intentionally committed so contributors can inspect
and build the project without redistributing the game executable.

## Build

Requirements:

- ReXGlue SDK v0.8.0 with
  `patches/rexglue-v0.8.0-ooa-runtime.patch` applied, either installed or
  supplied as a source tree
- CMake 3.25+
- Ninja
- Clang 20+
- Vulkan development/runtime files on Linux

### Linux

With an installed SDK:

```bash
cmake --preset linux-amd64-release -DCMAKE_PREFIX_PATH=/path/to/rexglue-sdk
cmake --build --preset linux-amd64-release
```

Or with an SDK source checkout:

```bash
cmake --preset linux-amd64-release -DREXSDK_DIR=/path/to/rexglue-sdk
cmake --build --preset linux-amd64-release
```

### Windows

Packaged Windows builds automatically use a `game` directory beside the executable when no `--game_data_root` argument is supplied.

Use an LLVM/Clang 20+ developer shell:

```powershell
cmake --preset win-amd64-release -DREXSDK_DIR=C:\path\to\rexglue-sdk
cmake --build --preset win-amd64-release
```

## Run

```bash
./out/build/linux-amd64-release/outrun_online_arcade_recomp \
  --game_data_root="$PWD/game"
```

## Keyboard controls

Keyboard controller emulation is enabled by default. The initial bindings are:

- Arrow keys: menu/D-pad
- `WASD`: left stick / steering
- `Space`: A / accelerate
- `Shift`: B / brake
- `R`: X
- `E`: Y
- `Esc`: Start
- `Tab`: Back
- Left/right mouse buttons: right/left trigger

Bindings can be changed in ReXGlue's Input settings or through the corresponding
`keybind_*` options. Pass `--mnk_mode=false` to disable keyboard emulation.

## Project policy

- Do not upload original game files, decrypted assets, or package contents.
- Do not request or provide download links for copyrighted game data.
- Keep generated code tied to the documented executable hash.
- Prefer small, reproducible fixes with runtime logs and clear addresses.

This is an independent preservation/research project. It is not affiliated
with Sega, Microsoft, Sumo Digital, or ReXGlue.
