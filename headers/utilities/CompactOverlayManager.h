#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CompactOverlayManager {
public:
    class ThreadSafeData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompactOverlayManager@@QEAA@XZ
    CompactOverlayManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CompactOverlayManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CompactOverlayManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@CompactOverlayManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@CompactOverlayManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@CompactOverlayManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLauncherVisibilityChanged@CompactOverlayManager@@UEAAJH@Z
    virtual long OnLauncherVisibilityChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CompactOverlayManager@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompactOverlayManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CompactOverlayManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CompactOverlayManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompactOverlayPresence@CompactOverlayManager@@UEAAJH@Z
    virtual long UpdateCompactOverlayPresence(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompactOverlayManager@@UEAA@XZ
    virtual ~CompactOverlayManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearFullscreenListenerForMonitor@CompactOverlayManager@@AEAAJPEAUIImmersiveMonitor@@@Z
    long ClearFullscreenListenerForMonitor(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePositioner@CompactOverlayManager@@AEAAJXZ
    long EnsurePositioner();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewCompactOverlay@CompactOverlayManager@@AEAA_NPEAUIApplicationView@@@Z
    bool IsViewCompactOverlay(IApplicationView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewCompactOverlay@CompactOverlayManager@@AEAA_NPEAUHWND__@@@Z
    bool IsViewCompactOverlay(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFullscreenListenersForMonitor@CompactOverlayManager@@AEAAJPEAUIImmersiveMonitor@@@Z
    long RegisterFullscreenListenersForMonitor(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateElevatedZOrder@CompactOverlayManager@@AEAAJXZ
    long UpdateElevatedZOrder();
};
