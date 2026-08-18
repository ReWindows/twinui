#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CCallerInformation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CCallerInformation@@SAJAEBUPICKER_CALLER_INFORMATION@@PEAU2@@Z
    static long CopyTo(PICKER_CALLER_INFORMATION const &, PICKER_CALLER_INFORMATION *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerUserContext@CCallerInformation@@QEAAJPEA_K@Z
    long GetCallerUserContext(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateFromCallingProcess@CCallerInformation@@QEAAJPEBG0@Z
    long PopulateFromCallingProcess(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCallerInformation@@QEAA@XZ
    ~CCallerInformation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CopyCoTaskMemString@CCallerInformation@@CAJPEBGPEAPEAG@Z
    static long s_CopyCoTaskMemString(unsigned short const *, unsigned short * *);
};
