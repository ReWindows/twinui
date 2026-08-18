#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class DisplayMonitorInfoSyncComponent {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DisplayMonitorInfoSyncComponent@@QEAA@XZ
    DisplayMonitorInfoSyncComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayMonitorInfo@DisplayMonitorInfoSyncComponent@@QEAAXXZ
    void UpdateDisplayMonitorInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplayMonitorInfoSyncComponent@@QEAA@XZ
    ~DisplayMonitorInfoSyncComponent();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayMonitorInfoStructForMonitor@DisplayMonitorInfoSyncComponent@@CA?AUDisplayMonitorInfoStruct@Shell@UI@WindowsUdk@winrt@@PEAUHMONITOR__@@@Z
    static WindissectOpaque GetDisplayMonitorInfoStructForMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitorDeviceId@DisplayMonitorInfoSyncComponent@@CA?AUhstring@winrt@@PEBG@Z
    static WindissectOpaque GetMonitorDeviceId(unsigned short const *);
};
