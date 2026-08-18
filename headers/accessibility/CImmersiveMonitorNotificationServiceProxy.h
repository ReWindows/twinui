#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CImmersiveMonitorNotificationServiceProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveMonitorNotificationServiceProxy@@QEAA@XZ
    CImmersiveMonitorNotificationServiceProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CImmersiveMonitorNotificationServiceProxy@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CImmersiveMonitorNotificationServiceProxy@@EEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CImmersiveMonitorNotificationServiceProxy@@EEAAJPEAUIImmersiveMonitorNotification@@PEAK@Z
    virtual long Register(IImmersiveMonitorNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveMonitorNotificationServiceProxy@@EEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CImmersiveMonitorNotificationServiceProxy@@EEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveMonitorNotificationServiceProxy@@EEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveMonitorNotificationServiceProxy@@EEAA@XZ
    virtual ~CImmersiveMonitorNotificationServiceProxy();
};
