#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CSwitcherNotificationService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CSwitcherNotificationService@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppAddedToSwitcher@CSwitcherNotificationService@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z
    virtual long OnAppAddedToSwitcher(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppRemovedFromSwitcher@CSwitcherNotificationService@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@W4SWITCHER_REMOVAL_REASON@@@Z
    virtual long OnAppRemovedFromSwitcher(IImmersiveApplication *, int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnAppRemovedFromSwitchers@CSwitcherNotificationService@@AEAAXPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z
    void _OnAppRemovedFromSwitchers(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AddSwitcherFlag@CSwitcherNotificationService@@CAXPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z
    static void s_AddSwitcherFlag(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetSwitcherFlags@CSwitcherNotificationService@@CA?AW4APP_SWITCHER_FLAGS@@PEAUIImmersiveApplication@@@Z
    static int s_GetSwitcherFlags(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RemoveSwitcherFlags@CSwitcherNotificationService@@CA?AW4APP_SWITCHER_FLAGS@@PEAUIImmersiveApplication@@W42@@Z
    static int s_RemoveSwitcherFlags(IImmersiveApplication *, int);
};
