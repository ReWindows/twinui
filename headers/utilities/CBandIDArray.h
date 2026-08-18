#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CBandIDArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBandIDArray@@QEAA@XZ
    CBandIDArray();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CBandIDArray@@UEAAJHPEAW4ZBID@@@Z
    virtual long GetAt(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CBandIDArray@@UEAAJPEAH@Z
    virtual long GetCount(int *);
};
