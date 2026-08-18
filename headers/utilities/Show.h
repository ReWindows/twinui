#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SingleViewExperienceTelemetry {
class Show {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Show@SingleViewExperienceTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Show@SingleViewExperienceTelemetry@@QEAA@XZ
    ~Show();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Show@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Show@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
