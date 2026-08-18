#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CCommonApplicationViewOcclusionPositionImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangedState@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z
    virtual long GetArrangedState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangementBasedViewStateOptions@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z
    virtual long GetArrangementBasedViewStateOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOcclusionBasedViewStateOptions@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAW4OCCLUSION_BASED_VIEW_STATE_OPTIONS@@@Z
    virtual long GetOcclusionBasedViewStateOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAUtagRECT@@@Z
    virtual long GetRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRestoreRect@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAUtagRECT@@@Z
    virtual long GetRestoreRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnapOptions@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAK@Z
    virtual long GetSnapOptions(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowPlacement@CCommonApplicationViewOcclusionPositionImpl@@UEAAJPEAU_OCCLUSION_WINDOW_INFORMATION@@@Z
    virtual long GetWindowPlacement(_OCCLUSION_WINDOW_INFORMATION *);
};
