#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CAddToLockScreenOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToLockScreen@CAddToLockScreenOperation@@QEAAJPEAW4BackgroundAccessStatus@Background@ApplicationModel@Windows@@@Z
    long AddToLockScreen(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAsAlarm@CAddToLockScreenOperation@@QEAAJPEAW4AlarmAccessStatus@Background@ApplicationModel@Windows@@@Z
    long SetAsAlarm(int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToLockScreen@CAddToLockScreenOperation@@AEAAJH@Z
    long _AddToLockScreen(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AlarmSlotFull@CAddToLockScreenOperation@@AEAAJPEAHPEAPEAG@Z
    long _AlarmSlotFull(int *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDisplayName@CAddToLockScreenOperation@@AEAAJPEAGPEAPEAG@Z
    long _GetDisplayName(unsigned short *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockScreenFull@CAddToLockScreenOperation@@AEAAJPEAH@Z
    long _LockScreenFull(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromLockScreen@CAddToLockScreenOperation@@AEAAJXZ
    long _RemoveFromLockScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetAsAlarmApp@CAddToLockScreenOperation@@AEAAJH@Z
    long _SetAsAlarmApp(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetConsentShownFlag@CAddToLockScreenOperation@@AEAAJH@Z
    long _SetConsentShownFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContentionDialog@CAddToLockScreenOperation@@AEAAJPEBGPEAH@Z
    long _ShowContentionDialog(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpgradeToNCB@CAddToLockScreenOperation@@AEAAJPEBGPEAH@Z
    long _UpgradeToNCB(unsigned short const *, int *);
};
