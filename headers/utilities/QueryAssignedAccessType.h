#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace WindowMessageServiceTelemetry {
class QueryAssignedAccessType {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@QueryAssignedAccessType@WindowMessageServiceTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QueryAssignedAccessType@WindowMessageServiceTelemetry@@QEAA@XZ
    ~QueryAssignedAccessType();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@QueryAssignedAccessType@WindowMessageServiceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@QueryAssignedAccessType@WindowMessageServiceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace WindowMessageServiceTelemetry
