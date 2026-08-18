#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace AssignedAccessTelemetry {
class AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded@AssignedAccessTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded@AssignedAccessTelemetry@@QEAA@XZ
    ~AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded@AssignedAccessTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@AssignedAccessControllerProxy_ApplyAssignedAccessIfNeeded@AssignedAccessTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AssignedAccessTelemetry
