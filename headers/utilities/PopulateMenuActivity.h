#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class PopulateMenuActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PopulateMenuActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PopulateMenuActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~PopulateMenuActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PopulateMenuActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PopulateMenuActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
