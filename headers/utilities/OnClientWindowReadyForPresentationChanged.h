#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ApplicationHostTelemetry {
class OnClientWindowReadyForPresentationChanged {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnClientWindowReadyForPresentationChanged@ApplicationHostTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnClientWindowReadyForPresentationChanged@ApplicationHostTelemetry@@QEAA@XZ
    ~OnClientWindowReadyForPresentationChanged();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnClientWindowReadyForPresentationChanged@ApplicationHostTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnClientWindowReadyForPresentationChanged@ApplicationHostTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ApplicationHostTelemetry
