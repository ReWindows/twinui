#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace CreativeFramework::Logging::ShellPlacementTelemetry {
class WindowsTipPresentActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WindowsTipPresentActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowsTipPresentActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ
    ~WindowsTipPresentActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WindowsTipPresentActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WindowsTipPresentActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CreativeFramework::Logging::ShellPlacementTelemetry
