#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 38 member(s).
class CImmersiveHotkeyNotification {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveHotkeyNotification@@QEAA@XZ
    CImmersiveHotkeyNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CImmersiveHotkeyNotification@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveHotkeyNotification@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveHotkeyNotification@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveHotkeyNotification@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveHotkeyNotification@@UEAA@XZ
    virtual ~CImmersiveHotkeyNotification();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMonitorForHotkeyNotification@CImmersiveHotkeyNotification@@AEAAJPEAPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z
    long _GetMonitorForHotkeyNotification(IImmersiveMonitor * *, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeActionCenter@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeActionCenter(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeActionSpaceFlow@CImmersiveHotkeyNotification@@AEAAJW4ACTIONTYPE@@@Z
    long _InvokeActionSpaceFlow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeDevicesFlow@CImmersiveHotkeyNotification@@AEAAJW4ACTIONTYPE@@@Z
    long _InvokeDevicesFlow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeEDPBadge@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeEDPBadge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeFeedbackApp@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeFeedbackApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeGlobalBack@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeGlobalBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeLanguageCommunityApp@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeLanguageCommunityApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeMagnifierSettingsPage@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeMagnifierSettingsPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeNarratorSettingsPage@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeNarratorSettingsPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokePenSignalManager@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokePenSignalManager(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokePenWorkspace@CImmersiveHotkeyNotification@@AEAAJW4PenWorkspaceVerb@Experience@Shell@Internal@Windows@@@Z
    long _InvokePenWorkspace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeScreenshot@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeScreenshot(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeSettingsApp@CImmersiveHotkeyNotification@@AEAAJW4HotKey@SettingsPaneTelemetry@@@Z
    long _InvokeSettingsApp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeShakeAction@CImmersiveHotkeyNotification@@AEAAXXZ
    void _InvokeShakeAction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeShoulderTap@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeShoulderTap(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeSoftLanding@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeSoftLanding(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeTabletMode@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeTabletMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeVirtualDesktopAction@CImmersiveHotkeyNotification@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z
    long _InvokeVirtualDesktopAction(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeVirtualDesktopSwitcherDismiss@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeVirtualDesktopSwitcherDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeWin10DevicesFlow@CImmersiveHotkeyNotification@@AEAAJXZ
    long _InvokeWin10DevicesFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWindowAmbiguousForMonitorMapping@CImmersiveHotkeyNotification@@CA_NPEAUHWND__@@@Z
    static bool _IsWindowAmbiguousForMonitorMapping(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareToInvokeApp@CImmersiveHotkeyNotification@@AEAAJAEAVCExecuteItem@@PEBG@Z
    long _PrepareToInvokeApp(CExecuteItem &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDesktop@CImmersiveHotkeyNotification@@AEAAXW4ShowDesktopOptions@1@@Z
    void _ShowDesktop(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleAllUpView@CImmersiveHotkeyNotification@@AEAAJXZ
    long _ToggleAllUpView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleColorFiltering@CImmersiveHotkeyNotification@@AEAAJXZ
    long _ToggleColorFiltering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleFullScreen@CImmersiveHotkeyNotification@@AEAAJXZ
    long _ToggleFullScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleOnScreenKeyboard@CImmersiveHotkeyNotification@@AEAAJXZ
    long _ToggleOnScreenKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ToggleSpeechRecognition@CImmersiveHotkeyNotification@@AEAAJXZ
    long _ToggleSpeechRecognition();
};
