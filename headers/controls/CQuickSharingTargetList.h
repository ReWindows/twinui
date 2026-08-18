#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CQuickSharingTargetList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMruDataList@CQuickSharingTargetList@@QEBAJPEAPEAUIMruDataList2@@@Z
    long GetMruDataList(IMruDataList2* *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryTargets@CQuickSharingTargetList@@QEAAJPEAUICondition@@@Z
    long QueryTargets(ICondition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTarget@CQuickSharingTargetList@@QEAAJPEAVCQuickLinkInfoPriv@@W4UPDATETARTGET@@PEAW4ShareSqmQuickLinkInfo@@@Z
    long UpdateTarget(CQuickLinkInfoPriv *, int, int *);
};
