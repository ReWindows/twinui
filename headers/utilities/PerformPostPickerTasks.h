#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace FilePickerTelemetryDesktop {
class PerformPostPickerTasks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PerformPostPickerTasks@FilePickerTelemetryDesktop@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@PerformPostPickerTasks@FilePickerTelemetryDesktop@@QEAAX_NII@Z
    void Stop(bool, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PerformPostPickerTasks@FilePickerTelemetryDesktop@@QEAA@XZ
    ~PerformPostPickerTasks();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PerformPostPickerTasks@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PerformPostPickerTasks@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
