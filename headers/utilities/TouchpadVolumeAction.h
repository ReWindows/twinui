#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class TouchpadVolumeAction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@TouchpadVolumeAction@@UEAAJXZ
    virtual long Invoke();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadVolumeAction@@UEAA@XZ
    virtual ~TouchpadVolumeAction();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioEndpoint@TouchpadVolumeAction@@AEAAJPEAPEAUIAudioEndpointVolume@@@Z
    long GetAudioEndpoint(IAudioEndpointVolume * *);
};
