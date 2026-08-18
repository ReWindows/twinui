#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::ItemList (likely; classinfo-template-instantiation).
class TabbableItemList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@TabbableItemList@@UEAAPEAVElement@DirectUI@@PEAV23@HPEBUNavReference@3@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TabbableItemList@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@TabbableItemList@@SAJXZ
    static long Register();
};
