#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class AccountActionsUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AccountActionsUI@@QEAA@XZ
    AccountActionsUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AccountActionsUI@@SAJPEAVAppInfo@@W4ACCOUNT_CMD_TYPE@@PEAUIPopupBase@@IPEBG3W4ACCOUNT_ACTION@@PEAPEAV1@@Z
    static long Create(AppInfo *, int, IPopupBase *, unsigned int, unsigned short const *, unsigned short const *, int, AccountActionsUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@AccountActionsUI@@QEAAJXZ
    long Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AccountActionsUI@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AccountActionsUI@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@AccountActionsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@AccountActionsUI@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@AccountActionsUI@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedPropertyChanged@AccountActionsUI@@UEAAXPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual void OnListenedPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@AccountActionsUI@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnUnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AccountActionsUI@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@AccountActionsUI@@QEAAJXZ
    long Show();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountActionsUI@@UEAA@XZ
    virtual ~AccountActionsUI();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AccountActionsUI@@IEAAJPEAVAppInfo@@W4ACCOUNT_CMD_TYPE@@PEAUIPopupWindow@@IPEBG3W4ACCOUNT_ACTION@@@Z
    long Initialize(AppInfo *, int, IPopupWindow *, unsigned int, unsigned short const *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@AccountActionsUI@@MEAAXXZ
    virtual void OnDestroy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DeleteCredential@AccountActionsUI@@CAJPEAUHWND__@@W4ACCOUNT_CMD_TYPE@@PEBG2@Z
    static long _DeleteCredential(HWND__*, int, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableActionButton@AccountActionsUI@@AEAAJPEBGPEAPEAVElement@DirectUI@@@Z
    long _EnableActionButton(unsigned short const *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableActionButtons@AccountActionsUI@@AEAAJW4ACCOUNT_ACTION@@@Z
    long _EnableActionButtons(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformAction@AccountActionsUI@@AEAAXW4ACCOUNT_ACTION@@@Z
    void _PerformAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshShowKeyFocusState@AccountActionsUI@@AEAAX_N@Z
    void _RefreshShowKeyFocusState(bool);
};
