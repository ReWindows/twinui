#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace InputDial::InputDialTelemetry {
class MenuDeactivationToHiddenActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@MenuDeactivationToHiddenActivity@InputDialTelemetry@InputDial@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuDeactivationToHiddenActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~MenuDeactivationToHiddenActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@MenuDeactivationToHiddenActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@MenuDeactivationToHiddenActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
