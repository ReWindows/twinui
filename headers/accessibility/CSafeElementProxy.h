#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CSafeElementProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSafeElementProxy@@QEAAKXZ
    unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSafeElementProxy@@IEAA@XZ
    CSafeElementProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitDUserContext@CSafeElementProxy@@AEAAJPEAPEAUHDCONTEXT__@@@Z
    long _InitDUserContext(HDCONTEXT__* *);
};
