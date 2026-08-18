#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace NotesManagerTelemetry {
class UnRegisterCallback {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UnRegisterCallback@NotesManagerTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UnRegisterCallback@NotesManagerTelemetry@@QEAA@XZ
    ~UnRegisterCallback();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UnRegisterCallback@NotesManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UnRegisterCallback@NotesManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotesManagerTelemetry
