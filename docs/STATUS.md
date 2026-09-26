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
| Recompiled functions | `10,843` |
| Unsupported emitted opcodes | `0` |

## Verified

- ReXGlue code generation completes without unresolved-call or unsupported-opcode errors.
- The generated project compiles and links on Linux and Windows x86-64 in Release mode.
- Runtime creates a Vulkan device and swapchain.
- Runtime mounts the user-supplied game directory and loads `game:\\default.xex`.
- Runtime patches 79 XAM and 134 Xbox kernel imports.
- Function dispatcher registers the generated functions with zero duplicates or rejects.
- The guest reaches title startup and begins graphics pipeline creation.
- Windows 10 on AMD Vega 8 reaches and presents an original title/menu frame.
- The dump-preparation tool inflates retail zlib `.gpz` projects into the `.gpu`
  files expected by the guest filesystem.

## Not yet verified

- Correct textures and persistent visible rendering
- Menu input
- Audio output
- Save/profile behavior
- Race gameplay
- Deterministic behavior against original hardware

## Next work

1. Validate the unpacked `.gpu` preparation on Windows D3D12 with a fresh cache.
2. Confirm the invalid vertex-fetch and corrupted-texture errors are gone.
3. Validate texture tiling, endian conversion, pitch, and render-target behavior.
4. Bring up controller input and persistent original-menu rendering.
5. Add reproducible smoke tests and a compatibility matrix.

## Windows startup crash workaround

A Windows 10 / AMD Vega 8 test reported `0xC0000005` at host RVA `0x4D570`.
The linker map resolves this to guest function `sub_820EC138` (guest
`0x820EC138`), specifically the translated `lwz r11,0(r3)` after reading the
renderer-service pointer at guest global `0x8265CC40`. The pointer was null
during startup. The generated translation now skips that cache entry until the
service exists, rather than dereferencing guest address zero.

A subsequent run reached the guest dispatcher and reported an unregistered
indirect target at `0x824786B8`. This was a real six-instruction PPC thunk
between functions `0x82478698` and `0x824786D0`, not a call to garbage. It is
now declared in `[entrypoint.functions]` with a bounded size of `0x18` and is
generated as `sub_824786B8`.

The next runtime trace reached another valid unregistered indirect target at
`0x82193BF0`. Its bytes decode to a four-instruction tail-call thunk between
`sub_82193BE0` and `sub_82193C00`; it loads guest address `0x825A5CE0` and
tail-calls `sub_8219FB08`. The bounded `0x10` function is now generated as
`sub_82193BF0`.

## First rendered frame

ReXGlue v0.8.0's `NtAllocateVirtualMemory_entry` used the guest pointer address
as `RegionSize` instead of reading the value stored at that pointer. The local
runtime patch corrects the allocation size. A null guard in `sub_820F3148`
prevents an optional missing project from dereferencing guest address zero.

The first rendering workaround incorrectly opened retail `.gpz` files when the
guest requested `.gpu`. The `.gpz` files are zlib streams (for example,
`NewMM.gpz` expands from 1,379,777 to 6,291,460 bytes), so this fed compressed
bytes to the menu renderer as GPU project data. That explains both the corrupted
first frame and the nonsensical vertex descriptors. `scripts/prepare_game.py`
now inflates each user-supplied `.gpz` beside the dump as `.gpu`; the unsafe VFS
fallback has been removed from the runtime patch.

With those changes, the Windows D3D12 build presents an original title/menu
frame for the first time. The frame has corrupted textures and later becomes
black. A 3.1 MB trace contains no fatal CPU/runtime error, but records 10,907
rejected draws. Every rejection reports vertex fetch constant 0 as either
`8A004802 160E8086` or `8A004802 16480086`, followed by
`PM4_DRAW_INDX(4, 6, 2): Failed in backend`. This is the current graphics
blocker; forcing those descriptors through validation would be unsafe.
