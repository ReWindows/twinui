#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class TabJumpBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@TabJumpBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAdjacent@TabJumpBehavior@@UEAAJPEAVElement@DirectUI@@HPEBUNavReference@3@KPEAPEAV23@@Z
    virtual long OnGetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long, ::DirectUI::Element * *);
};
