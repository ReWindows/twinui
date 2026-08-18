#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class OnNewNotificationActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnNewNotificationActivity@SoftLandingTelemetry@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnNewNotificationActivity@SoftLandingTelemetry@@QEAA@XZ
    ~OnNewNotificationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnNewNotificationActivity@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnNewNotificationActivity@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
