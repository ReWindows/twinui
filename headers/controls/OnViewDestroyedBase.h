#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class OnViewDestroyedBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnViewDestroyedBase@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnViewDestroyedBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnViewDestroyedBase@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
