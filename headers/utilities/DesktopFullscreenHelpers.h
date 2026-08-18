#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class DesktopFullscreenHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidDesktopFullscreenWindow@DesktopFullscreenHelpers@@YA_NPEAUHWND__@@@Z
    bool IsValidDesktopFullscreenWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOnMonitor@DesktopFullscreenHelpers@@YA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z
    bool IsWindowOnMonitor(HWND__*, IImmersiveMonitor *);
};
