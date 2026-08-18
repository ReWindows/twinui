#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CSyncSettingsProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangedSetting@CSyncSettingsProvider@@UEAAJPEAUISetting@@@Z
    virtual long ChangedSetting(ISetting *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CSyncSettingsProvider@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCollection@CSyncSettingsProvider@@UEAAJKPEBGPEAPEAUISettingsCollection@@@Z
    virtual long GetSettingsCollection(unsigned long, unsigned short const *, ISettingsCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CSyncSettingsProvider@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CSyncSettingsProvider@@UEAAJKPEBGPEAH@Z
    virtual long IsSupported(unsigned long, unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSyncSettingsProvider@@UEAA@XZ
    virtual ~CSyncSettingsProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingForBackgroundSync@CSyncSettingsProvider@@AEAAJPEBGW4DeviceAccessConsentValue@@PEAPEAUIBooleanSetting@@@Z
    long CreateSettingForBackgroundSync(unsigned short const *, int, IBooleanSetting * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionForSync@CSyncSettingsProvider@@CAJPEAPEAG@Z
    static long GetDescriptionForSync(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSyncSettingsProvider@@AEAAJK@Z
    long Initialize(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProcessInformation@CSyncSettingsProvider@@AEAAJK@Z
    long InitializeProcessInformation(unsigned long);
};
