#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class TouchpadGestureHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureType@TouchpadGestureHandler@@UEBA?AW4TOUCHPAD_GESTURE_TYPE@@XZ
    virtual int GetGestureType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGestureActive@TouchpadGestureHandler@@UEBA_NXZ
    virtual bool IsGestureActive() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInteractionContextOutput@TouchpadGestureHandler@@UEAAJPEBUInteractionContextOutputInfo@@PEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    virtual long ProcessInteractionContextOutput(InteractionContextOutputInfo const *, INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartSwipeThreshold@TouchpadGestureHandler@@UEAAXH@Z
    virtual void SetStartSwipeThreshold(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadGestureHandler@@QEAA@XZ
    TouchpadGestureHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadGestureHandler@@UEAA@XZ
    virtual ~TouchpadGestureHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelGesture@TouchpadGestureHandler@@AEAAXXZ
    void _CancelGesture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishGesture@TouchpadGestureHandler@@AEAAXPEBUInteractionContextOutputInfo@@HHHH@Z
    void _FinishGesture(InteractionContextOutputInfo const *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGestureDirection@TouchpadGestureHandler@@AEAA?AW4TOUCHPAD_GESTURE_DIRECTION@@HH@Z
    int _GetGestureDirection(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartGesture@TouchpadGestureHandler@@AEAAXPEBUInteractionContextOutputInfo@@HH@Z
    void _StartGesture(InteractionContextOutputInfo const *, int, int);
};
