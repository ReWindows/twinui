#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CLockScreenSettingProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangedSetting@CLockScreenSettingProvider@@UEAAJPEAUISetting@@@Z
    virtual long ChangedSetting(ISetting *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CLockScreenSettingProvider@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCollection@CLockScreenSettingProvider@@UEAAJKPEBGPEAPEAUISettingsCollection@@@Z
    virtual long GetSettingsCollection(unsigned long, unsigned short const *, ISettingsCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CLockScreenSettingProvider@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CLockScreenSettingProvider@@UEAAJKPEBGPEAH@Z
    virtual long IsSupported(unsigned long, unsigned short const *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToLockScreen@CLockScreenSettingProvider@@AEAAJPEBG@Z
    long _AddToLockScreen(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckLockScreenCapable@CLockScreenSettingProvider@@AEAAJPEBGPEAH@Z
    long _CheckLockScreenCapable(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDescription@CLockScreenSettingProvider@@AEAAJPEAPEAG@Z
    long _LoadDescription(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LockScreenFull@CLockScreenSettingProvider@@AEAAJPEBGPEAH@Z
    long _LockScreenFull(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnLockScreen@CLockScreenSettingProvider@@AEAAJPEBGPEAH@Z
    long _OnLockScreen(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowContentionDialog@CLockScreenSettingProvider@@AEAAJPEBGPEAH@Z
    long _ShowContentionDialog(unsigned short const *, int *);
};
