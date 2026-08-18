#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ModalExperienceManagerTelemetry {
class ViewChangeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ViewChangeActivity@ModalExperienceManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewEvent@ViewChangeActivity@ModalExperienceManagerTelemetry@@QEAAXK@Z
    void ViewEvent(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewChangeActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~ViewChangeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ViewChangeActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ViewChangeActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
