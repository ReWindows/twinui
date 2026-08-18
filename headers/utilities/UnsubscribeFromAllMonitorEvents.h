#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace QuietHoursServiceTraceProvider {
class UnsubscribeFromAllMonitorEvents {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnsubscribeFromAllMonitorEvents@QuietHoursServiceTraceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnsubscribeFromAllMonitorEvents@QuietHoursServiceTraceProvider@@QEAA@XZ
    ~UnsubscribeFromAllMonitorEvents();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnsubscribeFromAllMonitorEvents@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnsubscribeFromAllMonitorEvents@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
