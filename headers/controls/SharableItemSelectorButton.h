#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class SharableItemSelectorButton {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SharableItemSelectorButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@SharableItemSelectorButton@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SharableItemSelectorButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SharableItemSelectorButton@@SAJXZ
    static long Register();
};
