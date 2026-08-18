#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ProjectionManagerTelemetry {
class _DoProjectionTaskActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@_DoProjectionTaskActivity@ProjectionManagerTelemetry@@QEAAXW4PROJECTION_TASK_TYPE@@PEAUHWND__@@1PEBG2@Z
    void StartActivity(int, HWND__*, HWND__*, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_DoProjectionTaskActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~_DoProjectionTaskActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@_DoProjectionTaskActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@_DoProjectionTaskActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
