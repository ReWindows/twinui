#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class InitializeDisplayChangeNotificationActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InitializeDisplayChangeNotificationActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InitializeDisplayChangeNotificationActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~InitializeDisplayChangeNotificationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InitializeDisplayChangeNotificationActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InitializeDisplayChangeNotificationActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
