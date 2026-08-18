#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class TouchpadVolumeGestureHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBePreempted@TouchpadVolumeGestureHandler@@UEAAHXZ
    virtual int CanBePreempted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanPreemptOtherGestures@TouchpadVolumeGestureHandler@@UEAAHXZ
    virtual int CanPreemptOtherGestures();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSwipe@TouchpadVolumeGestureHandler@@UEAAJXZ
    virtual long CancelSwipe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueSwipe@TouchpadVolumeGestureHandler@@UEAAJHHHHI@Z
    virtual long ContinueSwipe(int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishSwipe@TouchpadVolumeGestureHandler@@UEAAJHHHHI@Z
    virtual long FinishSwipe(int, int, int, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServiceProvider@TouchpadVolumeGestureHandler@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SetServiceProvider(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwipe@TouchpadVolumeGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z
    virtual long StartSwipe(int, int, unsigned int, TOUCHPAD_GESTURE_CONTEXT);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadVolumeGestureHandler@@UEAA@XZ
    virtual ~TouchpadVolumeGestureHandler();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAudioEndpoint@TouchpadVolumeGestureHandler@@AEBAJPEAPEAUIAudioEndpointVolume@@@Z
    long GetAudioEndpoint(IAudioEndpointVolume * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowVolumePanel@TouchpadVolumeGestureHandler@@AEAAJK@Z
    long ShowVolumePanel(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StepVolumeByValue@TouchpadVolumeGestureHandler@@AEAAJM@Z
    long StepVolumeByValue(float);
};
