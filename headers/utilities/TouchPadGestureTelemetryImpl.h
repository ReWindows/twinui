#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class TouchPadGestureTelemetryImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@TouchPadGestureTelemetryImpl@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchPadGestureEnded_@TouchPadGestureTelemetryImpl@@QEBAXI@Z
    void TouchPadGestureEnded_(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchPadGestureStarted_@TouchPadGestureTelemetryImpl@@QEBAXI@Z
    void TouchPadGestureStarted_(unsigned int) const;
};
