#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace DirectUI {
class TouchHyperLink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchHyperLink@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchHyperLink@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
};
} // namespace DirectUI
