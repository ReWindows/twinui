#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace BackTelemetry {
class InAppBackInvocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InAppBackInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void StartActivity(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InAppBackInvocation@BackTelemetry@@QEAAXW4InAppBackResponse@@@Z
    void Stop(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InAppBackInvocation@BackTelemetry@@QEAA@XZ
    ~InAppBackInvocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InAppBackInvocation@BackTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InAppBackInvocation@BackTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace BackTelemetry
