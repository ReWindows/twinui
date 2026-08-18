#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class PickerProviderAddFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PickerProviderAddFile@FilePickerTelemetryDesktop@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PickerProviderAddFile@FilePickerTelemetryDesktop@@QEAA@XZ
    ~PickerProviderAddFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PickerProviderAddFile@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PickerProviderAddFile@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
