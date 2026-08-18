#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class TouchpadGestureInputProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TouchpadGestureInputProvider@@QEAAJPEAUITouchpadGestureHandler@@@Z
    long RuntimeClassInitialize(ITouchpadGestureHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@TouchpadGestureInputProvider@@UEAAXXZ
    virtual void Shutdown();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchpadGestureInputProvider@@QEAA@XZ
    TouchpadGestureInputProvider();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadGestureInputProvider@@UEAA@XZ
    virtual ~TouchpadGestureInputProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContactCountForPointerId@TouchpadGestureInputProvider@@AEAAJIPEAH@Z
    long _GetContactCountForPointerId(unsigned int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeInteractionContext@TouchpadGestureInputProvider@@AEAAJXZ
    long _InitializeInteractionContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerDown@TouchpadGestureInputProvider@@AEAAJI@Z
    long _OnPointerDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerUp@TouchpadGestureInputProvider@@AEAAJI@Z
    long _OnPointerUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerUpdate@TouchpadGestureInputProvider@@AEAAJI@Z
    long _OnPointerUpdate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessInteractionContextOutput@TouchpadGestureInputProvider@@AEAAJPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    long _ProcessInteractionContextOutput(INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessPointerFrame@TouchpadGestureInputProvider@@AEAAJI@Z
    long _ProcessPointerFrame(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterShellPTPListener@TouchpadGestureInputProvider@@AEAAJ_N@Z
    long _RegisterShellPTPListener(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InteractionContextOutputCallback@TouchpadGestureInputProvider@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    static void s_InteractionContextOutputCallback(void *, INTERACTION_CONTEXT_OUTPUT const *);
};
