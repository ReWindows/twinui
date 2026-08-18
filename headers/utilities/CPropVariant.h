#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CPropVariant {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsString@CPropVariant@@QEBAJPEAPEAG@Z
    long GetAsString(unsigned short * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CPropVariant@@QEBAPEBGXZ
    unsigned short const * GetString() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryStealString@CPropVariant@@QEAA_NPEAPEAG@Z
    bool TryStealString(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropVariant@@QEAA@XZ
    ~CPropVariant();
};
