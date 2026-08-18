#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ScreenTint {
class ScreenTintHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsActive@ScreenTintHelper@ScreenTint@@SA_NXZ
    static bool IsActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveTint@ScreenTintHelper@ScreenTint@@SAXXZ
    static void UpdateActiveTint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsActive@ScreenTintHelper@ScreenTint@@SAX_N@Z
    static void UpdateTransferSettingsActive(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsIntensity@ScreenTintHelper@ScreenTint@@SAXI@Z
    static void UpdateTransferSettingsIntensity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransferSettingsTintType@ScreenTintHelper@ScreenTint@@SAXI@Z
    static void UpdateTransferSettingsTintType(unsigned int);
};
} // namespace ScreenTint
