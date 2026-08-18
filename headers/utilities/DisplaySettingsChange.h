#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace QuietHoursServiceTraceProvider {
class DisplaySettingsChange {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DisplaySettingsChange@QuietHoursServiceTraceProvider@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DisplaySettingsChange@QuietHoursServiceTraceProvider@@QEAA@XZ
    ~DisplaySettingsChange();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DisplaySettingsChange@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DisplaySettingsChange@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
