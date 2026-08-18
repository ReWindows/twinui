#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CGITRegistrationList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGITRegistrationList@@QEAA@XZ
    CGITRegistrationList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z
    long GetCallbackArray(IObjectArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z
    long Register(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CGITRegistrationList@@QEAAJK@Z
    long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGITRegistrationList@@QEAA@XZ
    ~CGITRegistrationList();
};
