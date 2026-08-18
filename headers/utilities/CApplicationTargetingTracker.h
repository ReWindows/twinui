#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CApplicationTargetingTracker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationTargetingTracker@@QEAA@XZ
    CApplicationTargetingTracker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetedApplication@CApplicationTargetingTracker@@UEAAJPEAW4APPLICATION_TARGET_TYPE@@PEAPEAUIImmersiveApplication@@@Z
    virtual long GetTargetedApplication(int *, IImmersiveApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleActivation@CApplicationTargetingTracker@@UEAAJPEAUIObjectArray@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAUIImmersiveApplication@@KW4MODE_CHANGE_REASON@@W4ACTIVATION_CALLOUT_FLAGS@@@Z
    virtual long HandleActivation(IObjectArray *, IImmersiveApplicationManagerSafeForSyncCallouts *, IImmersiveApplication *, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CApplicationTargetingTracker@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationTargetingTracker@@UEAA@XZ
    virtual ~CApplicationTargetingTracker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleCrashRecovery@CApplicationTargetingTracker@@AEAAXXZ
    void _HandleCrashRecovery();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_GetApplicationTargetType@CApplicationTargetingTracker@@CA?AW4APPLICATION_TARGET_TYPE@@KPEAUIImmersiveApplication@@@Z
    static int _s_GetApplicationTargetType(unsigned long, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_IsValidZBIDTarget@CApplicationTargetingTracker@@CA_NK@Z
    static bool _s_IsValidZBIDTarget(unsigned long);
};
