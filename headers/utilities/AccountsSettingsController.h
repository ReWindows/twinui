#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class AccountsSettingsController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AccountsSettingsController@@SAJPEAVAccountsSettingsUI@@PEAVAppInfo@@_NPEAPEAV1@@Z
    static long Create(AccountsSettingsUI *, AppInfo *, bool, AccountsSettingsController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissCommand@AccountsSettingsController@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismissCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@AccountsSettingsController@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@AccountsSettingsController@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AccountsSettingsController@@IEAA@XZ
    AccountsSettingsController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@AccountsSettingsController@@IEAAJPEAVAccountsSettingsUI@@PEAVAppInfo@@_N@Z
    long Initialize(AccountsSettingsUI *, AppInfo *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AccountsSettingsController@@MEAA@XZ
    virtual ~AccountsSettingsController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAccountCommandElements@AccountsSettingsController@@AEAAXXZ
    void _AddAccountCommandElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppAccountProviderElements@AccountsSettingsController@@AEAAXXZ
    void _AddAppAccountProviderElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppCredentialElements@AccountsSettingsController@@AEAAXXZ
    void _AddAppCredentialElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUp@AccountsSettingsController@@AEAAXXZ
    void _CleanUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTimerEvent@AccountsSettingsController@@AEAAXVUID@@@Z
    void _FireTimerEvent(UID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RetrieveAppAccountSettings@AccountsSettingsController@@AEAAJXZ
    long _RetrieveAppAccountSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetKeyFocusVisual@AccountsSettingsController@@AEAAXXZ
    void _SetKeyFocusVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAppAccountSettings@AccountsSettingsController@@AEAAX_N@Z
    void _ShowAppAccountSettings(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowProgressUI@AccountsSettingsController@@AEAAXXZ
    void _ShowProgressUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimers@AccountsSettingsController@@AEAAJXZ
    long _StartTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimers@AccountsSettingsController@@AEAAXXZ
    void _StopTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransitionApplicationPaneContent@AccountsSettingsController@@AEAAXPEAVElement@DirectUI@@W4TRANSITION_CONTENT_TYPE@@@Z
    void _TransitionApplicationPaneContent(::DirectUI::Element *, int);
};
