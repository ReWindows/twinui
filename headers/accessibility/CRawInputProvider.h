#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CRawInputProvider {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRawInputProvider@@QEAA@XZ
    CRawInputProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedPenInput@CRawInputProvider@@UEAAJUtagPOINT@@HPEAX@Z
    virtual long ObservedPenInput(tagPOINT, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedTouchInput@CRawInputProvider@@UEAAJUtagPOINT@@H@Z
    virtual long ObservedTouchInput(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CRawInputProvider@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForRawInput@CRawInputProvider@@UEAAJPEAUIUnknown@@W4RAW_INPUT_TYPE@@PEAK@Z
    virtual long RegisterForRawInput(IUnknown *, int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForRawInput@CRawInputProvider@@UEAAJK@Z
    virtual long UnregisterForRawInput(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnRawKeyboardInput@CRawInputProvider@@AEAAXPEAUtagRAWINPUT@@@Z
    void _OnRawKeyboardInput(tagRAWINPUT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterDigitizerRawInput@CRawInputProvider@@AEAAX_N@Z
    void _RegisterDigitizerRawInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForUsage@CRawInputProvider@@AEAAHGGK_N@Z
    int _RegisterForUsage(unsigned short, unsigned short, unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterKeyboardRawInput@CRawInputProvider@@AEAAX_N@Z
    void _RegisterKeyboardRawInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterMouseRawInput@CRawInputProvider@@AEAAX_N@Z
    void _RegisterMouseRawInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WantInputType@CRawInputProvider@@AEAA_NW4RAW_INPUT_TYPE@@@Z
    bool _WantInputType(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CRawInputProvider@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRawInputProvider@@EEAA@XZ
    virtual ~CRawInputProvider();
};
