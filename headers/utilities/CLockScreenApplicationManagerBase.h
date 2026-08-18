#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
class CLockScreenApplicationManagerBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBadgeImagePath@CLockScreenApplicationManagerBase@@UEAAJPEBGPEAPEAGPEAW4LS_IMAGE_QUALIFIERS@@PEAK@Z
    virtual long GetBadgeImagePath(unsigned short const *, unsigned short * *, int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFullyQualifiedFilePath@CLockScreenApplicationManagerBase@@UEAAJPEBG0PEAPEAGPEAW4LS_IMAGE_QUALIFIERS@@PEAK@Z
    virtual long GetFullyQualifiedFilePath(unsigned short const *, unsigned short const *, unsigned short * *, int *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegisteredApps@CLockScreenApplicationManagerBase@@UEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBGHPEAPEAPEAG2PEAI@Z
    virtual long GetRegisteredApps(int, unsigned short const *, int, unsigned short * * *, unsigned short * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAlarmCapable@CLockScreenApplicationManagerBase@@UEAAJPEBGPEAH@Z
    virtual long IsAlarmCapable(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAlarmSlotFull@CLockScreenApplicationManagerBase@@UEAAJPEAH@Z
    virtual long IsAlarmSlotFull(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppRegistered@CLockScreenApplicationManagerBase@@UEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG1PEAI@Z
    virtual long IsAppRegistered(int, unsigned short const *, unsigned short const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLockScreenCapable@CLockScreenApplicationManagerBase@@UEAAJPEBGPEAH@Z
    virtual long IsLockScreenCapable(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLockScreenFull@CLockScreenApplicationManagerBase@@UEAAJPEBGPEAH@Z
    virtual long IsLockScreenFull(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNCBEnabled@CLockScreenApplicationManagerBase@@UEAAJPEBG0PEAH@Z
    virtual long IsNCBEnabled(unsigned short const *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReRegisterApp@CLockScreenApplicationManagerBase@@UEAAJPEBG@Z
    virtual long ReRegisterApp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllForAppId@CLockScreenApplicationManagerBase@@UEAAJPEBG0@Z
    virtual long RemoveAllForAppId(unsigned short const *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlarmApp@CLockScreenApplicationManagerBase@@UEAAJPEBG@Z
    virtual long SetAlarmApp(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegisteredApp@CLockScreenApplicationManagerBase@@UEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG1IH@Z
    virtual long SetRegisteredApp(int, unsigned short const *, unsigned short const *, unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRegisteredAppUsingPropertyStore@CLockScreenApplicationManagerBase@@UEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBGPEAUIPropertyStore@@IH@Z
    virtual long SetRegisteredAppUsingPropertyStore(int, unsigned short const *, IPropertyStore *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContentionFlyout@CLockScreenApplicationManagerBase@@UEAAJPEAUHWND__@@UtagPOINT@@PEBG@Z
    virtual long ShowContentionFlyout(HWND__*, tagPOINT, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSelectionFlyout@CLockScreenApplicationManagerBase@@UEAAJPEAUHWND__@@UtagRECT@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@HPEBGIW4LSAM_DOCK_LOCATION@@@Z
    virtual long ShowSelectionFlyout(HWND__*, tagRECT, int, int, unsigned short const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRegisteredApp@CLockScreenApplicationManagerBase@@UEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG11@Z
    virtual long UpdateRegisteredApp(int, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateBadgeImage@CLockScreenApplicationManagerBase@@UEAAJPEBG0@Z
    virtual long ValidateBadgeImage(unsigned short const *, unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppAtFirstAvailableOrder@CLockScreenApplicationManagerBase@@IEAAJPEAUHKEY__@@PEAU_SECURITY_ATTRIBUTES@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG3_N@Z
    long _AddAppAtFirstAvailableOrder(HKEY__*, _SECURITY_ATTRIBUTES *, int, unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppAtOrder@CLockScreenApplicationManagerBase@@IEAAJPEAUHKEY__@@PEAU_SECURITY_ATTRIBUTES@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG3I_NPEA_N@Z
    long _AddAppAtOrder(HKEY__*, _SECURITY_ATTRIBUTES *, int, unsigned short const *, unsigned short const *, unsigned int, bool, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BiUpdateLockScreenDelta@CLockScreenApplicationManagerBase@@IEAAJPEBGW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@0PEAUIPropertyStore@@020@Z
    long _BiUpdateLockScreenDelta(unsigned short const *, int, unsigned short const *, IPropertyStore *, unsigned short const *, IPropertyStore *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckForDuplicate@CLockScreenApplicationManagerBase@@IEAAJPEBG00W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEAI@Z
    long _CheckForDuplicate(unsigned short const *, unsigned short const *, unsigned short const *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAppAtOrder@CLockScreenApplicationManagerBase@@IEAAJIW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBGPEAPEAG@Z
    long _FindAppAtOrder(unsigned int, int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindAppOrder@CLockScreenApplicationManagerBase@@IEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG1PEAI@Z
    long _FindAppOrder(int, unsigned short const *, unsigned short const *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBackgroundTaskCapability@CLockScreenApplicationManagerBase@@IEAAJPEAPEAUIBackgroundTaskCapability@@@Z
    long _GetBackgroundTaskCapability(IBackgroundTaskCapability * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetFullyQualifiedFilePath@CLockScreenApplicationManagerBase@@IEAAJPEBG0PEAUIPropertyStore@@PEAPEAGPEAW4LS_IMAGE_QUALIFIERS@@PEAK@Z
    long _GetFullyQualifiedFilePath(unsigned short const *, unsigned short const *, IPropertyStore *, unsigned short * *, int *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRegkeySD@CLockScreenApplicationManagerBase@@IEAAJPEBGPEAPEAX@Z
    long _GetRegkeySD(unsigned short const *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAppLockScreenCapable@CLockScreenApplicationManagerBase@@IEAAJPEBGPEAUIPropertyStore@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEAH@Z
    long _IsAppLockScreenCapable(unsigned short const *, IPropertyStore *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsPixelMonochrome@CLockScreenApplicationManagerBase@@IEAA_NK_N@Z
    bool _IsPixelMonochrome(unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterUnregisterApp@CLockScreenApplicationManagerBase@@IEAAXW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBGI_N@Z
    void _RegisterUnregisterApp(int, unsigned short const *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterUnregisterApps@CLockScreenApplicationManagerBase@@IEAAXW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEAPEBGI_N@Z
    void _RegisterUnregisterApps(int, unsigned short const * *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAppByAppId@CLockScreenApplicationManagerBase@@IEAAJPEAUHKEY__@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBGPEAPEAG@Z
    long _RemoveAppByAppId(HKEY__*, int, unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAppByOrder@CLockScreenApplicationManagerBase@@IEAAJPEAUHKEY__@@W4LOCK_SCREEN_APPLICATION_CAPABILITIES@@IPEAPEAG2@Z
    long _RemoveAppByOrder(HKEY__*, int, unsigned int, unsigned short * *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetRegisteredApp@CLockScreenApplicationManagerBase@@IEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG1PEAUIPropertyStore@@I_N3@Z
    long _SetRegisteredApp(int, unsigned short const *, unsigned short const *, IPropertyStore *, unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateDeltaList@CLockScreenApplicationManagerBase@@IEAAJPEAPEAG0PEAEPEBGPEAUIPropertyStore@@2E@Z
    long _UpdateDeltaList(unsigned short * *, unsigned short * *, unsigned char *, unsigned short const *, IPropertyStore *, unsigned short const *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWPNPlatform@CLockScreenApplicationManagerBase@@IEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEBG_N@Z
    long _UpdateWPNPlatform(int, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateBadgeMonochrome@CLockScreenApplicationManagerBase@@IEAAJK_NPEAUIWICImagingFactory@@PEAUIWICBitmapSource@@@Z
    long _ValidateBadgeMonochrome(unsigned long, bool, IWICImagingFactory *, IWICBitmapSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateSettingAppAtOrderDoesNotExceedMaxNCBApps@CLockScreenApplicationManagerBase@@IEAAJPEBGIW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@0PEA_N@Z
    long _ValidateSettingAppAtOrderDoesNotExceedMaxNCBApps(unsigned short const *, unsigned int, int, unsigned short const *, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenApplicationManagerBase@@IEAA@XZ
    ~CLockScreenApplicationManagerBase();
};
