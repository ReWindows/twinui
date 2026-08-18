#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class TabletModeHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasConvertibleSlateModeChanged@TabletModeHelpers@@YA_NXZ
    bool HasConvertibleSlateModeChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletMode@TabletModeHelpers@@YA_NXZ
    bool IsTabletMode();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeAutoHideEnabled@TabletModeHelpers@@YA_NXZ
    bool IsTabletModeAutoHideEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z
    long QueryTabletMode(int *);
};
