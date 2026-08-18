#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class DoProjectionTaskActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DoProjectionTaskActivity@ProjectionManagerTelemetry@@QEAAXIPEAUHWND__@@0PEBG1@Z
    void StartActivity(unsigned int, HWND__*, HWND__*, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DoProjectionTaskActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~DoProjectionTaskActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DoProjectionTaskActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DoProjectionTaskActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
