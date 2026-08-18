#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace QuietHoursServiceTraceProvider {
class SubscribeToAllMonitors {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SubscribeToAllMonitors@QuietHoursServiceTraceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubscribeToAllMonitors@QuietHoursServiceTraceProvider@@QEAA@XZ
    ~SubscribeToAllMonitors();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SubscribeToAllMonitors@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SubscribeToAllMonitors@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
