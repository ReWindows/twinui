#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace DirectUI {
class Selector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@Selector@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@Selector@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@Selector@DirectUI@@UEAAXPEAVElement@2@0@Z
    virtual void OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelection@Selector@DirectUI@@UEAAJPEAVElement@2@@Z
    virtual long SetSelection(::DirectUI::Element *);
};
} // namespace DirectUI
