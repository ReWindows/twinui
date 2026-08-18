#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CImpWorkerWndProc {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWorkerWindow@CImpWorkerWndProc@@IEAAPEAUHWND__@@PEAU2@KKPEAUHMENU__@@@Z
    HWND__* CreateWorkerWindow(HWND__*, unsigned long, unsigned long, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HrCreateWorkerWindow@CImpWorkerWndProc@@IEAAJPEAUHWND__@@KKPEAUHMENU__@@@Z
    long HrCreateWorkerWindow(HWND__*, unsigned long, unsigned long, HMENU__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImpWorkerWndProc@@MEAA@XZ
    virtual ~CImpWorkerWndProc();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ
    void AddWndRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ
    void ReleaseWndRef();
};
