#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace MonitorManagerTelemetry {
class CreatePerMonitorComponents {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CreatePerMonitorComponents@MonitorManagerTelemetry@@QEAAXIPEAUHMONITOR__@@AEBUtagRECT@@_N@Z
    void StartActivity(unsigned int, HMONITOR__*, tagRECT const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CreatePerMonitorComponents@MonitorManagerTelemetry@@QEAA@XZ
    ~CreatePerMonitorComponents();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CreatePerMonitorComponents@MonitorManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CreatePerMonitorComponents@MonitorManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MonitorManagerTelemetry
