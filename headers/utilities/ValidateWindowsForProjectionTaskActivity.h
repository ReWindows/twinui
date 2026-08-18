#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ProjectionManagerTelemetry {
class _ValidateWindowsForProjectionTaskActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@_ValidateWindowsForProjectionTaskActivity@ProjectionManagerTelemetry@@QEAAXIPEAUHWND__@@0@Z
    void StartActivity(unsigned int, HWND__*, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1_ValidateWindowsForProjectionTaskActivity@ProjectionManagerTelemetry@@QEAA@XZ
    ~_ValidateWindowsForProjectionTaskActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@_ValidateWindowsForProjectionTaskActivity@ProjectionManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@_ValidateWindowsForProjectionTaskActivity@ProjectionManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ProjectionManagerTelemetry
