#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class NotificationInvoke {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotificationInvoke@SoftLandingTelemetry@@QEAAXPEBG_N@Z
    void StartActivity(unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotificationInvoke@SoftLandingTelemetry@@QEAA@XZ
    ~NotificationInvoke();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotificationInvoke@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotificationInvoke@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
