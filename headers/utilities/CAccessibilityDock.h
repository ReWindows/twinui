#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CAccessibilityDock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAccessibilityDock@@QEAA@XZ
    CAccessibilityDock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CAccessibilityDock@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DockWindow@CAccessibilityDock@@UEAAJPEAUHWND__@@PEAUHMONITOR__@@IPEAUIAccessibilityDockingServiceCallback@@@Z
    virtual long DockWindow(HWND__*, HMONITOR__*, unsigned int, IAccessibilityDockingServiceCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableSize@CAccessibilityDock@@UEAAJPEAUHMONITOR__@@PEAI1@Z
    virtual long GetAvailableSize(HMONITOR__*, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CAccessibilityDock@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CAccessibilityDock@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryWorkArea@CAccessibilityDock@@UEAAJPEBUtagRECT@@PEAU2@@Z
    virtual long QueryWorkArea(tagRECT const *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReserveDockingSpace@CAccessibilityDock@@UEAAJPEAUHWND__@@PEAUHMONITOR__@@I@Z
    virtual long ReserveDockingSpace(HWND__*, HMONITOR__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CAccessibilityDock@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndockWindow@CAccessibilityDock@@UEAAJPEAUHWND__@@@Z
    virtual long UndockWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CAccessibilityDock@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@CAccessibilityDock@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAccessibilityDock@@UEAA@XZ
    virtual ~CAccessibilityDock();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoUndockWork@CAccessibilityDock@@AEAAXXZ
    void _DoUndockWork();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureLayoutManager@CAccessibilityDock@@AEAAJXZ
    long _EnsureLayoutManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ForceUndock@CAccessibilityDock@@AEAAXW4UNDOCK_REASON@@@Z
    void _ForceUndock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_ForceUndockProc@CAccessibilityDock@@CAKPEAX@Z
    static unsigned long _s_ForceUndockProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_WindowBelongsToCallingProcess@CAccessibilityDock@@CAJPEAUHWND__@@@Z
    static long _s_WindowBelongsToCallingProcess(HWND__*);
};
