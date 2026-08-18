#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class PresentCreative {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PresentCreative@SoftLandingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PresentCreative@SoftLandingTelemetry@@QEAA@XZ
    ~PresentCreative();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PresentCreative@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PresentCreative@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
