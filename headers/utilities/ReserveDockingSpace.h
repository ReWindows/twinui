#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace AccessibilityDockTelemetry {
class ReserveDockingSpace {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReserveDockingSpace@AccessibilityDockTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReserveDockingSpace@AccessibilityDockTelemetry@@QEAA@XZ
    ~ReserveDockingSpace();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReserveDockingSpace@AccessibilityDockTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReserveDockingSpace@AccessibilityDockTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AccessibilityDockTelemetry
