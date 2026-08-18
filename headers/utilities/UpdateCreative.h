#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class UpdateCreative {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateCreative@SoftLandingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateCreative@SoftLandingTelemetry@@QEAA@XZ
    ~UpdateCreative();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateCreative@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateCreative@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
