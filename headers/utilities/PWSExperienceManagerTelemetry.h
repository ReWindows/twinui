#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class PWSExperienceManagerTelemetry {
public:
    class CustomApplicationLaunch;
    class NotesApplicationLaunch;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkWorkspace_LightDismissEvent@PWSExperienceManagerTelemetry@@SAXXZ
    static void InkWorkspace_LightDismissEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InkWorkspace_MenuTimeoutEvent@PWSExperienceManagerTelemetry@@SAXXZ
    static void InkWorkspace_MenuTimeoutEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PenMenu_LaunchInitiated@PWSExperienceManagerTelemetry@@SAXXZ
    static void PenMenu_LaunchInitiated();
};
