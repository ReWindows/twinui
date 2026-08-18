#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 30 member(s).
class SoftLandingTelemetry {
public:
    class ActivatePresenter;
    class BubbleDismiss;
    class BubbleError;
    class EM_TransitionToStateActivity;
    class FindUiaElement;
    class NotificationInvoke;
    class OnNewNotificationActivity;
    class ParseXML;
    class PresentCreative;
    class ShowViewExperience;
    class SoftLandingManagerInitializeActivity;
    class SoftLandingRenderActivity;
    class UpdateCreative;
    class WithdrawCreative;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CourtesyEngineBlocked_@SoftLandingTelemetry@@QEBAXPEBGI@Z
    void CourtesyEngineBlocked_(unsigned short const *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyQuery@SoftLandingTelemetry@@SAXXZ
    static void EmptyQuery();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailedToFindRootWindow@SoftLandingTelemetry@@SAXXZ
    static void FailedToFindRootWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailedToFindUiaElement@SoftLandingTelemetry@@SAXXZ
    static void FailedToFindUiaElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FailedToGetUiaForWindow@SoftLandingTelemetry@@SAXXZ
    static void FailedToGetUiaForWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultipleRootElements@SoftLandingTelemetry@@SAXXZ
    static void MultipleRootElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoRootElement@SoftLandingTelemetry@@SAXXZ
    static void NoRootElement();
};
