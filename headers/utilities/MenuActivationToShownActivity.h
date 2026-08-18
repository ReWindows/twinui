#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace InputDial::InputDialTelemetry {
class MenuActivationToShownActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MenuActivationToShownActivity@InputDialTelemetry@InputDial@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuActivationToShownActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~MenuActivationToShownActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MenuActivationToShownActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MenuActivationToShownActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
