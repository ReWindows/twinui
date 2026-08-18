#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SingleViewExperienceTelemetry {
class OnViewCreatedBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnViewCreatedBase@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnViewCreatedBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnViewCreatedBase@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
