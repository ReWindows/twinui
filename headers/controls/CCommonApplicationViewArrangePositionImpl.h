#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CCommonApplicationViewArrangePositionImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangedState@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE@@@Z
    virtual long GetArrangedState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangementBasedViewStateOptions@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAW4ARRANGEMENT_BASED_VIEW_STATE_OPTIONS@@@Z
    virtual long GetArrangementBasedViewStateOptions(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAUtagRECT@@@Z
    virtual long GetRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSnapOptions@CCommonApplicationViewArrangePositionImpl@@UEAAJPEAK@Z
    virtual long GetSnapOptions(unsigned long *);
};
