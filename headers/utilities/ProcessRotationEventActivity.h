#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class ProcessRotationEventActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProcessRotationEventActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessRotationEventActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~ProcessRotationEventActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessRotationEventActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessRotationEventActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
