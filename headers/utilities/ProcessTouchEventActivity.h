#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class ProcessTouchEventActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProcessTouchEventActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessTouchEventActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~ProcessTouchEventActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessTouchEventActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessTouchEventActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
