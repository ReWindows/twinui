#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ModalExperienceManagerTelemetry {
class PresentationChangeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadyForPresentation@PresentationChangeActivity@ModalExperienceManagerTelemetry@@QEAAXE@Z
    void ReadyForPresentation(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PresentationChangeActivity@ModalExperienceManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PresentationChangeActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~PresentationChangeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PresentationChangeActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PresentationChangeActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
