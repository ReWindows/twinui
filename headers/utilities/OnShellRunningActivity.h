#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace PlayToReceiverManagerTelemetry {
class OnShellRunningActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnShellRunningActivity@PlayToReceiverManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnShellRunningActivity@PlayToReceiverManagerTelemetry@@QEAAX_NJ@Z
    void Stop(bool, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnShellRunningActivity@PlayToReceiverManagerTelemetry@@QEAA@XZ
    ~OnShellRunningActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnShellRunningActivity@PlayToReceiverManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnShellRunningActivity@PlayToReceiverManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PlayToReceiverManagerTelemetry
