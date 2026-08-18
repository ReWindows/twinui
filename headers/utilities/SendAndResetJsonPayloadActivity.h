#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class SendAndResetJsonPayloadActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SendAndResetJsonPayloadActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SendAndResetJsonPayloadActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~SendAndResetJsonPayloadActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SendAndResetJsonPayloadActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SendAndResetJsonPayloadActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
