#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class TouchpadActionsGestureHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBePreempted@TouchpadActionsGestureHandler@@UEAAHXZ
    virtual int CanBePreempted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPreemptOtherGestures@TouchpadActionsGestureHandler@@UEAAHXZ
    virtual int CanPreemptOtherGestures();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSwipe@TouchpadActionsGestureHandler@@UEAAJXZ
    virtual long CancelSwipe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueSwipe@TouchpadActionsGestureHandler@@UEAAJHHHHI@Z
    virtual long ContinueSwipe(int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DelayInitialize@TouchpadActionsGestureHandler@@UEAAJPEAUITouchpadActionsManager@@@Z
    virtual long DelayInitialize(ITouchpadActionsManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishSwipe@TouchpadActionsGestureHandler@@UEAAJHHHHI@Z
    virtual long FinishSwipe(int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwipe@TouchpadActionsGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z
    virtual long StartSwipe(int, int, unsigned int, TOUCHPAD_GESTURE_CONTEXT);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadActionsGestureHandler@@QEAA@XZ
    TouchpadActionsGestureHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadActionsGestureHandler@@UEAA@XZ
    virtual ~TouchpadActionsGestureHandler();
};
