#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace QuietHoursServiceTraceProvider {
class RaiseWnfIfStateChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RaiseWnfIfStateChanged@QuietHoursServiceTraceProvider@@QEAAXI@Z
    void StartActivity(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@RaiseWnfIfStateChanged@QuietHoursServiceTraceProvider@@QEAAXI_N00@Z
    void Stop(unsigned int, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RaiseWnfIfStateChanged@QuietHoursServiceTraceProvider@@QEAA@XZ
    ~RaiseWnfIfStateChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RaiseWnfIfStateChanged@QuietHoursServiceTraceProvider@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RaiseWnfIfStateChanged@QuietHoursServiceTraceProvider@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace QuietHoursServiceTraceProvider
