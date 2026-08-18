#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace AutoplayUITelemetry {
class VolumeAutoplaySniffComplete {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@VolumeAutoplaySniffComplete@AutoplayUITelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@VolumeAutoplaySniffComplete@AutoplayUITelemetry@@QEAAXPEBG_N1@Z
    void Stop(unsigned short const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VolumeAutoplaySniffComplete@AutoplayUITelemetry@@QEAA@XZ
    ~VolumeAutoplaySniffComplete();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@VolumeAutoplaySniffComplete@AutoplayUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@VolumeAutoplaySniffComplete@AutoplayUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoplayUITelemetry
