#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace DirectUI {
class ItemList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacent@ItemList@DirectUI@@UEAAPEAVElement@2@PEAV32@HPEBUNavReference@2@K@Z
    virtual ::DirectUI::Element * GetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemList@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
};
} // namespace DirectUI
