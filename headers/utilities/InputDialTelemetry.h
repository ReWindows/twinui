#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
namespace InputDial {
class InputDialTelemetry {
public:
    class DeleteFontFileCacheActivity;
    class FindApplicationControllerActivity;
    class InitializeDisplayChangeNotificationActivity;
    class InitializeGlobalToolsActivity;
    class InitializeMessageServiceEventsSourceActivity;
    class InvokeCustomInputDialMenuItem;
    class MenuActivationToShownActivity;
    class MenuDeactivationToHiddenActivity;
    class OnActivationChangedActivity;
    class OnAppidChangedActivity;
    class OnViewPropertiesChangingActivity;
    class PopulateMenuActivity;
    class ProcessItemClickDownEventActivity;
    class ProcessItemClickUpEventActivity;
    class ProcessRotationEventActivity;
    class ProcessTouchEventActivity;
    class SendAndResetJsonPayloadActivity;
    class SendReactivateEventActivity;
    class StartDeviceListenerActivity;
    class VolumeChangeActivity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScreenEnd@InputDialTelemetry@InputDial@@SAXXZ
    static void OnScreenEnd();
};
} // namespace InputDial
