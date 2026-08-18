#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace AccessibilityDockTelemetry {
class UndockWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UndockWindow@AccessibilityDockTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UndockWindow@AccessibilityDockTelemetry@@QEAA@XZ
    ~UndockWindow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UndockWindow@AccessibilityDockTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UndockWindow@AccessibilityDockTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AccessibilityDockTelemetry
