#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace TabletModeControllerTelemetry {
class SetMode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetMode@TabletModeControllerTelemetry@@QEAAXHH@Z
    void StartActivity(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetMode@TabletModeControllerTelemetry@@QEAA@XZ
    ~SetMode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetMode@TabletModeControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetMode@TabletModeControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TabletModeControllerTelemetry
