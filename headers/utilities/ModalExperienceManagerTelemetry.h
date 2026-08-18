#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class ModalExperienceManagerTelemetry {
public:
    class ActivateExperienceActivity;
    class PresentationChangeActivity;
    class ShowModalActivity;
    class SubscribeToServicesActivity;
    class TransitionToHolographicActivity;
    class ViewChangeActivity;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ModalExperienceManagerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceDebugExperiencMsg_@ModalExperienceManagerTelemetry@@QEAAXPEBG_K@Z
    void TraceDebugExperiencMsg_(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceDebugMsg_@ModalExperienceManagerTelemetry@@QEAAXPEBG@Z
    void TraceDebugMsg_(unsigned short const *);
};
