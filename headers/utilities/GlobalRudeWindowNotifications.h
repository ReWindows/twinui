#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class GlobalRudeWindowNotifications {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GlobalRudeWindowNotifications@@QEAA@XZ
    GlobalRudeWindowNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRudeWindowStateChange@GlobalRudeWindowNotifications@@UEAAJPEAUIImmersiveMonitor@@W4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z
    virtual long OnRudeWindowStateChange(IImmersiveMonitor *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@GlobalRudeWindowNotifications@@UEAAJPEAUIGlobalRudeWindowNotifications@@PEAK@Z
    virtual long Register(IGlobalRudeWindowNotifications *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@GlobalRudeWindowNotifications@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GlobalRudeWindowNotifications@@UEAA@XZ
    virtual ~GlobalRudeWindowNotifications();
};
