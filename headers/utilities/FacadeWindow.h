#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class FacadeWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFacade@FacadeWindow@@UEAAJXZ
    virtual long CreateFacade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFacade@FacadeWindow@@UEAAJXZ
    virtual long DestroyFacade();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@FacadeWindow@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FacadeWindow@@QEAA@XZ
    FacadeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@FacadeWindow@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FacadeWindow@@QEAAJPEAUIImmersiveLauncher@@PEAUIImmersiveMonitorNotificationService@@PEAUISwitchThumbnailDeviceManager@@@Z
    long RuntimeClassInitialize(IImmersiveLauncher *, IImmersiveMonitorNotificationService *, ISwitchThumbnailDeviceManager *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FacadeWindow@@UEAA@XZ
    virtual ~FacadeWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDesktopThumbnail@FacadeWindow@@AEAAXXZ
    void DestroyDesktopThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecreateDesktopThumbnail@FacadeWindow@@AEAAJXZ
    long RecreateDesktopThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@FacadeWindow@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
