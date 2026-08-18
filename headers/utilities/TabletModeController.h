#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 42 member(s).
class TabletModeController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@TabletModeController@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoverWindows@TabletModeController@@UEAAJPEAPEAPEAUHWND__@@PEAI@Z
    virtual long GetCoverWindows(HWND__* * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterRects@TabletModeController@@UEAAJPEAIPEAPEAUtagRECT@@@Z
    virtual long GetGutterRects(unsigned int *, tagRECT * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMode@TabletModeController@@UEAAJPEAW4_TABLETMODESTATE@@@Z
    virtual long GetMode(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellModePreference@TabletModeController@@UEAAJPEAW4SHELLMODE_PREFERENCE@@@Z
    virtual long GetShellModePreference(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellModeTriggerConfig@TabletModeController@@UEAAJPEAW4SHELLMODE_TRIGGER_CONFIG@@PEAH@Z
    virtual long GetShellModeTriggerConfig(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTabletModeAvailable@TabletModeController@@UEAAJPEAH@Z
    virtual long IsTabletModeAvailable(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@TabletModeController@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@TabletModeController@@UEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@TabletModeController@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@TabletModeController@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@TabletModeController@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromptUser@TabletModeController@@UEAAJW4_TABLETMODESTATE@@W4_TMCTRIGGER@@@Z
    virtual long PromptUser(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTabletModeAvailabilityChanges@TabletModeController@@UEAAJPEAUITabletModeAvailabilityChangeListener@@PEAK@Z
    virtual long RegisterForTabletModeAvailabilityChanges(ITabletModeAvailabilityChangeListener *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTabletModeChanges@TabletModeController@@UEAAJPEAUITabletModeChangeListener@@PEAK@Z
    virtual long RegisterForTabletModeChanges(ITabletModeChangeListener *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TabletModeController@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMode@TabletModeController@@UEAAJW4_TABLETMODESTATE@@W4_TMCTRIGGER@@@Z
    virtual long SetMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@TabletModeController@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@TabletModeController@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TabletModeController@@QEAA@XZ
    TabletModeController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackCoverWindow@TabletModeController@@UEAAXPEAUHWND__@@H@Z
    virtual void TrackCoverWindow(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForTabletModeAvailabilityChanges@TabletModeController@@UEAAJK@Z
    virtual long UnregisterForTabletModeAvailabilityChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForTabletModeChanges@TabletModeController@@UEAAJK@Z
    virtual long UnregisterForTabletModeChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@TabletModeController@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TabletModeController@@UEAA@XZ
    virtual ~TabletModeController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDesktopMode@TabletModeController@@AEAAJXZ
    long ForceDesktopMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSwitchModeTelemetry@TabletModeController@@AEAAXW4_TABLETMODESTATE@@W4_TMCTRIGGER@@@Z
    void HandleSwitchModeTelemetry(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeModeTriggerCachedValue@TabletModeController@@AEAAJXZ
    long InitializeModeTriggerCachedValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAllowedModeSwitch@TabletModeController@@AEBA_NW4_TABLETMODESTATE@@@Z
    bool IsAllowedModeSwitch(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTabletModeChangeListeners@TabletModeController@@CAXPEAUIObjectArray@@W4_TABLETMODESTATE@@@Z
    static void NotifyTabletModeChangeListeners(IObjectArray *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistModeTriggerCachedValue@TabletModeController@@AEAAJXZ
    long PersistModeTriggerCachedValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishWnfStateData@TabletModeController@@CAXW4_TABLETMODESTATE@@@Z
    static void PublishWnfStateData(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveMode@TabletModeController@@AEAAXW4_TABLETMODESTATE@@@Z
    void SaveMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetModeInternal@TabletModeController@@AEAAJW4_TABLETMODESTATE@@W4_TMCTRIGGER@@@Z
    long SetModeInternal(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowManagement@TabletModeController@@AEAAJW4_TABLETMODESTATE@@@Z
    long SetWindowManagement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForceDesktopMode@TabletModeController@@AEAA_NXZ
    bool ShouldForceDesktopMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAbsoluteTimer@TabletModeController@@AEAAXXZ
    void UpdateAbsoluteTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHideWallpaperIconsForMode@TabletModeController@@AEAAXW4_TABLETMODESTATE@@@Z
    void UpdateHideWallpaperIconsForMode(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TelemetryTimerCallback@TabletModeController@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_TelemetryTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
};
