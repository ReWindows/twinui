#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class TouchpadSettingsManager {
public:
    class ThreadSafeData;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureAction@TouchpadSettingsManager@@UEAAJW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAW4PRECISIONTOUCHPAD_ADVANCED_SLIDE_ACTION@@@Z
    virtual long GetGestureAction(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureActionParameters@TouchpadSettingsManager@@UEAAJW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAK@Z
    virtual long GetGestureActionParameters(int, int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureSetting@TouchpadSettingsManager@@UEAAJW4TOUCHPAD_GESTURE_TYPE@@PEAW4PRECISIONTOUCHPAD_SLIDE_SETS@@@Z
    virtual long GetGestureSetting(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureStartSwipeThreshold@TouchpadSettingsManager@@UEAAJW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAH@Z
    virtual long GetGestureStartSwipeThreshold(int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGestureTarget@TouchpadSettingsManager@@UEAAJW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAPEAUITouchpadGesture@@@Z
    virtual long GetGestureTarget(int, int, ITouchpadGesture * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServiceProvider@TouchpadSettingsManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SetServiceProvider(IServiceProvider *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSettingsCache@TouchpadSettingsManager@@UEAAJPEAUIImmersiveSettingsCache@@@Z
    virtual long SetSettingsCache(IImmersiveSettingsCache *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadSettingsManager@@UEAA@XZ
    virtual ~TouchpadSettingsManager();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomSettingIdentifier@TouchpadSettingsManager@@AEBA_NW4TOUCHPAD_GESTURE_TYPE@@W4TOUCHPAD_GESTURE_DIRECTION@@PEAW4SETTING_IDENTIFIER@@@Z
    bool GetCustomSettingIdentifier(int, int, int *) const;
};
