#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class ProcessItemClickUpEventActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ProcessItemClickUpEventActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProcessItemClickUpEventActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~ProcessItemClickUpEventActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ProcessItemClickUpEventActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ProcessItemClickUpEventActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
