#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class KeyboardNavigationBehaviorFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBehavior@KeyboardNavigationBehaviorFactory@@UEAAJPEBGPEAPEAUIDuiBehavior@@@Z
    virtual long CreateBehavior(unsigned short const *, IDuiBehavior * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@KeyboardNavigationBehaviorFactory@@SAJXZ
    static long Register();
};
