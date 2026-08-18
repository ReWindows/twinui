#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CSyncIAMEventHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSyncIAMEventHandler@@QEAA@XZ
    CSyncIAMEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleActivation@CSyncIAMEventHandler@@UEAAJPEAUIObjectArray@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAUIImmersiveApplication@@KW4MODE_CHANGE_REASON@@W4ACTIVATION_CALLOUT_FLAGS@@@Z
    virtual long HandleActivation(IObjectArray *, IImmersiveApplicationManagerSafeForSyncCallouts *, IImmersiveApplication *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CSyncIAMEventHandler@@UEAAJPEAUIActiveZBandNotificationForMonitor@@PEAK@Z
    virtual long Register(IActiveZBandNotificationForMonitor *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSyncIAMEventHandler@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CSyncIAMEventHandler@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncIAMEventHandler@@UEAA@XZ
    virtual ~CSyncIAMEventHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ScheduleActiveZbidChangedNotification@CSyncIAMEventHandler@@AEAAXW4ZBID@@PEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z
    void _ScheduleActiveZbidChangedNotification(int, IImmersiveMonitor *, int);
};
