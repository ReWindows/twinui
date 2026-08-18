#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace ColorFiltering {
class ColorFilterHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@ColorFilterHelper@ColorFiltering@@SA_NXZ
    static bool IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveFilter@ColorFilterHelper@ColorFiltering@@SAXXZ
    static void UpdateActiveFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsActive@ColorFilterHelper@ColorFiltering@@SAX_N@Z
    static void UpdateTransferSettingsActive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsFilterType@ColorFilterHelper@ColorFiltering@@SAXK@Z
    static void UpdateTransferSettingsFilterType(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsGain@ColorFilterHelper@ColorFiltering@@SAXK@Z
    static void UpdateTransferSettingsGain(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsIntensity@ColorFilterHelper@ColorFiltering@@SAXK@Z
    static void UpdateTransferSettingsIntensity(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFilters@ColorFilterHelper@ColorFiltering@@CAXAEBU_MAGN_COLOR_TRANSFORM@@0AEAU3@@Z
    static void AddFilters(_MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateAdaptationFilter@ColorFilterHelper@ColorFiltering@@CAXAEBU_MAGN_COLOR_TRANSFORM@@0AEAU3@@Z
    static void GenerateAdaptationFilter(_MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultiplyFilters@ColorFilterHelper@ColorFiltering@@CAXAEBU_MAGN_COLOR_TRANSFORM@@0AEAU3@@Z
    static void MultiplyFilters(_MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubtractFilters@ColorFilterHelper@ColorFiltering@@CAXAEBU_MAGN_COLOR_TRANSFORM@@0AEAU3@@Z
    static void SubtractFilters(_MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Transpose@ColorFilterHelper@ColorFiltering@@CAXAEBU_MAGN_COLOR_TRANSFORM@@AEAU3@@Z
    static void Transpose(_MAGN_COLOR_TRANSFORM const &, _MAGN_COLOR_TRANSFORM &);
};
} // namespace ColorFiltering
