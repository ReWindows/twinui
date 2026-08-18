#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class GroupNavigationBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@GroupNavigationBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAdjacent@GroupNavigationBehavior@@UEAAJPEAVElement@DirectUI@@HPEBUNavReference@3@KPEAPEAV23@@Z
    virtual long OnGetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long, ::DirectUI::Element * *);
};
