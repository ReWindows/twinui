#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class ImmersiveOwnedWindowHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumImmersiveComponentOwnedWindows@ImmersiveOwnedWindowHelper@@YAHPEAUHWND__@@_J@Z
    int EnumImmersiveComponentOwnedWindows(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionOwnedWindows@ImmersiveOwnedWindowHelper@@YAJPEAUHWND__@@QEBUtagRECT@@@Z
    long RepositionOwnedWindows(HWND__*, tagRECT const * const);
};
