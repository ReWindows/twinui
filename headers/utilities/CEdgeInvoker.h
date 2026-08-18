#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 36 member(s).
class CEdgeInvoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeInvoker@@QEAA@XZ
    CEdgeInvoker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelDrag@CEdgeInvoker@@UEAAJXZ
    virtual long CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSwipe@CEdgeInvoker@@UEAAJXZ
    virtual long CancelSwipe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitDrag@CEdgeInvoker@@UEAAJUtagPOINT@@@Z
    virtual long CommitDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSwipe@CEdgeInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long CommitSwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueDrag@CEdgeInvoker@@UEAAJUtagPOINT@@@Z
    virtual long ContinueDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueSwipe@CEdgeInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long ContinueSwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HitCornerOrEdge@CEdgeInvoker@@UEAAJW4EDGEUI_CORNEROREDGE@@UtagPOINT@@PEAW4EDGEUI_INPUTNOTIFICATION@@H@Z
    virtual long HitCornerOrEdge(int, tagPOINT, int *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHintSupported@CEdgeInvoker@@UEAAHXZ
    virtual int IsHintSupported();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSystemUiVisible@CEdgeInvoker@@UEAAHXZ
    virtual int IsSystemUiVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseDwelled@CEdgeInvoker@@UEAAJUtagPOINT@@PEAW4EDGEUI_INPUTNOTIFICATION@@@Z
    virtual long MouseDwelled(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedKeypress@CEdgeInvoker@@UEAAJI@Z
    virtual long ObservedKeypress(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonDown@CEdgeInvoker@@UEAAJUtagPOINT@@@Z
    virtual long ObservedMouseButtonDown(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseMove@CEdgeInvoker@@UEAAJUtagPOINT@@0@Z
    virtual long ObservedMouseMove(tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedTouchInput@CEdgeInvoker@@UEAAJUtagPOINT@@@Z
    virtual long ObservedTouchInput(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRudeWindowStateChange@CEdgeInvoker@@UEAAJW4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z
    virtual long OnRudeWindowStateChange(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CEdgeInvoker@@QEAAJW4EDGEUI_COMPONENT@@PEAUIRudeWindowManager@@@Z
    long RuntimeClassInitialize(int, IRudeWindowManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CEdgeInvoker@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDrag@CEdgeInvoker@@UEAAJUtagPOINT@@@Z
    virtual long StartDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExtendedSwipe@CEdgeInvoker@@UEAAJUtagPOINT@@I0@Z
    virtual long StartExtendedSwipe(tagPOINT, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSecondarySwipe@CEdgeInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long StartSecondarySwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwipe@CEdgeInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long StartSwipe(unsigned int, tagPOINT);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeInvoker@@UEAA@XZ
    virtual ~CEdgeInvoker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillHoverTimer@CEdgeInvoker@@IEAAXXZ
    void _KillHoverTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetHoverTimer@CEdgeInvoker@@IEAAXXZ
    void _SetHoverTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMonitorState@CEdgeInvoker@@IEAAJXZ
    long _UpdateMonitorState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TimerProc@CEdgeInvoker@@KAXPEAUHWND__@@I_KK@Z
    static void s_TimerProc(HWND__*, unsigned int, uint64_t, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CancelDrag@CEdgeInvoker@@MEAAJXZ
    virtual long v_CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CommitDrag@CEdgeInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_CommitDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ContinueDrag@CEdgeInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_ContinueDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsHintSupported@CEdgeInvoker@@MEAAHXZ
    virtual int v_IsHintSupported();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_IsSystemUiVisible@CEdgeInvoker@@MEAAHXZ
    virtual int v_IsSystemUiVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_StartDrag@CEdgeInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_StartDrag(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_StartSecondarySwipe@CEdgeInvoker@@MEAAJUtagPOINT@@@Z
    virtual long v_StartSecondarySwipe(tagPOINT);
};
