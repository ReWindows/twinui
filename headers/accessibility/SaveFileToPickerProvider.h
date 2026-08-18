#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace FilePickerTelemetryDesktop {
class SaveFileToPickerProvider {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@SaveFileToPickerProvider@FilePickerTelemetryDesktop@@QEAAXJ@Z
    void GetDeferral(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutTargetFile@SaveFileToPickerProvider@FilePickerTelemetryDesktop@@QEAAXJ@Z
    void PutTargetFile(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SaveFileToPickerProvider@FilePickerTelemetryDesktop@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SaveFileToPickerProvider@FilePickerTelemetryDesktop@@QEAA@XZ
    ~SaveFileToPickerProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SaveFileToPickerProvider@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SaveFileToPickerProvider@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
