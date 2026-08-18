#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace PWSExperienceManagerTelemetry {
class CustomApplicationLaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CustomApplicationLaunch@PWSExperienceManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CustomApplicationLaunch@PWSExperienceManagerTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CustomApplicationLaunch@PWSExperienceManagerTelemetry@@QEAA@XZ
    ~CustomApplicationLaunch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CustomApplicationLaunch@PWSExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CustomApplicationLaunch@PWSExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PWSExperienceManagerTelemetry
