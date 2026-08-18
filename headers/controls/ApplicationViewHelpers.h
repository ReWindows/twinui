#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class ApplicationViewHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z
    long GetApplicationFromView(IApplicationView *, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewForApplication@ApplicationViewHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveApplication@@PEAPEAUIApplicationView@@@Z
    long GetViewForApplication(IUnknown *, IImmersiveApplication *, IApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z
    HWND__* GetWindowForView(IApplicationView *);
};
