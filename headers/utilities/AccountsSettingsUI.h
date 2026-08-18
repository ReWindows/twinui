#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class AccountsSettingsUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AccountsSettingsUI@@QEAA@XZ
    AccountsSettingsUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAccountCommandLink@AccountsSettingsUI@@QEAAJPEAVElement@DirectUI@@@Z
    long AddAccountCommandLink(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDescription@AccountsSettingsUI@@QEAAJPEBG@Z
    long AddDescription(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddErrorHeaderInfo@AccountsSettingsUI@@QEAAXK@Z
    void AddErrorHeaderInfo(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProgressUI@AccountsSettingsUI@@QEAAJPEBG_N@Z
    long AddProgressUI(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AccountsSettingsUI@@SAJPEAVAppInfo@@PEAUIPopupBase@@_NPEAPEAV1@@Z
    static long Create(AppInfo *, IPopupBase *, bool, AccountsSettingsUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AccountsSettingsUI@@QEAAJXZ
    long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AccountsSettingsUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@AccountsSettingsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@AccountsSettingsUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@AccountsSettingsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshShowKeyFocusState@AccountsSettingsUI@@QEAAXXZ
    void RefreshShowKeyFocusState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AccountsSettingsUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultFocusableElement@AccountsSettingsUI@@QEAAXXZ
    void SetDefaultFocusableElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@AccountsSettingsUI@@QEAAJPEAUIImmersiveMonitor@@@Z
    long Show(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProviderAddAccountLink@AccountsSettingsUI@@QEAAJPEAPEAVElement@DirectUI@@@Z
    long ShowProviderAddAccountLink(::DirectUI::Element * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountsSettingsUI@@UEAA@XZ
    virtual ~AccountsSettingsUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AccountsSettingsUI@@IEAAJPEAVAppInfo@@PEAUIPopupWindow@@_NPEBG@Z
    long Initialize(AppInfo *, IPopupWindow *, bool, unsigned short const *);
};
