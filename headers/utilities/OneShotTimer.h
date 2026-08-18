#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class OneShotTimer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@OneShotTimer@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@OneShotTimer@@UEAAJKPEAUITimerCallback@@@Z
    virtual long Start(unsigned long, ITimerCallback *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OneShotTimer@@UEAA@XZ
    virtual ~OneShotTimer();
};
