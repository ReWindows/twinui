#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class InitializeMessageServiceEventsSourceActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializeMessageServiceEventsSourceActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializeMessageServiceEventsSourceActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~InitializeMessageServiceEventsSourceActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializeMessageServiceEventsSourceActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializeMessageServiceEventsSourceActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
