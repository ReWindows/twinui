#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class PersistLastLocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PersistLastLocation@FilePickerTelemetryDesktop@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PersistLastLocation@FilePickerTelemetryDesktop@@QEAA@XZ
    ~PersistLastLocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PersistLastLocation@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PersistLastLocation@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
