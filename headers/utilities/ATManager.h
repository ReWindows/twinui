#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class ATManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ATManager@@QEAA@H@Z
    ATManager(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ATManager@@QEAA@XZ
    ATManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccommodations@ATManager@@QEAAAEBV?$CAtlList@PEAVAccommodation@@V?$CElementTraits@PEAVAccommodation@@@ATL@@@ATL@@XZ
    WindissectOpaque const & GetAccommodations();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ATManager@@QEAA@XZ
    ~ATManager();
};
