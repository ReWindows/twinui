#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace PlayToReceiverManagerTelemetry {
class SubscribeToShellReadyWnfActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SubscribeToShellReadyWnfActivity@PlayToReceiverManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@SubscribeToShellReadyWnfActivity@PlayToReceiverManagerTelemetry@@QEAAX_N@Z
    void Stop(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubscribeToShellReadyWnfActivity@PlayToReceiverManagerTelemetry@@QEAA@XZ
    ~SubscribeToShellReadyWnfActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SubscribeToShellReadyWnfActivity@PlayToReceiverManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SubscribeToShellReadyWnfActivity@PlayToReceiverManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PlayToReceiverManagerTelemetry
