#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class SettingsController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@SettingsController@@SAJPEAVSettingsUI@@PEAVAppInfo@@PEAPEAV1@@Z
    static long Create(SettingsUI *, AppInfo *, SettingsController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissCommand@SettingsController@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismissCommand(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@SettingsController@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedInput@SettingsController@@UEAAXPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual void OnListenedInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DoContentTransition@SettingsController@@SAXPEAVElement@DirectUI@@0@Z
    static void s_DoContentTransition(::DirectUI::Element *, ::DirectUI::Element *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@SettingsController@@IEAAJPEAVSettingsUI@@PEAVAppInfo@@@Z
    long Initialize(SettingsUI *, AppInfo *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsController@@IEAA@XZ
    SettingsController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsController@@MEAA@XZ
    virtual ~SettingsController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAccountsButton@SettingsController@@AEAAXXZ
    void _AddAccountsButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppCommandElements@SettingsController@@AEAAXXZ
    void _AddAppCommandElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUp@SettingsController@@AEAAXXZ
    void _CleanUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@SettingsController@@AEAAXXZ
    void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTimerEvent@SettingsController@@AEAAXVUID@@@Z
    void _FireTimerEvent(UID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleSpecialButtons@SettingsController@@AEAAXPEAVElement@DirectUI@@@Z
    void _HandleSpecialButtons(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchPrivacyPolicy@SettingsController@@AEAAXXZ
    void _LaunchPrivacyPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchRateAndReview@SettingsController@@AEAAXXZ
    void _LaunchRateAndReview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RetrieveAppCommands@SettingsController@@AEAAJXZ
    long _RetrieveAppCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetKeyFocusVisual@SettingsController@@AEAAXXZ
    void _SetKeyFocusVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowAppCommands@SettingsController@@AEAAX_N@Z
    void _ShowAppCommands(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowProgressUI@SettingsController@@AEAAXXZ
    void _ShowProgressUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowSystemAppCommands@SettingsController@@AEAAXXZ
    void _ShowSystemAppCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimers@SettingsController@@AEAAJXZ
    long _StartTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimers@SettingsController@@AEAAXXZ
    void _StopTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TransitionApplicationPaneContent@SettingsController@@AEAAXPEAVElement@DirectUI@@W4TRANSITION_CONTENT_TYPE@@@Z
    void _TransitionApplicationPaneContent(::DirectUI::Element *, int);
};
