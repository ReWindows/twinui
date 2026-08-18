#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ProjectionManagerTelemetry {
class _DoSwapDisplaysActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@_DoSwapDisplaysActivity@ProjectionManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@0PEAUIImmersiveMonitor@@KK@Z
    void StartActivity(IImmersiveApplication *, IImmersiveApplication *, IImmersiveMonitor *, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_DoSwapDisplaysActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~_DoSwapDisplaysActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@_DoSwapDisplaysActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@_DoSwapDisplaysActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
