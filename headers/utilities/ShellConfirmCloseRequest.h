#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace AppCloseTelemetry {
class ShellConfirmCloseRequest {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShellConfirmCloseRequest@AppCloseTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellConfirmCloseRequest@AppCloseTelemetry@@QEAA@XZ
    ~ShellConfirmCloseRequest();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShellConfirmCloseRequest@AppCloseTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShellConfirmCloseRequest@AppCloseTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppCloseTelemetry
