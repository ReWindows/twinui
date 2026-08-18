#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ModalExperienceManagerTelemetry {
class ShowModalActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShowModalActivity@ModalExperienceManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShowModalActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~ShowModalActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShowModalActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShowModalActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
