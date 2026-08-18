#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace AccessibilityDockTelemetry {
class DockWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DockWindow@AccessibilityDockTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DockWindow@AccessibilityDockTelemetry@@QEAA@XZ
    ~DockWindow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DockWindow@AccessibilityDockTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DockWindow@AccessibilityDockTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AccessibilityDockTelemetry
