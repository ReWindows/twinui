#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CDeviceSettingsProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangedSetting@CDeviceSettingsProvider@@UEAAJPEAUISetting@@@Z
    virtual long ChangedSetting(ISetting *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CDeviceSettingsProvider@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCollection@CDeviceSettingsProvider@@UEAAJKPEBGPEAPEAUISettingsCollection@@@Z
    virtual long GetSettingsCollection(unsigned long, unsigned short const *, ISettingsCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CDeviceSettingsProvider@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CDeviceSettingsProvider@@UEAAJKPEBGPEAH@Z
    virtual long IsSupported(unsigned long, unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceSettingsProvider@@UEAA@XZ
    virtual ~CDeviceSettingsProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingForInterfaceClassCapability@CDeviceSettingsProvider@@AEAAJPEBG0W4DeviceAccessConsentValue@@PEAPEAUIBooleanSetting@@@Z
    long CreateSettingForInterfaceClassCapability(unsigned short const *, unsigned short const *, int, IBooleanSetting * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingForModelCapability@CDeviceSettingsProvider@@AEAAJPEBG0W4DeviceAccessConsentValue@@PEAPEAUIBooleanSetting@@@Z
    long CreateSettingForModelCapability(unsigned short const *, unsigned short const *, int, IBooleanSetting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilityNameFromInterfaceClassGuid@CDeviceSettingsProvider@@AEAAJPEBGPEAPEAG@Z
    long GetCapabilityNameFromInterfaceClassGuid(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilityNameFromModelID@CDeviceSettingsProvider@@CAJPEBGPEAPEAG@Z
    static long GetCapabilityNameFromModelID(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceSettingsProvider@@AEAAJK@Z
    long Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProcessInformation@CDeviceSettingsProvider@@AEAAJK@Z
    long InitializeProcessInformation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeviceConsent@CDeviceSettingsProvider@@AEAAJPEBG0W4DeviceAccessConsentValue@@@Z
    long UpdateDeviceConsent(unsigned short const *, unsigned short const *, int);
};
