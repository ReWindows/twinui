#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CLauncherSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScaleFactorForPart@CLauncherSettings@@QEAA?AW4DEVICE_SCALE_FACTOR@@W4ScalablePart@@@Z
    int GetScaleFactorForPart(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTileColorTheme@CLauncherSettings@@QEBA?AW4TILE_THEME_SELECTOR@@XZ
    int GetTileColorTheme() const;
};
