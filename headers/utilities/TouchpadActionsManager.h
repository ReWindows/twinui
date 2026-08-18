#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class TouchpadActionsManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAction@TouchpadActionsManager@@UEBAJW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAPEAUITouchpadAction@@@Z
    virtual long GetAction(int, int, ITouchpadAction * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServiceProvider@TouchpadActionsManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SetServiceProvider(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadActionsManager@@UEAA@XZ
    virtual ~TouchpadActionsManager();
};
