#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class WithdrawCreative {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WithdrawCreative@SoftLandingTelemetry@@QEAAXPEBG_N@Z
    void StartActivity(unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WithdrawCreative@SoftLandingTelemetry@@QEAA@XZ
    ~WithdrawCreative();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WithdrawCreative@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WithdrawCreative@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
