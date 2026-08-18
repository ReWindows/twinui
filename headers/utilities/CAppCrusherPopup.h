#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 30 member(s).
class CAppCrusherPopup {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppCrusherPopup@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppCrusherPopup@@QEAA@XZ
    CAppCrusherPopup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppCrusherPopup@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppCrusherPopup@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppCrusherPopup@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppCrusherPopup@@UEAAJPEAUHWND__@@PEAUIImmersiveApplication@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@AEBUtagRECT@@@Z
    virtual long Initialize(HWND__*, IImmersiveApplication *, int, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCommand@CAppCrusherPopup@@QEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    long InvokeCommand(IPopupWindow *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CAppCrusherPopup@@QEAAJPEAUIPopupWindow@@@Z
    long OnDismiss(IPopupWindow *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppCrusherPopup@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppCrusherPopup@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@CAppCrusherPopup@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CAppCrusherPopup@@UEAAJXZ
    virtual long Show();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppCrusherPopup@@UEAA@XZ
    virtual ~CAppCrusherPopup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCommand@CAppCrusherPopup@@AEAAJIPEAPEAUIPopupCommand@@@Z
    long _CreateCommand(unsigned int, IPopupCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDUIContent@CAppCrusherPopup@@AEAAJPEAUIPopupWindow@@@Z
    long _SetDUIContent(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDUIInfoText@CAppCrusherPopup@@AEAAJPEAVElement@DirectUI@@@Z
    long _SetDUIInfoText(::DirectUI::Element *);
};
