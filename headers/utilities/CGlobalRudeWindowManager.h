#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class CGlobalRudeWindowManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalRudeWindowManager@@QEAA@XZ
    CGlobalRudeWindowManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentVirtualDesktopChanged@CGlobalRudeWindowManager@@UEAAJPEAUIVirtualDesktop@@0@Z
    virtual long CurrentVirtualDesktopChanged(IVirtualDesktop *, IVirtualDesktop *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CGlobalRudeWindowManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskPoolContext@CGlobalRudeWindowManager@@UEAAKXZ
    virtual unsigned long GetTaskPoolContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CGlobalRudeWindowManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDesktopVisibilityChanged@CGlobalRudeWindowManager@@UEAAJPEAUIImmersiveMonitor@@H@Z
    virtual long OnDesktopVisibilityChanged(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CGlobalRudeWindowManager@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CGlobalRudeWindowManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CGlobalRudeWindowManager@@QEAAJPEAUIRudeWindowWin32Functions@@@Z
    long RuntimeClassInitialize(IRudeWindowWin32Functions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CGlobalRudeWindowManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CGlobalRudeWindowManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewVirtualDesktopChanged@CGlobalRudeWindowManager@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewVirtualDesktopChanged(IApplicationView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalRudeWindowManager@@UEAA@XZ
    virtual ~CGlobalRudeWindowManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFullscreenEnter@CGlobalRudeWindowManager@@AEAAXPEAUHWND__@@@Z
    void HandleFullscreenEnter(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUsingPositioner@CGlobalRudeWindowManager@@AEAA_NPEAUHWND__@@W4SHELL_POSITIONER_TYPE@@@Z
    bool IsUsingPositioner(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowCloaked@CGlobalRudeWindowManager@@AEAA_NPEAUHWND__@@@Z
    bool IsWindowCloaked(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecalculateRudeWindowState@CGlobalRudeWindowManager@@AEAAXW4RecalculateRudeWindowsReason@@PEAUHWND__@@@Z
    void RecalculateRudeWindowState(int, HWND__*);
};
