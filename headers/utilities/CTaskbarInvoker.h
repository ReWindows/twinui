#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CTaskbarInvoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTaskbarInvoker@@QEAA@XZ
    CTaskbarInvoker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueSwipe@CTaskbarInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long ContinueSwipe(unsigned int, tagPOINT);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HitCornerOrEdge@CTaskbarInvoker@@MEAAJUtagPOINT@@_N@Z
    virtual long v_HitCornerOrEdge(tagPOINT, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CTaskbarInvoker@@MEAAXXZ
    virtual void v_Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Invoke@CTaskbarInvoker@@MEAAJ_NUtagPOINT@@W4RAW_INPUT_TYPE@@@Z
    virtual long v_Invoke(bool, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsSystemUiVisible@CTaskbarInvoker@@MEAAHXZ
    virtual int v_IsSystemUiVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedMouseButtonDown@CTaskbarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedMouseButtonDown(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedMouseMove@CTaskbarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedMouseMove(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedTouchInput@CTaskbarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedTouchInput(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_StartSecondarySwipe@CTaskbarInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_StartSecondarySwipe(tagPOINT);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPointOverTaskbarUI@CTaskbarInvoker@@AEAA_NUtagPOINT@@@Z
    bool _IsPointOverTaskbarUI(tagPOINT);
};
