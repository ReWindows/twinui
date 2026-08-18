#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class InputDialPlatformHelpers {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputDialAngleParameters@InputDialPlatformHelpers@@SAJW4tagINTERACTIVECTRL_HAPTICS_MODE@@H@Z
    static long SetInputDialAngleParameters(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputDialFocusToTargetWindow@InputDialPlatformHelpers@@SAJPEAUHWND__@@@Z
    static long SetInputDialFocusToTargetWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputDialFocusToTargetWindow@InputDialPlatformHelpers@@SAJPEAUHWND__@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z
    static long SetInputDialFocusToTargetWindow(HWND__*, int);
};
