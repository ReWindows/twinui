#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CPickerParameters {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPickerParameters@@QEAA@XZ
    CPickerParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CPickerParameters@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CPickerParameters@@SAJAEBUPICKER_PARAMETERS@@PEAU2@@Z
    static long CopyTo(PICKER_PARAMETERS const &, PICKER_PARAMETERS *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerParameters@@QEAA@XZ
    ~CPickerParameters();
};
