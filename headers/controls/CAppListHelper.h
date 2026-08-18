#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CAppListHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppListHelper@@QEAA@PEAVCSimpleAppList@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@@Z
    CAppListHelper(CSimpleAppList *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppListHelper@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostMessageW@CAppListHelper@@QEAA_NI_K_J@Z
    bool PostMessageW(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppListHelper@@QEAAKXZ
    unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CAppListHelper@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppListHelper@@AEAA@XZ
    ~CAppListHelper();
};
