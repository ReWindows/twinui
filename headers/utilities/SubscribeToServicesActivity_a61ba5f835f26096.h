#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace MSAWindowManagerTelemetry {
class SubscribeToServicesActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SubscribeToServicesActivity@MSAWindowManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubscribeToServicesActivity@MSAWindowManagerTelemetry@@QEAA@XZ
    ~SubscribeToServicesActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SubscribeToServicesActivity@MSAWindowManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SubscribeToServicesActivity@MSAWindowManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAWindowManagerTelemetry
