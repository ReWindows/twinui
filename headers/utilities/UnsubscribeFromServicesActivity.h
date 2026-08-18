#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace MSAWindowManagerTelemetry {
class UnsubscribeFromServicesActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnsubscribeFromServicesActivity@MSAWindowManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnsubscribeFromServicesActivity@MSAWindowManagerTelemetry@@QEAA@XZ
    ~UnsubscribeFromServicesActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnsubscribeFromServicesActivity@MSAWindowManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnsubscribeFromServicesActivity@MSAWindowManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace MSAWindowManagerTelemetry
