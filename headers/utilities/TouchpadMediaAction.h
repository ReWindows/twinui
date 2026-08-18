#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class TouchpadMediaAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TouchpadMediaAction@@UEAAJXZ
    virtual long Invoke();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMediaSessionDataSource@TouchpadMediaAction@@AEAAJPEAPEAUIMediaPlaybackDataSource@@@Z
    long GetCurrentMediaSessionDataSource(IMediaPlaybackDataSource * *);
};
