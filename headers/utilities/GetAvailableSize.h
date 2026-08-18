#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace AccessibilityDockTelemetry {
class GetAvailableSize {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAvailableSize@AccessibilityDockTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAvailableSize@AccessibilityDockTelemetry@@QEAA@XZ
    ~GetAvailableSize();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAvailableSize@AccessibilityDockTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAvailableSize@AccessibilityDockTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AccessibilityDockTelemetry
