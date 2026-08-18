#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class CImmersiveSettingsCache {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveSettingsCache@@QEAA@XZ
    CImmersiveSettingsCache();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBOOL@CImmersiveSettingsCache@@UEAAJW4SETTING_IDENTIFIER@@PEAH@Z
    virtual long GetBOOL(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDWORD@CImmersiveSettingsCache@@UEAAJW4SETTING_IDENTIFIER@@PEAK@Z
    virtual long GetDWORD(int, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChanged@CImmersiveSettingsCache@@UEAAJW4SETTING_IDENTIFIER@@@Z
    virtual long OnSettingChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSettingChange@CImmersiveSettingsCache@@UEAAJPEAUIImmersiveSettingsCacheNotification@@PEAK@Z
    virtual long RegisterForSettingChange(IImmersiveSettingsCacheNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForSettingChange@CImmersiveSettingsCache@@UEAAJK@Z
    virtual long UnregisterForSettingChange(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BoolSettingDefaultHandling@CImmersiveSettingsCache@@SA_NPEBUBoolSetting@@@Z
    static bool s_BoolSettingDefaultHandling(BoolSetting const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetGroupPolicyTristate@CImmersiveSettingsCache@@SA?AW4TRIBIT@@AEBU_GUID@@@Z
    static int s_GetGroupPolicyTristate(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShouldShowStoreAppsOnTaskbar@CImmersiveSettingsCache@@SA_NPEBUBoolSetting@@@Z
    static bool s_ShouldShowStoreAppsOnTaskbar(BoolSetting const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_SnapPivotModelDefault@CImmersiveSettingsCache@@SA_NPEBUBoolSetting@@@Z
    static bool s_SnapPivotModelDefault(BoolSetting const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveSettingsCache@@UEAA@XZ
    virtual ~CImmersiveSettingsCache();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeSetting@CImmersiveSettingsCache@@AEAAXW4SETTING_IDENTIFIER@@PEA_N@Z
    void _ComputeSetting(int, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSetting@CImmersiveSettingsCache@@AEAAXW4SETTING_IDENTIFIER@@PEAKPEA_N@Z
    void _LoadSetting(int, unsigned long *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSetting@CImmersiveSettingsCache@@AEAAXW4SETTING_IDENTIFIER@@PEA_N1@Z
    void _LoadSetting(int, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnSettingChanged@CImmersiveSettingsCache@@AEAAXW4SETTING_IDENTIFIER@@_N@Z
    void _OnSettingChanged(int, bool);
};
