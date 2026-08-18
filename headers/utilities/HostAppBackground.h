#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class HostAppBackground {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBackgroundWindow@HostAppBackground@@QEAAJXZ
    long CreateBackgroundWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostAppBackground@@QEAA@XZ
    ~HostAppBackground();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@HostAppBackground@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
