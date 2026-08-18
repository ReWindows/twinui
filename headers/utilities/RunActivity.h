#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace PlayToReceiverManagerTelemetry {
class RunActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@RunActivity@PlayToReceiverManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@RunActivity@PlayToReceiverManagerTelemetry@@QEAAXJ_N0@Z
    void Stop(long, bool, bool);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@RunActivity@PlayToReceiverManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@RunActivity@PlayToReceiverManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PlayToReceiverManagerTelemetry
