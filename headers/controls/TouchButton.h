#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace DirectUI {
class TouchButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultAction@TouchButton@DirectUI@@UEAAJXZ
    virtual long DefaultAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireClickEvent@TouchButton@DirectUI@@UEAAXIIW4ClickDevice@12@PEAUtagPOINT@@@Z
    virtual void FireClickEvent(unsigned int, unsigned int, int, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireRightClickEvent@TouchButton@DirectUI@@UEAAXIPEAUtagPOINT@@@Z
    virtual void FireRightClickEvent(unsigned int, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@TouchButton@DirectUI@@UEAAPEAUIClassInfo@2@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundColorRef@TouchButton@DirectUI@@UEAAJPEAK@Z
    virtual long GetForegroundColorRef(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveFocusRectOffsets@TouchButton@DirectUI@@UEAAXPEAUtagRECT@@@Z
    virtual void GetImmersiveFocusRectOffsets(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@TouchButton@DirectUI@@UEAAXPEAUEvent@2@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@TouchButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@TouchButton@DirectUI@@UEAAXPEAUInputEvent@2@@Z
    virtual void OnInput(::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TouchButton@DirectUI@@UEAAXPEBUPropertyInfo@2@HPEAVValue@2@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@TouchButton@DirectUI@@UEAAXPEAVElement@2@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
};
} // namespace DirectUI
