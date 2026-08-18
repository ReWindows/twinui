#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class BubbleDismiss {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BubbleDismiss@SoftLandingTelemetry@@QEAAXPEBGI@Z
    void StartActivity(unsigned short const *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BubbleDismiss@SoftLandingTelemetry@@QEAA@XZ
    ~BubbleDismiss();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BubbleDismiss@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BubbleDismiss@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
