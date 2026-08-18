#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class SoftLandingManagerInitializeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SoftLandingManagerInitializeActivity@SoftLandingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SoftLandingManagerInitializeActivity@SoftLandingTelemetry@@QEAA@XZ
    ~SoftLandingManagerInitializeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SoftLandingManagerInitializeActivity@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SoftLandingManagerInitializeActivity@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
