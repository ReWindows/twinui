#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace NotesManagerTraceLogging {
class UpdateNotesApplicationName {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@UpdateNotesApplicationName@NotesManagerTraceLogging@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UpdateNotesApplicationName@NotesManagerTraceLogging@@QEAA@XZ
    ~UpdateNotesApplicationName();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@UpdateNotesApplicationName@NotesManagerTraceLogging@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@UpdateNotesApplicationName@NotesManagerTraceLogging@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotesManagerTraceLogging
