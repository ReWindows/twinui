#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SoftLandingTelemetry {
class BubbleError {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@BubbleError@SoftLandingTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BubbleError@SoftLandingTelemetry@@QEAA@XZ
    ~BubbleError();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@BubbleError@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@BubbleError@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
