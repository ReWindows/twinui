#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class InvokeCustomInputDialMenuItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InvokeCustomInputDialMenuItem@InputDialTelemetry@InputDial@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokeCustomInputDialMenuItem@InputDialTelemetry@InputDial@@QEAA@XZ
    ~InvokeCustomInputDialMenuItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InvokeCustomInputDialMenuItem@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InvokeCustomInputDialMenuItem@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
