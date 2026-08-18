#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ModalExperienceManagerTelemetry {
class TransitionToHolographicActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TransitionToHolographicActivity@ModalExperienceManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionToHolographicActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~TransitionToHolographicActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TransitionToHolographicActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TransitionToHolographicActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
