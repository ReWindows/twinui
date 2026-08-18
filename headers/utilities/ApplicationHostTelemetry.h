#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class ApplicationHostTelemetry {
public:
    class ActivationWorkerThread;
    class HandleViewCreated;
    class HandleViewDestroyed;
    class OnClientWindowReadyForPresentationChanged;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationHost_AppWindowActivated@ApplicationHostTelemetry@@SAXXZ
    static void ApplicationHost_AppWindowActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationHost_OnActivationEnd@ApplicationHostTelemetry@@SAXXZ
    static void ApplicationHost_OnActivationEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationHost_SignalToSplashScreenAppReady@ApplicationHostTelemetry@@SAXXZ
    static void ApplicationHost_SignalToSplashScreenAppReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayingSplashScrenTimerDueToCS@ApplicationHostTelemetry@@SAXXZ
    static void DelayingSplashScrenTimerDueToCS();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumingSplashScrenTimerDueToCSExit@ApplicationHostTelemetry@@SAXXZ
    static void ResumingSplashScrenTimerDueToCSExit();
};
