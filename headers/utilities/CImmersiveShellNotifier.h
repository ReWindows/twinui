#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class CImmersiveShellNotifier {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveShellNotifier@@QEAA@XZ
    CImmersiveShellNotifier();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveShellNotifier@@UEAA@XZ
    virtual ~CImmersiveShellNotifier();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CImmersiveShellNotifier@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CImmersiveShellNotifier@@EEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDesktopVisibilityChanged@CImmersiveShellNotifier@@EEAAJPEAUIImmersiveMonitor@@H@Z
    virtual long OnDesktopVisibilityChanged(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveShellNotifier@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortByImmersivenessCompareFunc@CImmersiveShellNotifier@@CAHPEAXPEBX1@Z
    static int SortByImmersivenessCompareFunc(void *, void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortByMonitorIdCompareFunc@CImmersiveShellNotifier@@CAHPEAXPEBX1@Z
    static int SortByMonitorIdCompareFunc(void *, void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveShellNotifier@@EEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveShellNotifier@@EEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddConnectedMonitor@CImmersiveShellNotifier@@AEAAJPEAUIImmersiveMonitor@@IIPEAUWNF_IMMERSIVE_MONITOR_DATA@@PEA_N@Z
    long _AddConnectedMonitor(IImmersiveMonitor *, unsigned int, unsigned int, WNF_IMMERSIVE_MONITOR_DATA *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishCurrentImmersiveMonitorState@CImmersiveShellNotifier@@AEAAXXZ
    void _PublishCurrentImmersiveMonitorState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishWNFMonitorModeState@CImmersiveShellNotifier@@AEAAXXZ
    void _PublishWNFMonitorModeState();
};
