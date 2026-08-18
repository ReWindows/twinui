#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class ProcessItemClickDownEventActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProcessItemClickDownEventActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessItemClickDownEventActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~ProcessItemClickDownEventActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessItemClickDownEventActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessItemClickDownEventActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
