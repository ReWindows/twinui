#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class CTitleBarInvoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTitleBarInvoker@@QEAA@XZ
    CTitleBarInvoker();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTitleBarInvoker@@UEAA@XZ
    virtual ~CTitleBarInvoker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CancelDrag@CTitleBarInvoker@@MEAAJXZ
    virtual long v_CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CommitDrag@CTitleBarInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_CommitDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ContinueDrag@CTitleBarInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_ContinueDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_HitCornerOrEdge@CTitleBarInvoker@@MEAAJUtagPOINT@@_N@Z
    virtual long v_HitCornerOrEdge(tagPOINT, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CTitleBarInvoker@@MEAAXXZ
    virtual void v_Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Invoke@CTitleBarInvoker@@MEAAJ_NUtagPOINT@@W4RAW_INPUT_TYPE@@@Z
    virtual long v_Invoke(bool, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedMouseButtonDown@CTitleBarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedMouseButtonDown(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedMouseMove@CTitleBarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedMouseMove(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ObservedTouchInput@CTitleBarInvoker@@MEAAXUtagPOINT@@@Z
    virtual void v_ObservedTouchInput(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_StartDrag@CTitleBarInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_StartDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_StartSecondarySwipe@CTitleBarInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_StartSecondarySwipe(tagPOINT);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPointOverTitleBarUI@CTitleBarInvoker@@AEAA_NUtagPOINT@@@Z
    bool _IsPointOverTitleBarUI(tagPOINT);
};
