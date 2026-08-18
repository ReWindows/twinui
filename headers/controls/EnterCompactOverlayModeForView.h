#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace OverlayModeTelemetry {
class EnterCompactOverlayModeForView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EnterCompactOverlayModeForView@OverlayModeTelemetry@@QEAAXPEAUIApplicationView@@UtagSIZE@@W4CompactOverlayEnterStyle@2@@Z
    void StartActivity(IApplicationView *, tagSIZE, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterCompactOverlayModeForView@OverlayModeTelemetry@@QEAA@XZ
    ~EnterCompactOverlayModeForView();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EnterCompactOverlayModeForView@OverlayModeTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EnterCompactOverlayModeForView@OverlayModeTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace OverlayModeTelemetry
