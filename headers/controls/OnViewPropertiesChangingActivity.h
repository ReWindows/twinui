#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class OnViewPropertiesChangingActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnViewPropertiesChangingActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnViewPropertiesChangingActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~OnViewPropertiesChangingActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnViewPropertiesChangingActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnViewPropertiesChangingActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
