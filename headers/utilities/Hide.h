#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace SingleViewExperienceTelemetry {
class Hide {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Hide@SingleViewExperienceTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Hide@SingleViewExperienceTelemetry@@QEAA@XZ
    ~Hide();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Hide@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Hide@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
