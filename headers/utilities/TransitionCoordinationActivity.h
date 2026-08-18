#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace TransitionCoordinatorTelemetry {
class TransitionCoordinationActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TransitionCoordinationActivity@TransitionCoordinatorTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@TransitionCoordinationActivity@TransitionCoordinatorTelemetry@@QEAAXW4StopCoordinationReason@2@@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionCoordinationActivity@TransitionCoordinatorTelemetry@@QEAA@XZ
    ~TransitionCoordinationActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TransitionCoordinationActivity@TransitionCoordinatorTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TransitionCoordinationActivity@TransitionCoordinatorTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TransitionCoordinatorTelemetry
