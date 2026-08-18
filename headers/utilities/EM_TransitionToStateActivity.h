#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
namespace SoftLandingTelemetry {
class EM_TransitionToStateActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoOp_SameStateTransition@EM_TransitionToStateActivity@SoftLandingTelemetry@@QEAAXXZ
    void NoOp_SameStateTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EM_TransitionToStateActivity@SoftLandingTelemetry@@QEAAXII@Z
    void StartActivity(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewHidden@EM_TransitionToStateActivity@SoftLandingTelemetry@@QEAAXXZ
    void ViewHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewShown@EM_TransitionToStateActivity@SoftLandingTelemetry@@QEAAXXZ
    void ViewShown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EM_TransitionToStateActivity@SoftLandingTelemetry@@QEAA@XZ
    ~EM_TransitionToStateActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EM_TransitionToStateActivity@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EM_TransitionToStateActivity@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
