#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CActivationErrorPopup {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActivationErrorPopup@@QEAA@PEBUACTIVATIONERROR@@W4ACTIVATION_PHASE@@J@Z
    CActivationErrorPopup(ACTIVATIONERROR const *, int, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowModal@CActivationErrorPopup@@QEAAJPEBGPEAW4ACTIVATIONERROR_DISMISS_METHOD@@@Z
    long CreateAndShowModal(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActionLink@CActivationErrorPopup@@QEAAXXZ
    void OnActionLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CActivationErrorPopup@@QEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    long OnCommand(IPopupWindow *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@CActivationErrorPopup@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetErrorMessage@CActivationErrorPopup@@QEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z
    long _GetErrorMessage(WindissectOpaque &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActivationErrorPopup@@QEAA@XZ
    ~CActivationErrorPopup();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndFillPopup@CActivationErrorPopup@@AEAAJXZ
    long CreateAndFillPopup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowAlert@CActivationErrorPopup@@AEAAJPEBG@Z
    long CreateAndShowAlert(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowMessageDialog@CActivationErrorPopup@@AEAAJXZ
    long CreateAndShowMessageDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowNightsWatchMessageDialog@CActivationErrorPopup@@AEAAJPEBG@Z
    long CreateAndShowNightsWatchMessageDialog(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndShowStoreSACDialog@CActivationErrorPopup@@AEAAJPEBG@Z
    long CreateAndShowStoreSACDialog(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoCommand@CActivationErrorPopup@@AEAAJIPEBG@Z
    long DoCommand(unsigned int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CActivationErrorPopup@@AEAAXXZ
    void _Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateCommand@CActivationErrorPopup@@AEAAJIPEAPEAUIPopupCommand@@@Z
    long _CreateCommand(unsigned int, IPopupCommand * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDUIContentHelper@CActivationErrorPopup@@AEAAJPEAUIPopupWindow@@@Z
    long _SetDUIContentHelper(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPopupCommandsHelper@CActivationErrorPopup@@AEAAJPEAUIPopupWindow@@@Z
    long _SetPopupCommandsHelper(IPopupWindow *);
};
