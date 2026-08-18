#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace NotesManagerTraceLogging {
class ReLaunchApplicationIfPreviouslyOpen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ReLaunchApplicationIfPreviouslyOpen@NotesManagerTraceLogging@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ReLaunchApplicationIfPreviouslyOpen@NotesManagerTraceLogging@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReLaunchApplicationIfPreviouslyOpen@NotesManagerTraceLogging@@QEAA@XZ
    ~ReLaunchApplicationIfPreviouslyOpen();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ReLaunchApplicationIfPreviouslyOpen@NotesManagerTraceLogging@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ReLaunchApplicationIfPreviouslyOpen@NotesManagerTraceLogging@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace NotesManagerTraceLogging
