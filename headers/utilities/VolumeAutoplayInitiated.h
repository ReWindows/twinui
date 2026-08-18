#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace AutoplayUITelemetry {
class VolumeAutoplayInitiated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VolumeAutoplayInitiated@AutoplayUITelemetry@@QEAAXPEBG_NK@Z
    void StartActivity(unsigned short const *, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@VolumeAutoplayInitiated@AutoplayUITelemetry@@QEAAX_N0@Z
    void Stop(bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VolumeAutoplayInitiated@AutoplayUITelemetry@@QEAA@XZ
    ~VolumeAutoplayInitiated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VolumeAutoplayInitiated@AutoplayUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VolumeAutoplayInitiated@AutoplayUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoplayUITelemetry
