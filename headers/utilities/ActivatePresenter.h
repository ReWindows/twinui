#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class ActivatePresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivatePresenter@SoftLandingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivatePresenter@SoftLandingTelemetry@@QEAA@XZ
    ~ActivatePresenter();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivatePresenter@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivatePresenter@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
