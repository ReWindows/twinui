#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace TabletModeControllerTelemetry {
class TMChangeListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TMChangeListener@TabletModeControllerTelemetry@@QEAAXH@Z
    void StartActivity(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TMChangeListener@TabletModeControllerTelemetry@@QEAA@XZ
    ~TMChangeListener();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TMChangeListener@TabletModeControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TMChangeListener@TabletModeControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TabletModeControllerTelemetry
