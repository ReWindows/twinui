#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SingleViewExperienceTelemetry {
class CancelWaitForWindowReadyForPresentation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z
    void StartActivity(unsigned short const *, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ
    ~CancelWaitForWindowReadyForPresentation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
