#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class BackStack {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInAppBackOnTarget@BackStack@@QEAAJW4SHELL_TARGET_IDENTIFIER@@@Z
    long HandleInAppBackOnTarget(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleLayoutChanged@BackStack@@QEAAJPEAUIAppLayoutOperation@@PEAUITabletModePositioner@@@Z
    long HandleLayoutChanged(IAppLayoutOperation *, ITabletModePositioner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTargetChanged@BackStack@@QEAAJPEAUIUnknown@@W4SHELL_TARGET_IDENTIFIER@@PEAUIApplicationView@@@Z
    long HandleTargetChanged(IUnknown *, int, IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopBackActionResult@BackStack@@QEAAJPEAUIApplicationView@@PEAUITabletModePositioner@@PEAW4Action@@PEAPEAUIAppLayoutOperation@@@Z
    long PopBackActionResult(IApplicationView *, ITabletModePositioner *, int *, IAppLayoutOperation * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLayoutChangeStackEntry@BackStack@@AEAAJPEAUIAppLayoutOperation@@@Z
    long AddLayoutChangeStackEntry(IAppLayoutOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTargetEntry@BackStack@@AEAAJW4StackEntryType@@@Z
    long AddTargetEntry(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyLayoutOnTargetChangedToLauncher@BackStack@@AEAAJPEAUIUnknown@@@Z
    long ApplyLayoutOnTargetChangedToLauncher(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DedupeApplicationViewsBasedOnTopMostLayout@BackStack@@AEAAJXZ
    long DedupeApplicationViewsBasedOnTopMostLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvictMostRecentlyActivatedAppHelper@BackStack@@AEAAJPEAUITabletModePositioner@@PEAUIAppLayout@@PEAPEAUIAppLayoutOperation@@@Z
    long EvictMostRecentlyActivatedAppHelper(ITabletModePositioner *, IAppLayout *, IAppLayoutOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlattenPreviousLayouts@BackStack@@AEAAJPEAUITabletModePositioner@@@Z
    long FlattenPreviousLayouts(ITabletModePositioner *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAppFullScreenAndGetLayoutHelper@BackStack@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@W4BackOperationFlags@@PEAPEAUIAppLayout@@@Z
    long MakeAppFullScreenAndGetLayoutHelper(ITabletModePositioner *, IApplicationView *, int, IAppLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAppFullScreenHelper@BackStack@@AEAAJPEAUITabletModePositioner@@PEAUIApplicationView@@W4BackOperationFlags@@PEAPEAUIAppLayoutOperation@@@Z
    long MakeAppFullScreenHelper(ITabletModePositioner *, IApplicationView *, int, IAppLayoutOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackStackUpdated@BackStack@@AEAAJXZ
    long OnBackStackUpdated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToCustomLayoutHelper@BackStack@@AEAAJPEAUITabletModePositioner@@PEAUIAppLayout@@W4SwitchToCustomLayoutFlags@@PEAPEAUIAppLayoutOperation@@@Z
    long SwitchToCustomLayoutHelper(ITabletModePositioner *, IAppLayout *, int, IAppLayoutOperation * *);
};
