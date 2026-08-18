#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace QuietHoursServiceTraceProvider {
class OnRudeWindowStateChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnRudeWindowStateChange@QuietHoursServiceTraceProvider@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnRudeWindowStateChange@QuietHoursServiceTraceProvider@@QEAA@XZ
    ~OnRudeWindowStateChange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnRudeWindowStateChange@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnRudeWindowStateChange@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
