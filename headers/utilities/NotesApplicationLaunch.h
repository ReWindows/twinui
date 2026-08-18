#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace PWSExperienceManagerTelemetry {
class NotesApplicationLaunch {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NotesApplicationLaunch@PWSExperienceManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@NotesApplicationLaunch@PWSExperienceManagerTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotesApplicationLaunch@PWSExperienceManagerTelemetry@@QEAA@XZ
    ~NotesApplicationLaunch();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NotesApplicationLaunch@PWSExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NotesApplicationLaunch@PWSExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PWSExperienceManagerTelemetry
