#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ProjectionManagerTelemetry {
class _DoStartProjectingActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@_DoStartProjectingActivity@ProjectionManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@0PEAUIImmersiveMonitor@@PEBGKK@Z
    void StartActivity(IImmersiveApplication *, IImmersiveApplication *, IImmersiveMonitor *, unsigned short const *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_DoStartProjectingActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~_DoStartProjectingActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@_DoStartProjectingActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@_DoStartProjectingActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
