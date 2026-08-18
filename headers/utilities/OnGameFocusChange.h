#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace QuietHoursServiceTraceProvider {
class OnGameFocusChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnGameFocusChange@QuietHoursServiceTraceProvider@@QEAAX_N@Z
    void StartActivity(bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnGameFocusChange@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnGameFocusChange@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
