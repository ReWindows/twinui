#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class SettingsButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SettingsButton@@SAJPEBG0PEAUIPopupBase@@PEAUICommandInvoker@@PEAVElement@DirectUI@@PEAKPEAPEAV45@@Z
    static long Create(unsigned short const *, unsigned short const *, IPopupBase *, ICommandInvoker *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SettingsButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@SettingsButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SettingsButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SettingsButton@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsButton@@UEAA@XZ
    virtual ~SettingsButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitItem@SettingsButton@@AEAAJPEBG0PEAUIPopupBase@@PEAUICommandInvoker@@@Z
    long _InitItem(unsigned short const *, unsigned short const *, IPopupBase *, ICommandInvoker *);
};
