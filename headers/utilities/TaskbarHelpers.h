#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class TaskbarHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUIUnknown@@PEAUIImmersiveMonitor@@@Z
    HWND__* GetTrayWindowForMonitor(IUnknown *, IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z
    HWND__* GetTrayWindowForMonitor(HMONITOR__*);
};
