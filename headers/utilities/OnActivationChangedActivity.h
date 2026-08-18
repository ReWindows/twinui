#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class OnActivationChangedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnActivationChangedActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnActivationChangedActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~OnActivationChangedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnActivationChangedActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnActivationChangedActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
