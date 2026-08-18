#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace AppCloseTelemetry {
class ShellAppCrusherCloseApp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShellAppCrusherCloseApp@AppCloseTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShellAppCrusherCloseApp@AppCloseTelemetry@@QEAAXJ_N@Z
    void Stop(long, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellAppCrusherCloseApp@AppCloseTelemetry@@QEAA@XZ
    ~ShellAppCrusherCloseApp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShellAppCrusherCloseApp@AppCloseTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShellAppCrusherCloseApp@AppCloseTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppCloseTelemetry
