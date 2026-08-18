#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CTouchViewPerfTrackCallback {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchViewPerfTrackCallback@@QEAA@W4PICKER_TYPE@@W4PICKER_MODE@@@Z
    CTouchViewPerfTrackCallback(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerDisplayed@CTouchViewPerfTrackCallback@@UEAAJI@Z
    virtual long OnExplorerDisplayed(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExplorerReady@CTouchViewPerfTrackCallback@@UEAAJI@Z
    virtual long OnExplorerReady(unsigned int);
};
