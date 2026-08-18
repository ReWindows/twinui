#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace AutoplayUITelemetry {
class NonvolumeAutoplay {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@NonvolumeAutoplay@AutoplayUITelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@NonvolumeAutoplay@AutoplayUITelemetry@@QEAAXPEBG_N1@Z
    void Stop(unsigned short const *, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NonvolumeAutoplay@AutoplayUITelemetry@@QEAA@XZ
    ~NonvolumeAutoplay();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@NonvolumeAutoplay@AutoplayUITelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@NonvolumeAutoplay@AutoplayUITelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AutoplayUITelemetry
