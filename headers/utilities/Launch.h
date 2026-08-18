#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class Launch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Launch@SingleViewExperienceTelemetry@@QEAAXPEBG0PEAX@Z
    void StartActivity(unsigned short const *, unsigned short const *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ
    ~Launch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Launch@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Launch@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
