#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ModalExperienceManagerTelemetry {
class ActivateExperienceActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ActivateExperienceActivity@ModalExperienceManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActivateExperienceActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~ActivateExperienceActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ActivateExperienceActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ActivateExperienceActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
