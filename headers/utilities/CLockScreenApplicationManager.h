#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CLockScreenApplicationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContentionFlyout@CLockScreenApplicationManager@@UEAAJPEAUHWND__@@UtagPOINT@@PEBG@Z
    virtual long ShowContentionFlyout(HWND__*, tagPOINT, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSelectionFlyout@CLockScreenApplicationManager@@UEAAJPEAUHWND__@@UtagRECT@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@HPEBGIW4LSAM_DOCK_LOCATION@@@Z
    virtual long ShowSelectionFlyout(HWND__*, tagRECT, int, int, unsigned short const *, unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContentionFlyoutForOrder@CLockScreenApplicationManager@@AEAAJPEAUHWND__@@AEBUtagRECT@@AEBW4LSAM_DOCK_LOCATION@@PEBGW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@I@Z
    long _ShowContentionFlyoutForOrder(HWND__*, tagRECT const &, int const &, unsigned short const *, int, unsigned int);
};
