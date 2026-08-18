#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class SendReactivateEventActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendReactivateEventActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendReactivateEventActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~SendReactivateEventActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendReactivateEventActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendReactivateEventActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
