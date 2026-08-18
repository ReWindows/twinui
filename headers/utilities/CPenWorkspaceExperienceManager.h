#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 134 member(s).
class CPenWorkspaceExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPenWorkspaceExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringToForeground@CPenWorkspaceExperienceManager@@UEAAJXZ
    virtual long BringToForeground();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPenWorkspaceExperienceManager@@QEAA@XZ
    CPenWorkspaceExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CPenWorkspaceExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePenWorkspace@CPenWorkspaceExperienceManager@@UEAAJXZ
    virtual long ClosePenWorkspace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CPenWorkspaceExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CPenWorkspaceExperienceManager@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long Execute(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPenWorkspaceExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPenWorkspaceExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPenWorkspaceExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchOrTogglePenWorkspace@CPenWorkspaceExperienceManager@@UEAAJW4PenWorkspaceVerb@Experience@Shell@Internal@Windows@@@Z
    virtual long LaunchOrTogglePenWorkspace(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchOrTogglePenWorkspaceFromPoint@CPenWorkspaceExperienceManager@@UEAAJW4PenWorkspaceVerb@Experience@Shell@Internal@Windows@@UPoint@Foundation@6@@Z
    virtual long LaunchOrTogglePenWorkspaceFromPoint(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchOrTogglePenWorkspaceHome@CPenWorkspaceExperienceManager@@UEAAJE@Z
    virtual long LaunchOrTogglePenWorkspaceHome(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CPenWorkspaceExperienceManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPenWorkspaceExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPenWorkspaceExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CPenWorkspaceExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LaunchType@CPenWorkspaceExperienceManager@@UEAAJPEAW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long get_LaunchType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RequestingViewWindowId@CPenWorkspaceExperienceManager@@UEAAJPEAH@Z
    virtual long get_RequestingViewWindowId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetApplicationUserModelId@CPenWorkspaceExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TargetApplicationUserModelId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_LaunchType@CPenWorkspaceExperienceManager@@UEAAJW4PendingLaunchType@Private@System@Windows@@@Z
    virtual long put_LaunchType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetApplicationUserModelId@CPenWorkspaceExperienceManager@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_TargetApplicationUserModelId(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenWorkspaceExperienceManager@@UEAA@XZ
    virtual ~CPenWorkspaceExperienceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActiveZBandChangedForMonitor@CPenWorkspaceExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z
    virtual long ActiveZBandChangedForMonitor(unsigned long, unsigned long, IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanLaunchPenWorkspace@CPenWorkspaceExperienceManager@@AEBA_NXZ
    bool CanLaunchPenWorkspace() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseCortanaIfNeeded@CPenWorkspaceExperienceManager@@CAJPEAUHWND__@@@Z
    static long CloseCortanaIfNeeded(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseNotesAndExperience@CPenWorkspaceExperienceManager@@CAJ_NK@Z
    static long CloseNotesAndExperience(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseUI@CPenWorkspaceExperienceManager@@AEAAJXZ
    long CloseUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHomeWindowHeight@CPenWorkspaceExperienceManager@@AEAAJPEAUHMONITOR__@@HUtagRECT@@H@Z
    long ComputeHomeWindowHeight(HMONITOR__*, int, tagRECT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHomeWindowRect@CPenWorkspaceExperienceManager@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@HPEAUHMONITOR__@@1@Z
    tagRECT ComputeHomeWindowRect(int, int, int, tagRECT, int, HMONITOR__*, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyExperienceView@CPenWorkspaceExperienceManager@@AEAAJXZ
    long DestroyExperienceView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImmersiveShell@CPenWorkspaceExperienceManager@@AEAAJXZ
    long EnsureImmersiveShell();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActivationManager@CPenWorkspaceExperienceManager@@CAJPEAPEAUIAboveLockActivationManager@@@Z
    static long GetActivationManager(IAboveLockActivationManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsAppInstalling@CPenWorkspaceExperienceManager@@AEAAJPEBGAEA_N@Z
    long GetIsAppInstalling(unsigned short const *, bool &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorInformation@CPenWorkspaceExperienceManager@@AEAAJPEAUHMONITOR__@@PEAUtagRECT@@1PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z
    long GetMonitorInformation(HMONITOR__*, tagRECT *, tagRECT *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewWindow@CPenWorkspaceExperienceManager@@AEAAJPEAPEAUHWND__@@@Z
    long GetViewWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleHideFromKeyboardHook@CPenWorkspaceExperienceManager@@AEAAX_NK@Z
    void HandleHideFromKeyboardHook(bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CPenWorkspaceExperienceManager@@AEAAJ_N@Z
    long Hide(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideRemember@CPenWorkspaceExperienceManager@@AEAAJXZ
    long HideRemember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAppInstallManagerIfNeeded@CPenWorkspaceExperienceManager@@AEAAJXZ
    long InitializeAppInstallManagerIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLockScreenActive@CPenWorkspaceExperienceManager@@CA_NXZ
    static bool IsLockScreenActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPowerPointPresenting@CPenWorkspaceExperienceManager@@AEBA_NXZ
    bool IsPowerPointPresenting() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenLocked@CPenWorkspaceExperienceManager@@AEAAJPEA_N@Z
    long IsScreenLocked(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWhiteboardInstalled@CPenWorkspaceExperienceManager@@AEBA_NXZ
    bool IsWhiteboardInstalled() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAppAboveLock@CPenWorkspaceExperienceManager@@AEAAJQEBG0@Z
    long LaunchAppAboveLock(unsigned short const * const, unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchAppBelowLock@CPenWorkspaceExperienceManager@@AEAAJQEBG0@Z
    long LaunchAppBelowLock(unsigned short const * const, unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchCustomSketchApp@CPenWorkspaceExperienceManager@@AEAAJXZ
    long LaunchCustomSketchApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchHome@CPenWorkspaceExperienceManager@@AEAAJXZ
    long LaunchHome();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchIndependantStickyNotesApp@CPenWorkspaceExperienceManager@@AEAAJXZ
    long LaunchIndependantStickyNotesApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchInkGrabApp@CPenWorkspaceExperienceManager@@AEAAJXZ
    long LaunchInkGrabApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchOrTogglePenWorkspaceInternal@CPenWorkspaceExperienceManager@@AEAAJW4PenWorkspaceVerb@Experience@Shell@Internal@Windows@@UPoint@Foundation@6@@Z
    long LaunchOrTogglePenWorkspaceInternal(int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchScreenSketchApp@CPenWorkspaceExperienceManager@@AEAAJQEBG@Z
    long LaunchScreenSketchApp(unsigned short const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNotesOutOfPenWorkpaceIfNeeded@CPenWorkspaceExperienceManager@@AEAAJXZ
    long MoveNotesOutOfPenWorkpaceIfNeeded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToZBand@CPenWorkspaceExperienceManager@@AEAAJW4ZBID@@@Z
    long MoveToZBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNotesAppClosing@CPenWorkspaceExperienceManager@@EEAAJXZ
    virtual long NotifyNotesAppClosing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyNotesThumbnailChange@CPenWorkspaceExperienceManager@@EEAAJIPEAE@Z
    virtual long NotifyNotesThumbnailChange(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRequestFocusChange@CPenWorkspaceExperienceManager@@EEAAJPEAH@Z
    virtual long NotifyRequestFocusChange(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCortanaHidden@CPenWorkspaceExperienceManager@@AEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z
    long OnCortanaHidden(::Windows::Internal::Shell::Experience::ICortanaExperienceManager *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCortanaShown@CPenWorkspaceExperienceManager@@AEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z
    long OnCortanaShown(::Windows::Internal::Shell::Experience::ICortanaExperienceManager *, ::Windows::Internal::Shell::Experience::ICortanaShownEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CPenWorkspaceExperienceManager@@EEAAJXZ
    virtual long OnDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissRequested@CPenWorkspaceExperienceManager@@EEAAJXZ
    virtual long OnDismissRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventQueued@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long OnEventQueued(CSingleViewShellExperience *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CPenWorkspaceExperienceManager@@EEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@CPenWorkspaceExperienceManager@@EEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CPenWorkspaceExperienceManager@@EEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityBoostRequested@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityBoostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityUnboostRequested@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityUnboostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowRequested@CPenWorkspaceExperienceManager@@EEAAJXZ
    virtual long OnShowRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCloaking@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHidden@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewHidden(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CPenWorkspaceExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PWSManagerLowLevelHook@CPenWorkspaceExperienceManager@@CA_JH_K_J@Z
    static int64_t PWSManagerLowLevelHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PWSManagerLowLevelMouseHook@CPenWorkspaceExperienceManager@@CA_JH_K_J@Z
    static int64_t PWSManagerLowLevelMouseHook(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayHideAnimation@CPenWorkspaceExperienceManager@@AEAAJXZ
    long PlayHideAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionWindowCore@CPenWorkspaceExperienceManager@@AEAAJXZ
    long PositionWindowCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReactivateApp@CPenWorkspaceExperienceManager@@AEAAJPEBG@Z
    long ReactivateApp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForActiveZBandChanged@CPenWorkspaceExperienceManager@@AEAAJXZ
    long RegisterForActiveZBandChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportPenWorkspaceAboveLock@CPenWorkspaceExperienceManager@@AEAAJH@Z
    long ReportPenWorkspaceAboveLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnFocus@CPenWorkspaceExperienceManager@@AEAAJXZ
    long ReturnFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderAccent@CPenWorkspaceExperienceManager@@AEAAJH@Z
    long SetBorderAccent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHomePositionInApp@CPenWorkspaceExperienceManager@@AEAAJJJ@Z
    long SetHomePositionInApp(long, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskbarLocationInApp@CPenWorkspaceExperienceManager@@AEAAJW4EDGEUI_TRAYSTUCKPLACE@@@Z
    long SetTaskbarLocationInApp(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZBand@CPenWorkspaceExperienceManager@@AEAAJXZ
    long SetZBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CPenWorkspaceExperienceManager@@AEAAJPEBG@Z
    long Show(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowExperienceView@CPenWorkspaceExperienceManager@@AEAAJXZ
    long ShowExperienceView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInternal@CPenWorkspaceExperienceManager@@AEAAJPEBG@Z
    long ShowInternal(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemember@CPenWorkspaceExperienceManager@@AEAAJXZ
    long ShowRemember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeWindowForHome@CPenWorkspaceExperienceManager@@AEAAJXZ
    long SizeWindowForHome();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SizeWindowForRemember@CPenWorkspaceExperienceManager@@AEAAJPEAUHMONITOR__@@@Z
    long SizeWindowForRemember(HMONITOR__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDismiss@CPenWorkspaceExperienceManager@@AEAAJXZ
    long StartDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookMouseAndKeyboard@CPenWorkspaceExperienceManager@@AEAAJXZ
    long UnhookMouseAndKeyboard();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForActiveZBandChanged@CPenWorkspaceExperienceManager@@AEAAJXZ
    long UnregisterForActiveZBandChanged();
};
