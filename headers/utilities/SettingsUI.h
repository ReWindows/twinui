#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class SettingsUI {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHeaderInfo@SettingsUI@@QEAAXPEBG0_N@Z
    void AddHeaderInfo(unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddProgressUI@SettingsUI@@QEAAJPEBG@Z
    long AddProgressUI(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SettingsUI@@SAJPEAVAppInfo@@PEAUIPopupBase@@PEAPEAV1@@Z
    static long Create(AppInfo *, IPopupBase *, SettingsUI * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SettingsUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@SettingsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@SettingsUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@SettingsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshShowKeyFocusState@SettingsUI@@QEAAXXZ
    void RefreshShowKeyFocusState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SettingsUI@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultFocusableElement@SettingsUI@@QEAAXXZ
    void SetDefaultFocusableElement();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsUI@@QEAA@XZ
    SettingsUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@SettingsUI@@QEAAJPEAUIImmersiveMonitor@@@Z
    long Show(IImmersiveMonitor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsUI@@UEAA@XZ
    virtual ~SettingsUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SettingsUI@@IEAAJPEAVAppInfo@@PEAUIPopupWindow@@@Z
    long Initialize(AppInfo *, IPopupWindow *);
};
