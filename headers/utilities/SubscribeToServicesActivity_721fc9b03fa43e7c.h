#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ModalExperienceManagerTelemetry {
class SubscribeToServicesActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SubscribeToServicesActivity@ModalExperienceManagerTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SubscribeToServicesActivity@ModalExperienceManagerTelemetry@@QEAA@XZ
    ~SubscribeToServicesActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SubscribeToServicesActivity@ModalExperienceManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SubscribeToServicesActivity@ModalExperienceManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModalExperienceManagerTelemetry
