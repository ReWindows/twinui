#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace SoftLandingTelemetry {
class SoftLandingRenderActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SoftLandingRenderActivity@SoftLandingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SoftLandingRenderActivity@SoftLandingTelemetry@@QEAA@XZ
    ~SoftLandingRenderActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SoftLandingRenderActivity@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SoftLandingRenderActivity@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
