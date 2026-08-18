#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace InputDial::InputDialTelemetry {
class FindApplicationControllerActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@FindApplicationControllerActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@FindApplicationControllerActivity@InputDialTelemetry@InputDial@@QEAAXPEAUHWND__@@0_N0@Z
    void Stop(HWND__*, HWND__*, bool, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FindApplicationControllerActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~FindApplicationControllerActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@FindApplicationControllerActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@FindApplicationControllerActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
