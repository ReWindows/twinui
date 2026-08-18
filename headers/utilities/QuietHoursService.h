#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class QuietHoursService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@QuietHoursService@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@QuietHoursService@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGameFocusChange@QuietHoursService@@UEAAJE@Z
    virtual long OnGameFocusChange(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRudeWindowStateChange@QuietHoursService@@UEAAJW4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z
    virtual long OnRudeWindowStateChange(int, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0QuietHoursService@@QEAA@XZ
    QuietHoursService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@QuietHoursService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@QuietHoursService@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuietHoursService@@UEAA@XZ
    virtual ~QuietHoursService();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentState@QuietHoursService@@AEAA?AW4QuietHoursState@@XZ
    int GetCurrentState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessPathOrAppIdFromHwnd@QuietHoursService@@AEAAJPEAUHWND__@@PEAGI@Z
    long GetProcessPathOrAppIdFromHwnd(HWND__*, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeExclusionList@QuietHoursService@@AEAAXXZ
    void InitializeExclusionList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessInExclusionList@QuietHoursService@@AEBA_NPEBG@Z
    bool IsProcessInExclusionList(unsigned short const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseWnfIfStateChanged@QuietHoursService@@AEAAXXZ
    void RaiseWnfIfStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToAllMonitors@QuietHoursService@@AEAAJXZ
    long SubscribeToAllMonitors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToMonitorEvents@QuietHoursService@@AEAAJPEAUIImmersiveMonitor@@@Z
    long SubscribeToMonitorEvents(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryWriteCurrentStateToRegistry@QuietHoursService@@AEAAXXZ
    void TryWriteCurrentStateToRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromAllMonitorEvents@QuietHoursService@@AEAAJXZ
    long UnsubscribeFromAllMonitorEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromOneMonitorEvents@QuietHoursService@@AEAAJPEAUIImmersiveMonitor@@@Z
    long UnsubscribeFromOneMonitorEvents(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteDetailedTelemetry@QuietHoursService@@AEAAXAEAVOnRudeWindowStateChange@QuietHoursServiceTraceProvider@@PEAUHWND__@@PEBG_N2@Z
    void WriteDetailedTelemetry(WindissectOpaque &, HWND__*, unsigned short const *, bool, unsigned short const *);
};
