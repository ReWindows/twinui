#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CWaitForApplications {
public:
    class WaitInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWaitHandle@CWaitForApplications@@QEAAJPEAUIUnknown@@PEAUIWaitHandle@@@Z
    long AddWaitHandle(IUnknown *, IWaitHandle *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitForApplications@@QEAA@XZ
    ~CWaitForApplications();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformWait@CWaitForApplications@@AEAAXXZ
    void _PerformWait();
};
