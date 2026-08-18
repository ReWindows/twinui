#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CIconCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CIconCache@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CIconCache@@QEAAJI@Z
    long Initialize(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupIcon@CIconCache@@QEAAJPEAVAppInfo@@PEBGPEAPEAUHICON__@@@Z
    long LookupIcon(AppInfo *, unsigned short const *, HICON__* *);
};
