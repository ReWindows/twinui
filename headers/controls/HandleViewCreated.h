#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ApplicationHostTelemetry {
class HandleViewCreated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandleViewCreated@ApplicationHostTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandleViewCreated@ApplicationHostTelemetry@@QEAA@XZ
    ~HandleViewCreated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandleViewCreated@ApplicationHostTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandleViewCreated@ApplicationHostTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationHostTelemetry
