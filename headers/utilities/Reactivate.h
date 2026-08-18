#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class Reactivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Reactivate@SingleViewExperienceTelemetry@@QEAAXPEBG00@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Reactivate@SingleViewExperienceTelemetry@@QEAA@XZ
    ~Reactivate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Reactivate@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Reactivate@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
