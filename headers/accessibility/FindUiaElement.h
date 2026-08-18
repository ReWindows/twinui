#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class FindUiaElement {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindUiaElement@SoftLandingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindUiaElement@SoftLandingTelemetry@@QEAA@XZ
    ~FindUiaElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindUiaElement@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindUiaElement@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
