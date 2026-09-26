#!/usr/bin/env bash
set -euo pipefail
sdk_prefix="${REXSDK_PREFIX:-}"
args=()
if [[ -n "$sdk_prefix" ]]; then
  args+=("-DCMAKE_PREFIX_PATH=$sdk_prefix")
fi
cmake --preset linux-amd64-release "${args[@]}"
cmake --build --preset linux-amd64-release
