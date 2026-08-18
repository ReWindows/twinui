#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class InitializeGlobalToolsActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializeGlobalToolsActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializeGlobalToolsActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~InitializeGlobalToolsActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializeGlobalToolsActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializeGlobalToolsActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
