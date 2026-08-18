#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CMouseGestureProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClient@CMouseGestureProvider@@UEAAJPEAUIGestureClient@@@Z
    virtual long AddClient(IGestureClient *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelActiveGesture@CMouseGestureProvider@@UEAAJXZ
    virtual long CancelActiveGesture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableGestures@CMouseGestureProvider@@UEAAXI@Z
    virtual void DisableGestures(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableGestures@CMouseGestureProvider@@UEAAXI@Z
    virtual void EnableGestures(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@CMouseGestureProvider@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CMouseGestureProvider@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CMouseGestureProvider@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CMouseGestureProvider@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CMouseGestureProvider@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CMouseGestureProvider@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@CMouseGestureProvider@@UEAAJPEAUIGestureClient@@@Z
    virtual long RemoveClient(IGestureClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CMouseGestureProvider@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMouseGestureProvider@@UEAA@XZ
    virtual ~CMouseGestureProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseCaptureLost@CMouseGestureProvider@@EEAAJPEAUMouseEvent@DirectUI@@@Z
    virtual long _OnMouseCaptureLost(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseDown@CMouseGestureProvider@@EEAAJPEAUMouseEvent@DirectUI@@@Z
    virtual long _OnMouseDown(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseDrag@CMouseGestureProvider@@EEAAJPEAUMouseEvent@DirectUI@@@Z
    virtual long _OnMouseDrag(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseUp@CMouseGestureProvider@@EEAAJPEAUMouseEvent@DirectUI@@@Z
    virtual long _OnMouseUp(::DirectUI::MouseEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendGestureDetected@CMouseGestureProvider@@AEAAXW4GESTURE_PROVIDER_GESTURE@@MMPEA_N@Z
    void _SendGestureDetected(int, float, float, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMotionDetected@CMouseGestureProvider@@AEAAXMM@Z
    void _SendMotionDetected(float, float);
};
