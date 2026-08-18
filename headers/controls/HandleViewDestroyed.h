#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ApplicationHostTelemetry {
class HandleViewDestroyed {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandleViewDestroyed@ApplicationHostTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandleViewDestroyed@ApplicationHostTelemetry@@QEAA@XZ
    ~HandleViewDestroyed();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandleViewDestroyed@ApplicationHostTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandleViewDestroyed@ApplicationHostTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationHostTelemetry
