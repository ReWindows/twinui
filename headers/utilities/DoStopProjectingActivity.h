#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ProjectionManagerTelemetry {
class _DoStopProjectingActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@_DoStopProjectingActivity@ProjectionManagerTelemetry@@QEAAXPEAUIImmersiveApplication@@0K@Z
    void StartActivity(IImmersiveApplication *, IImmersiveApplication *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_DoStopProjectingActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~_DoStopProjectingActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@_DoStopProjectingActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@_DoStopProjectingActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
