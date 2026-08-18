#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class CAudioFlyoutController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAudioFlyoutController@@QEAA@XZ
    CAudioFlyoutController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CAudioFlyoutController@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CAudioFlyoutController@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@CAudioFlyoutController@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@CAudioFlyoutController@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyShellMediaPlaybackDataSourceChanged@CAudioFlyoutController@@UEAAJXZ
    virtual long NotifyShellMediaPlaybackDataSourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CAudioFlyoutController@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CAudioFlyoutController@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteVirtualDesktopConnected@CAudioFlyoutController@@UEAAJPEAUIVirtualDesktop@@@Z
    virtual long RemoteVirtualDesktopConnected(IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAudioFlyoutController@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CAudioFlyoutController@@UEAAJHK@Z
    virtual long Show(int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowWithCustomMessage@CAudioFlyoutController@@UEAAJHKPEBG@Z
    virtual long ShowWithCustomMessage(int, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CAudioFlyoutController@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CAudioFlyoutController@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtualDesktopSwitched@CAudioFlyoutController@@UEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchType@@@Z
    virtual long VirtualDesktopSwitched(IVirtualDesktop *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CameraOnFlyoutChangeCallback@CAudioFlyoutController@@CAXPEAX0@Z
    static void CameraOnFlyoutChangeCallback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnControlInteractedWith@CAudioFlyoutController@@AEAAJPEAUIInspectable@@_N@Z
    long OnControlInteractedWith(IInspectable *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConfirmatorHost@CAudioFlyoutController@@AEAAJXZ
    long RegisterConfirmatorHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowInternal@CAudioFlyoutController@@AEAAJHKPEBG@Z
    long ShowInternal(int, unsigned long, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTimer@CAudioFlyoutController@@AEAAXXZ
    void StartTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnScaleChange@CAudioFlyoutController@@AEAAXXZ
    void _OnScaleChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TimerCallback@CAudioFlyoutController@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_TimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAudioFlyoutController@@EEAA@XZ
    virtual ~CAudioFlyoutController();
};
