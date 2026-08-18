#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SingleViewExperienceTelemetry {
class OnEventQueued {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnEventQueued@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z
    void StartActivity(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnEventQueued@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnEventQueued();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnEventQueued@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnEventQueued@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
