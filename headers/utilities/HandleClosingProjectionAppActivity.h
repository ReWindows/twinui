#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace ProjectionManagerTelemetry {
class HandleClosingProjectionAppActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandleClosingProjectionAppActivity@ProjectionManagerTelemetry@@QEAAXXZ
    void StartActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandleClosingProjectionAppActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandleClosingProjectionAppActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
