#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class WindowManagementEventsTelemetryAggregator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateResizeAndDragEvents@WindowManagementEventsTelemetryAggregator@@QEAAXII@Z
    void UpdateResizeAndDragEvents(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSnapEvents@WindowManagementEventsTelemetryAggregator@@QEAAXI@Z
    void UpdateSnapEvents(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowManagementEventsTelemetryAggregator@@QEAA@XZ
    WindowManagementEventsTelemetryAggregator();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowManagementEventsTelemetryAggregator@@QEAA@XZ
    ~WindowManagementEventsTelemetryAggregator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendPendingEvents@WindowManagementEventsTelemetryAggregator@@AEAAXXZ
    void SendPendingEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendResizeDragEvent@WindowManagementEventsTelemetryAggregator@@AEAAXXZ
    void SendResizeDragEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSendPendingEvents@WindowManagementEventsTelemetryAggregator@@AEAA_NXZ
    bool ShouldSendPendingEvents();
};
