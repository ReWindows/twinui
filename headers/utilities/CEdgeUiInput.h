#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 61 member(s).
class CEdgeUiInput {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeUiInput@@QEAA@W4EDGEUI_INDEX@@@Z
    CEdgeUiInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeVisibleForInputObservation@CEdgeUiInput@@UEAA_NW4EDGEUI_INDEX@@@Z
    virtual bool CanBeVisibleForInputObservation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelMouseDrag@CEdgeUiInput@@UEAAJXZ
    virtual long CancelMouseDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTouchSwipe@CEdgeUiInput@@UEAAJXZ
    virtual long CancelTouchSwipe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissedUI@CEdgeUiInput@@UEAAJW4DISMISSED_UI_FLAGS@@@Z
    virtual long DismissedUI(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@CEdgeUiInput@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@CEdgeUiInput@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@CEdgeUiInput@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@CEdgeUiInput@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForwardMessage@CEdgeUiInput@@UEAA_JI_K_J@Z
    virtual int64_t ForwardMessage(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedEdge@CEdgeUiInput@@UEAAJPEAW4EDGEUI_INDEX@@@Z
    virtual long GetAssignedEdge(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHint@CEdgeUiInput@@UEAAJPEAPEAUIEdgeUiHint@@@Z
    virtual long GetHint(IEdgeUiHint * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetListenerHwnd@CEdgeUiInput@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetListenerHwnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintVisualDestroyed@CEdgeUiInput@@UEAAJPEAUIEdgeUiHint@@@Z
    virtual long HintVisualDestroyed(IEdgeUiHint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedKeyDown@CEdgeUiInput@@UEAAJI@Z
    virtual long ObservedKeyDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedKeyUp@CEdgeUiInput@@UEAAJI@Z
    virtual long ObservedKeyUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonDown@CEdgeUiInput@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonDown(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonUp@CEdgeUiInput@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonUp(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseMove@CEdgeUiInput@@UEAAJUtagPOINT@@G0@Z
    virtual long ObservedMouseMove(tagPOINT, unsigned short, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedPenInput@CEdgeUiInput@@UEAAJUtagPOINT@@HPEAX@Z
    virtual long ObservedPenInput(tagPOINT, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedTouchInput@CEdgeUiInput@@UEAAJUtagPOINT@@H@Z
    virtual long ObservedTouchInput(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Position@CEdgeUiInput@@UEAAJPEBUtagRECT@@W4EDGEUI_LAYOUT_REASON@@_N@Z
    virtual long Position(tagRECT const *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSettings@CEdgeUiInput@@UEAAXPEAUIImmersiveSettingsCache@@@Z
    virtual void RefreshSettings(IImmersiveSettingsCache *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasRudeWindow@CEdgeUiInput@@UEAAJ_N@Z
    virtual long SetHasRudeWindow(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CEdgeUiInput@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@CEdgeUiInput@@UEAAJ_N@Z
    virtual long SetVisible(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SimulateEdgeInput@CEdgeUiInput@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long SimulateEdgeInput(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchEdgeGripperDismissed@CEdgeUiInput@@UEAAJXZ
    virtual long TouchEdgeGripperDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchEdgeGripperPressed@CEdgeUiInput@@UEAAJIUtagPOINT@@@Z
    virtual long TouchEdgeGripperPressed(unsigned int, tagPOINT);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelDrag@CEdgeUiInput@@AEAAJXZ
    long _CancelDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelMouseDrag@CEdgeUiInput@@AEAAJXZ
    long _CancelMouseDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelTouchDrag@CEdgeUiInput@@AEAAJXZ
    long _CancelTouchDrag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeCornerRegion@CEdgeUiInput@@AEAAJHH_NPEAPEAUHRGN__@@@Z
    long _ComputeCornerRegion(int, int, bool, HRGN__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateInputWindow@CEdgeUiInput@@AEAAJXZ
    long _CreateInputWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCornerOrEdge@CEdgeUiInput@@AEAA?AW4EDGEUI_CORNEROREDGE@@_N@Z
    int _GetCornerOrEdge(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleObservedMouseInput@CEdgeUiInput@@AEAAX_NUtagPOINT@@1@Z
    void _HandleObservedMouseInput(bool, tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCurrentInputFromMouseOrPen@CEdgeUiInput@@AEAAHXZ
    int _IsCurrentInputFromMouseOrPen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEdgeSwipeAllowedByTouchKeyboard@CEdgeUiInput@@AEAA_NUtagPOINT@@@Z
    bool _IsEdgeSwipeAllowedByTouchKeyboard(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFullScreenAppOnThisMonitor@CEdgeUiInput@@AEAA_NXZ
    bool _IsFullScreenAppOnThisMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPointInWindow@CEdgeUiInput@@AEAA_NUtagPOINT@@@Z
    bool _IsPointInWindow(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPointerForEdgeInputRegisteredDevice@CEdgeUiInput@@AEAAHI@Z
    int _IsPointerForEdgeInputRegisteredDevice(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTopEdge@CEdgeUiInput@@AEAA_NXZ
    bool _IsTopEdge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MouseMoveToCornerOrEdge@CEdgeUiInput@@AEAAJW4EDGEUI_CORNEROREDGE@@UtagPOINT@@_N22@Z
    long _MouseMoveToCornerOrEdge(int, tagPOINT, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseDown@CEdgeUiInput@@AEAAXUtagPOINT@@_N@Z
    void _OnMouseDown(tagPOINT, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseHover@CEdgeUiInput@@AEAAXUtagPOINT@@@Z
    void _OnMouseHover(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseLeave@CEdgeUiInput@@AEAAXXZ
    void _OnMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseMove@CEdgeUiInput@@AEAAXUtagPOINT@@_N1@Z
    void _OnMouseMove(tagPOINT, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnMouseUp@CEdgeUiInput@@AEAAXUtagPOINT@@@Z
    void _OnMouseUp(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerDown@CEdgeUiInput@@AEAAXIUtagPOINT@@_N@Z
    void _OnPointerDown(unsigned int, tagPOINT, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerUp@CEdgeUiInput@@AEAAXIUtagPOINT@@@Z
    void _OnPointerUp(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerUpdate@CEdgeUiInput@@AEAAXIUtagPOINT@@@Z
    void _OnPointerUpdate(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterRawInput@CEdgeUiInput@@AEAAX_N@Z
    void _RegisterRawInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SampleInput@CEdgeUiInput@@AEAAXXZ
    void _SampleInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInputObservation@CEdgeUiInput@@AEAAX_N@Z
    void _SetInputObservation(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetTemporaryDisableTimer@CEdgeUiInput@@AEAAX_NI@Z
    void _SetTemporaryDisableTimer(bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CEdgeUiInput@@AEAA_JI_K_J_N@Z
    int64_t _WndProc(unsigned int, uint64_t, int64_t, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegisterWindowClass@CEdgeUiInput@@CAXXZ
    static void s_RegisterWindowClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CEdgeUiInput@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeUiInput@@EEAA@XZ
    virtual ~CEdgeUiInput();
};
