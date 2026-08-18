#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class TabletModeControllerTelemetry {
public:
    class SetMode;
    class TMCSwitchMode;
    class TMChangeListener;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TabletModeControllerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TMCDeleteShellModeTriggerSetting_@TabletModeControllerTelemetry@@QEAAXXZ
    void TMCDeleteShellModeTriggerSetting_();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeCSMEvent_@TabletModeControllerTelemetry@@QEAAXW4CSMState@@0W4TabletModeState@@1W4_TMCTRIGGER@@W4SHELLMODE_TRIGGER_CONFIG@@H@Z
    void TabletModeCSMEvent_(int, int, int, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeSettings_@TabletModeControllerTelemetry@@QEAAXW4SHELLMODE_PREFERENCE@@W4SHELLMODE_TRIGGER_CONFIG@@_N@Z
    void TabletModeSettings_(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletPostureWnfEventRaised_@TabletModeControllerTelemetry@@QEAAX_N@Z
    void TabletPostureWnfEventRaised_(bool);
};
