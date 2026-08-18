#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace ColorFiltering {
class Filters {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConvertToPercent@Filters@ColorFiltering@@YAMK@Z
    float _ConvertToPercent(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppearance@Filters@ColorFiltering@@YA?AU_MAGN_COLOR_TRANSFORM@@KAEBU3@000000000@Z
    _MAGN_COLOR_TRANSFORM _GetAppearance(unsigned long, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryLerp@Filters@ColorFiltering@@YA_NKKKAEBU_MAGN_COLOR_TRANSFORM@@0AEAU3@@Z
    bool _TryLerp(unsigned long, unsigned long, unsigned long, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
};
} // namespace ColorFiltering
