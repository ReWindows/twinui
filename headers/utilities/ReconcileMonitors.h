#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace MonitorManagerTelemetry {
class ReconcileMonitors {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReconcileMonitors@MonitorManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ReconcileMonitors@MonitorManagerTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReconcileMonitors@MonitorManagerTelemetry@@QEAA@XZ
    ~ReconcileMonitors();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReconcileMonitors@MonitorManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReconcileMonitors@MonitorManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MonitorManagerTelemetry
