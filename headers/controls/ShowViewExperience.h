#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class ShowViewExperience {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellNotReady@ShowViewExperience@SoftLandingTelemetry@@QEAAXXZ
    void ShellNotReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowViewExperience@SoftLandingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowViewExperience@SoftLandingTelemetry@@QEAA@XZ
    ~ShowViewExperience();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowViewExperience@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowViewExperience@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
