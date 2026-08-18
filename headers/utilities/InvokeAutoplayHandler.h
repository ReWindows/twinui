#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace AutoplayUITelemetry {
class InvokeAutoplayHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@InvokeAutoplayHandler@AutoplayUITelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@InvokeAutoplayHandler@AutoplayUITelemetry@@QEAAXPEBGJ_N1@Z
    void Stop(unsigned short const *, long, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InvokeAutoplayHandler@AutoplayUITelemetry@@QEAA@XZ
    ~InvokeAutoplayHandler();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@InvokeAutoplayHandler@AutoplayUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@InvokeAutoplayHandler@AutoplayUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoplayUITelemetry
