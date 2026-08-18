#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class Uncloak {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Uncloak@SingleViewExperienceTelemetry@@QEAA@XZ
    ~Uncloak();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Uncloak@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Uncloak@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
