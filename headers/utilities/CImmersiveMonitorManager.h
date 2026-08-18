#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class CImmersiveMonitorManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveMonitorManager@@QEAA@XZ
    CImmersiveMonitorManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CImmersiveMonitorManager@@QEAAJXZ
    long RuntimeClassInitialize();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CImmersiveMonitorManager@@EEAAJIPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetAt(unsigned int, IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectedCount@CImmersiveMonitorManager@@EEAAJPEAI@Z
    virtual long GetConnectedCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CImmersiveMonitorManager@@EEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromHandle@CImmersiveMonitorManager@@EEAAJPEAUHMONITOR__@@PEAPEAUIImmersiveMonitor@@@Z
    virtual long GetFromHandle(HMONITOR__*, IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFromIdentity@CImmersiveMonitorManager@@EEAAJKPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetFromIdentity(unsigned long, IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveProxyMonitor@CImmersiveMonitorManager@@EEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetImmersiveProxyMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorArray@CImmersiveMonitorManager@@EEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetMonitorArray(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextImmersiveMonitor@CImmersiveMonitorManager@@EEAAJW4IMMERSIVE_MONITOR_MOVE_DIRECTION@@PEAUIImmersiveMonitor@@PEAPEAU3@@Z
    virtual long GetNextImmersiveMonitor(int, IImmersiveMonitor *, IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSmallestMonitorDimension@CImmersiveMonitorManager@@EEAAJPEAJ@Z
    virtual long GetSmallestMonitorDimension(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LauncherVisibilityChanged@CImmersiveMonitorManager@@EEAAJH@Z
    virtual long LauncherVisibilityChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeChanged@CImmersiveMonitorManager@@EEAAJW4IMM_SYSTEM_MODE@@@Z
    virtual long ModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CImmersiveMonitorManager@@EEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CImmersiveMonitorManager@@EEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveMonitorManager@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CImmersiveMonitorManager@@EEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CImmersiveMonitorManager@@EEAAJPEAUHMONITOR__@@AEBU_GUID@@1PEAPEAX@Z
    virtual long QueryService(HMONITOR__*, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CImmersiveMonitorManager@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceByIdentity@CImmersiveMonitorManager@@EEAAJKAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryServiceByIdentity(unsigned long, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceFromPoint@CImmersiveMonitorManager@@EEAAJPEBUtagPOINT@@AEBU_GUID@@1PEAPEAX@Z
    virtual long QueryServiceFromPoint(tagPOINT const *, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryServiceFromWindow@CImmersiveMonitorManager@@EEAAJPEAUHWND__@@AEBU_GUID@@1PEAPEAX@Z
    virtual long QueryServiceFromWindow(HWND__*, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CImmersiveMonitorManager@@EEAAJPEAUIImmersiveMonitorNotification@@PEAK@Z
    virtual long Register(IImmersiveMonitorNotification *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@CImmersiveMonitorManager@@EEAAJPEAUIImmersiveMonitorFilter@@@Z
    virtual long SetFilter(IImmersiveMonitorFilter *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CImmersiveMonitorManager@@EEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveMonitorManager@@EEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CImmersiveMonitorManager@@EEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveMonitorManager@@EEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindImmersiveMonitor@CImmersiveMonitorManager@@AEAAJW4FindMonitorHow@1@QEAXAEBU_GUID@@PEAPEAX@Z
    long _FindImmersiveMonitor(int, void * const, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDeferredDesktopRotation@CImmersiveMonitorManager@@AEAAX_N@Z
    void _HandleDeferredDesktopRotation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDisplayChangeMessage@CImmersiveMonitorManager@@AEAAJW4DisplayChangeSource@@_N@Z
    long _HandleDisplayChangeMessage(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleDisplayChangeNotificationInternal@CImmersiveMonitorManager@@AEAAJW4DisplayChangeSource@@@Z
    long _HandleDisplayChangeNotificationInternal(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyDuplicateMonitor@CImmersiveMonitorManager@@AEAAXXZ
    void _NotifyDuplicateMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RaiseRotationUiaNotification@CImmersiveMonitorManager@@AEAAXXZ
    void _RaiseRotationUiaNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReconcileMonitor@CImmersiveMonitorManager@@AEAAXQEBU_DISPLAY_DEVICEW@@PEBG_N@Z
    void _ReconcileMonitor(_DISPLAY_DEVICEW const * const, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReconcileMonitors@CImmersiveMonitorManager@@AEAAXXZ
    void _ReconcileMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleReconciliationRetryIfNecessary@CImmersiveMonitorManager@@AEAAXXZ
    void _ScheduleReconciliationRetryIfNecessary();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetProxyHost@CImmersiveMonitorManager@@AEAAJPEAUImmersiveMonitorInfo@@W4DisplayChangeSource@@@Z
    long _SetProxyHost(ImmersiveMonitorInfo *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateProxyHost@CImmersiveMonitorManager@@AEAAJW4DisplayChangeSource@@@Z
    long _UpdateProxyHost(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnumMonitorsProc@CImmersiveMonitorManager@@CAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int s_EnumMonitorsProc(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FindMonitorCallback@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_FindMonitorCallback(ImmersiveMonitorInfo *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ReconcileDisconnectedMonitors@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_ReconcileDisconnectedMonitors(ImmersiveMonitorInfo *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RetryReconciliationTimerProc@CImmersiveMonitorManager@@CAXPEAUHWND__@@I_KK@Z
    static void s_RetryReconciliationTimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SendEventsToExternalListeners@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_SendEventsToExternalListeners(ImmersiveMonitorInfo *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SendEventsToMonitorConnectedObjects@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_SendEventsToMonitorConnectedObjects(ImmersiveMonitorInfo *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SendPendingNotifications@CImmersiveMonitorManager@@CAXPEAV?$CCoSimpleArray@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@@@@@@Z
    static void s_SendPendingNotifications(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SetupMonitorsForReconciliation@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_SetupMonitorsForReconciliation(ImmersiveMonitorInfo *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SortMonitorCallback@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@0_J@Z
    static int s_SortMonitorCallback(ImmersiveMonitorInfo *, ImmersiveMonitorInfo *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_UpdateHMonitorCallback@CImmersiveMonitorManager@@CAHPEAUImmersiveMonitorInfo@@PEAX@Z
    static int s_UpdateHMonitorCallback(ImmersiveMonitorInfo *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveMonitorManager@@EEAA@XZ
    virtual ~CImmersiveMonitorManager();
};
