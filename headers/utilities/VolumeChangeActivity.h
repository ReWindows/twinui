#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class VolumeChangeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VolumeChangeActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VolumeChangeActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~VolumeChangeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VolumeChangeActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VolumeChangeActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
