#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class PrivacyFlyoutHelper {
public:
    class _ApplicationCameraState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@PrivacyFlyoutHelper@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CameraStreamStateChangeCallback@PrivacyFlyoutHelper@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long CameraStreamStateChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDesktopVisibilityChanged@PrivacyFlyoutHelper@@UEAAJPEAUIImmersiveMonitor@@H@Z
    virtual long OnDesktopVisibilityChanged(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLockScreenAppRunning@PrivacyFlyoutHelper@@UEAAJ_N@Z
    virtual long OnLockScreenAppRunning(bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PrivacyFlyoutHelper@@QEAA@XZ
    PrivacyFlyoutHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PrivacyFlyoutHelper@@QEAAJP6AXPEAX0@ZPEAUIServiceProvider@@0@Z
    long RuntimeClassInitialize(void ( *)(void *, void *), IServiceProvider *, void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseAndWaitTimer@PrivacyFlyoutHelper@@AEAAXXZ
    void _CloseAndWaitTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppIdAndVisibility@PrivacyFlyoutHelper@@CAJPEBU_WNF_KSCAMERA_STREAMSTATE_INFO@@PEAUIImmersiveApplicationArrayService@@PEAPEAGPEAW4_AppUsingCameraVisibility@1@@Z
    static long _GetAppIdAndVisibility(_WNF_KSCAMERA_STREAMSTATE_INFO const *, IImmersiveApplicationArrayService *, unsigned short * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnCameraStateChangeWithLock@PrivacyFlyoutHelper@@AEAAXPEBXK@Z
    void _OnCameraStateChangeWithLock(void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLauncherVisibilityChanged@PrivacyFlyoutHelper@@AEAAX_N@Z
    void _OnLauncherVisibilityChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowCameraStateWithLock@PrivacyFlyoutHelper@@AEAAJXZ
    long _ShowCameraStateWithLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartTimer@PrivacyFlyoutHelper@@AEAAXXZ
    void _StartTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToCameraStateChanges@PrivacyFlyoutHelper@@AEAAJXZ
    long _SubscribeToCameraStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToLauncherVsibilityChanges@PrivacyFlyoutHelper@@AEAAJXZ
    long _SubscribeToLauncherVsibilityChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryTriggerPrivacyUINotificationWithLock@PrivacyFlyoutHelper@@AEAAJXZ
    long _TryTriggerPrivacyUINotificationWithLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAppCameraUsageWithLock@PrivacyFlyoutHelper@@AEAAJPEBU_WNF_KSCAMERA_STREAMSTATE_INFO@@PEBGPEA_N@Z
    long _UpdateAppCameraUsageWithLock(_WNF_KSCAMERA_STREAMSTATE_INFO const *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LauncherVisibilityChangeCallback@PrivacyFlyoutHelper@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long s_LauncherVisibilityChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PrivacyFlyoutHelper@@EEAA@XZ
    virtual ~PrivacyFlyoutHelper();
};
