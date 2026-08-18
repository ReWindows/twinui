#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class PickerProviderRemoveFile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PickerProviderRemoveFile@FilePickerTelemetryDesktop@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PickerProviderRemoveFile@FilePickerTelemetryDesktop@@QEAA@XZ
    ~PickerProviderRemoveFile();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PickerProviderRemoveFile@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PickerProviderRemoveFile@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
