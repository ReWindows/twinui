#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace NotesManagerTelemetry {
class IsScreenLocked {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@IsScreenLocked@NotesManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@IsScreenLocked@NotesManagerTelemetry@@QEAAXH@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1IsScreenLocked@NotesManagerTelemetry@@QEAA@XZ
    ~IsScreenLocked();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@IsScreenLocked@NotesManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@IsScreenLocked@NotesManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotesManagerTelemetry
