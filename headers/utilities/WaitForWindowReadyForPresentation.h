#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace SingleViewExperienceTelemetry {
class WaitForWindowReadyForPresentation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void Stop(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAA@XZ
    ~WaitForWindowReadyForPresentation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
