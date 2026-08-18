#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace NotesManagerTelemetry {
class RegisterCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RegisterCallback@NotesManagerTelemetry@@QEAAXPEAX@Z
    void StartActivity(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@RegisterCallback@NotesManagerTelemetry@@QEAAXK@Z
    void Stop(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegisterCallback@NotesManagerTelemetry@@QEAA@XZ
    ~RegisterCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RegisterCallback@NotesManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RegisterCallback@NotesManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotesManagerTelemetry
