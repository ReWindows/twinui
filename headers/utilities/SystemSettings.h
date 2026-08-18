#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class SystemSettings {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOn@SystemSettings@@SAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@I@Z
    static int IsOn(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TurnOn@SystemSettings@@SAJAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@IPEAXH@Z
    static long TurnOn(WindissectOpaque const &, unsigned int, void *, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdditionalAnimationSetting@SystemSettings@@CAJI@Z
    static long SetAdditionalAnimationSetting(unsigned int);
};
