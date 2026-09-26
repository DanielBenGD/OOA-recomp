# Bring-up status

## Baseline

| Item | Value |
|---|---:|
| Title ID | `58410968` |
| ReXGlue | `v0.8.0` |
| XEX SHA-256 | `1e97c08af72dd19f674a03da1b7dc15c8825ec2283f985d71dcc92b97b6775f0` |
| Image base | `0x82000000` |
| Image size | `0x00B20000` |
| Entry point | `0x8227E3D8` |
| Code range | `0x820E0000–0x824C9ED4` |
| Recompiled functions | `10,841` |
| Unsupported emitted opcodes | `0` |

## Verified

- ReXGlue code generation completes without unresolved-call or unsupported-opcode errors.
- The generated project compiles and links on Linux and Windows x86-64 in Release mode.
- Runtime creates a Vulkan device and swapchain.
- Runtime mounts the user-supplied game directory and loads `game:\\default.xex`.
- Runtime patches 79 XAM and 134 Xbox kernel imports.
- Function dispatcher registers all 10,841 generated functions with zero duplicates or rejects.
- The guest reaches title startup and begins graphics pipeline creation.

## Not yet verified

- Correct visible rendering
- Menu input
- Audio output
- Save/profile behavior
- Race gameplay
- Windows runtime on physical hardware
- Deterministic behavior against original hardware

## Next work

1. Capture a longer trace on a real Vulkan GPU and identify the first title stall.
2. Add per-title XAM/kernel shims only where traces prove they are needed.
3. Validate shader translation and render-target behavior.
4. Bring up controller input and the original menu.
5. Add reproducible smoke tests and a compatibility matrix.
