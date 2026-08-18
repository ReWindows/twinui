#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class AccountsSettingsButton {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AccountsSettingsButton@@QEAA@XZ
    AccountsSettingsButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AccountsSettingsButton@@SAJPEBG0U_tagICON_DETAILS@@0W4tagACCOUNTSTATE@@W4ACCOUNT_ACTION@@W4ACCOUNT_CMD_TYPE@@PEAVAppInfo@@IPEAUIPopupBase@@PEAUICommandInvoker@@PEAVElement@DirectUI@@PEAKPEAPEAV9DirectUI@@@Z
    static long Create(unsigned short const *, unsigned short const *, _tagICON_DETAILS, unsigned short const *, int, int, int, AppInfo *, unsigned int, IPopupBase *, ICommandInvoker *, ::DirectUI::Element *, unsigned long *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AccountsSettingsButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AccountsSettingsButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AccountsSettingsButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AccountsSettingsButton@@SAJXZ
    static long Register();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountsSettingsButton@@UEAA@XZ
    virtual ~AccountsSettingsButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitItem@AccountsSettingsButton@@AEAAJPEBG0U_tagICON_DETAILS@@0W4tagACCOUNTSTATE@@W4ACCOUNT_ACTION@@W4ACCOUNT_CMD_TYPE@@PEAVAppInfo@@IPEAUIPopupBase@@PEAUICommandInvoker@@@Z
    long _InitItem(unsigned short const *, unsigned short const *, _tagICON_DETAILS, unsigned short const *, int, int, int, AppInfo *, unsigned int, IPopupBase *, ICommandInvoker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateIcon@AccountsSettingsButton@@AEAAJU_tagICON_DETAILS@@@Z
    long _PopulateIcon(_tagICON_DETAILS);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIcon@AccountsSettingsButton@@AEAAJXZ
    long _UpdateIcon();
};
