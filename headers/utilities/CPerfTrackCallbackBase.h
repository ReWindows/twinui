#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CPerfTrackCallbackBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBeginNavigation@CPerfTrackCallbackBase@@UEAAJPEAUIShellItem@@@Z
    virtual long OnBeginNavigation(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerDisplayed@CPerfTrackCallbackBase@@UEAAJI@Z
    virtual long OnExplorerDisplayed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerReady@CPerfTrackCallbackBase@@UEAAJI@Z
    virtual long OnExplorerReady(unsigned int);
};
