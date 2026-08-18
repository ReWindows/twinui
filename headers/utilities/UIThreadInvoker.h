#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class UIThreadInvoker {
public:
    class IInvoker;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UIThreadInvoker@@QEAA@XZ
    ~UIThreadInvoker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_MessengerProc@UIThreadInvoker@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_MessengerProc(HWND__*, unsigned int, uint64_t, int64_t);
};
