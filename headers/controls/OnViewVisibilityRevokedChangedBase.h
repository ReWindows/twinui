#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class OnViewVisibilityRevokedChangedBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnViewVisibilityRevokedChangedBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnViewVisibilityRevokedChangedBase@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
