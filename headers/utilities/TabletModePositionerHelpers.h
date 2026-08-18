#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class TabletModePositionerHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewsFromLayout@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAIPEAPEAUIApplicationView@@2@Z
    long GetApplicationViewsFromLayout(IAppLayout *, unsigned int *, IApplicationView * *, IApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewsInActivationOrder@TabletModePositionerHelpers@@YAJPEAUIAppLayout@@PEAPEAUIApplicationView@@1@Z
    long GetApplicationViewsInActivationOrder(IAppLayout *, IApplicationView * *, IApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTabletModePositioner@TabletModePositionerHelpers@@YAJPEAUIUnknown@@PEAPEAUITabletModePositioner@@@Z
    long GetTabletModePositioner(IUnknown *, ITabletModePositioner * *);
};
