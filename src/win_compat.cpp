// Compatibility helpers missing from the Windows Universal CRT.
#if defined(_WIN32)
#include <cmath>
#include <limits>

extern "C" float roundevenf(float value) noexcept {
  if (!std::isfinite(value) || std::fabs(value) >= 0x1p23f) {
    return value;
  }

  const float lower = std::floor(value);
  const float fraction = value - lower;
  float result;
  if (fraction < 0.5f) {
    result = lower;
  } else if (fraction > 0.5f) {
    result = lower + 1.0f;
  } else {
    result = (std::fmod(lower, 2.0f) == 0.0f) ? lower : lower + 1.0f;
  }
  return result == 0.0f ? std::copysign(0.0f, value) : result;
}
#endif
