#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class ChromeControlsTelemetryImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChromeControlsInvokeAppBar_@ChromeControlsTelemetryImpl@@QEBAXPEAUIImmersiveApplication@@HW4CHROME_CONTROLS_SOURCE@@@Z
    void ChromeControlsInvokeAppBar_(IImmersiveApplication *, int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChromeControlsInvokeBack_@ChromeControlsTelemetryImpl@@QEBAXPEAUIImmersiveApplication@@I@Z
    void ChromeControlsInvokeBack_(IImmersiveApplication *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@ChromeControlsTelemetryImpl@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
