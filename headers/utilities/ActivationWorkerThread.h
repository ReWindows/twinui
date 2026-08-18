#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ApplicationHostTelemetry {
class ActivationWorkerThread {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivationWorkerThread@ApplicationHostTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivationWorkerThread@ApplicationHostTelemetry@@QEAA@XZ
    ~ActivationWorkerThread();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivationWorkerThread@ApplicationHostTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivationWorkerThread@ApplicationHostTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationHostTelemetry
