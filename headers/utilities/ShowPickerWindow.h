#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace FilePickerTelemetryDesktop {
class ShowPickerWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivityWithCorrelationVector@ShowPickerWindow@FilePickerTelemetryDesktop@@QEAAXPEBD_N1II@Z
    void StartActivityWithCorrelationVector(char const *, bool, bool, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowPickerWindow@FilePickerTelemetryDesktop@@QEAA@XZ
    ~ShowPickerWindow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowPickerWindow@FilePickerTelemetryDesktop@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowPickerWindow@FilePickerTelemetryDesktop@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace FilePickerTelemetryDesktop
