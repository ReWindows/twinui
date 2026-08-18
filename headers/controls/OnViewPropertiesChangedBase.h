#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class OnViewPropertiesChangedBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnViewPropertiesChangedBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnViewPropertiesChangedBase@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
