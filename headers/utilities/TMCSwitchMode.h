#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace TabletModeControllerTelemetry {
class TMCSwitchMode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TMCSwitchMode@TabletModeControllerTelemetry@@QEAAXHHIPEBG_NI@Z
    void StartActivity(int, int, unsigned int, unsigned short const *, bool, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TMCSwitchMode@TabletModeControllerTelemetry@@QEAA@XZ
    ~TMCSwitchMode();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TMCSwitchMode@TabletModeControllerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TMCSwitchMode@TabletModeControllerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace TabletModeControllerTelemetry
