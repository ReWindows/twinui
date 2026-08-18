#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class StartDeviceListenerActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@StartDeviceListenerActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartDeviceListenerActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~StartDeviceListenerActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@StartDeviceListenerActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@StartDeviceListenerActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
