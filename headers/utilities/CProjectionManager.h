#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 45 member(s).
class CProjectionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectionManager@@QEAA@XZ
    CProjectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CProjectionManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoAsyncProjectionTask@CProjectionManager@@UEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEBG2PEAUIAsyncCallback@@@Z
    virtual long DoAsyncProjectionTask(int, HWND__*, HWND__*, unsigned short const *, unsigned short const *, IAsyncCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateMonitorAdded@CProjectionManager@@UEAAJXZ
    virtual long DuplicateMonitorAdded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClosingProjectionApp@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@PEAW4CLOSE_PROJECTION_RESULT@@@Z
    virtual long HandleClosingProjectionApp(IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresenterView@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z
    virtual long IsPresenterView(IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProjectedView@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@PEAH@Z
    virtual long IsProjectedView(IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProjecting@CProjectionManager@@UEAAJPEAH@Z
    virtual long IsProjecting(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CProjectionManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppAddedToSwitchers@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z
    virtual long OnAppAddedToSwitchers(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppRemovedFromSwitchers@CProjectionManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z
    virtual long OnAppRemovedFromSwitchers(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CProjectionManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CProjectionManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CProjectionManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CProjectionManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectionManager@@UEAA@XZ
    virtual ~CProjectionManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateGlomFlags@CProjectionManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@PEAW4GlomFlags@1@@Z
    long _CalculateGlomFlags(HWND__*, IImmersiveApplication * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeScreenMode@CProjectionManager@@AEAA?AW4ScreenMode@1@XZ
    int _ComputeScreenMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisconnectDisplayIfNeeded@CProjectionManager@@AEAAJPEAUIProjectionContext@@@Z
    long _DisconnectDisplayIfNeeded(IProjectionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoProjectionTask@CProjectionManager@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEBG2@Z
    long _DoProjectionTask(int, HWND__*, HWND__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoStartProjecting@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@0PEAUIImmersiveMonitor@@PEBGW4GlomFlags@1@3PEAUIProjectionContext@@@Z
    long _DoStartProjecting(IImmersiveApplication *, IImmersiveApplication *, IImmersiveMonitor *, unsigned short const *, int, int, IProjectionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoStopProjecting@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@0W4StopProjectionReason@1@@Z
    long _DoStopProjecting(IImmersiveApplication *, IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoSwapDisplays@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@0PEAUIImmersiveMonitor@@W4GlomFlags@1@2@Z
    long _DoSwapDisplays(IImmersiveApplication *, IImmersiveApplication *, IImmersiveMonitor *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnterFullScreen@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@@Z
    long _EnterFullScreen(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExitFullScreen@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@@Z
    long _ExitFullScreen(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForceReconcileMonitors@CProjectionManager@@AEAAXXZ
    void _ForceReconcileMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCachedScreenMode@CProjectionManager@@AEAA?AW4ScreenMode@1@XZ
    int _GetCachedScreenMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullScreenManager@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@PEAPEAUIFullScreenManager@@@Z
    long _GetFullScreenManager(IImmersiveApplication *, IFullScreenManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPresentedWindowInGlom@CProjectionManager@@CAPEAUHWND__@@PEAUIImmersiveApplication@@@Z
    static HWND__* _GetPresentedWindowInGlom(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFullScreen@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@PEAH@Z
    long _IsFullScreen(IImmersiveApplication *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsWindowPresentedInGlom@CProjectionManager@@CA_NPEAUHWND__@@PEAUIImmersiveApplication@@@Z
    static bool _IsWindowPresentedInGlom(HWND__*, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaximizeViewOnCurrentMonitor@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@@Z
    long _MaximizeViewOnCurrentMonitor(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MoveToNextMonitor@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@_N@Z
    long _MoveToNextMonitor(IImmersiveApplication *, IImmersiveMonitor *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMonitorLayoutChange@CProjectionManager@@AEAAXXZ
    void _OnMonitorLayoutChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecoverProjectionAppList@CProjectionManager@@AEAAXXZ
    void _RecoverProjectionAppList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreViewPosition@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@PEAUIProjectionContext@@@Z
    long _RestoreViewPosition(IImmersiveApplication *, IProjectionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowFullScreenView@CProjectionManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z
    long _ShowFullScreenView(IApplicationView *, IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchAppToThisMonitor@CProjectionManager@@AEAAJPEAUIImmersiveApplication@@PEAUIImmersiveMonitor@@_N@Z
    long _SwitchAppToThisMonitor(IImmersiveApplication *, IImmersiveMonitor *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateWindowsForProjectionTask@CProjectionManager@@AEAAJW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEAPEAUIImmersiveApplication@@2PEAW4GlomFlags@1@3@Z
    long _ValidateWindowsForProjectionTask(int, HWND__*, HWND__*, IImmersiveApplication * *, IImmersiveApplication * *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_NotifyCallback@CProjectionManager@@CAXPEAUIAsyncCallback@@J@Z
    static void _s_NotifyCallback(IAsyncCallback *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_NotifySecondScreenAvailability@CProjectionManager@@CAXH@Z
    static void _s_NotifySecondScreenAvailability(int);
};
