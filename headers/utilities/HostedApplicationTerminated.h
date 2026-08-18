#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class HostedApplicationTerminated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HostedApplicationTerminated@FilePickerTelemetryDesktop@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplicationTerminated@FilePickerTelemetryDesktop@@QEAA@XZ
    ~HostedApplicationTerminated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HostedApplicationTerminated@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HostedApplicationTerminated@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
