#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class OnAppidChangedActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnAppidChangedActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnAppidChangedActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~OnAppidChangedActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnAppidChangedActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnAppidChangedActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
