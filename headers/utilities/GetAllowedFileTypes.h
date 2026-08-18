#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class GetAllowedFileTypes {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetAllowedFileTypes@FilePickerTelemetryDesktop@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetAllowedFileTypes@FilePickerTelemetryDesktop@@QEAA@XZ
    ~GetAllowedFileTypes();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetAllowedFileTypes@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetAllowedFileTypes@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
