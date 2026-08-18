#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CNotificationsSettingProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangedSetting@CNotificationsSettingProvider@@UEAAJPEAUISetting@@@Z
    virtual long ChangedSetting(ISetting *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@CNotificationsSettingProvider@@UEAAJPEAPEAG@Z
    virtual long GetDescription(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsCollection@CNotificationsSettingProvider@@UEAAJKPEBGPEAPEAUISettingsCollection@@@Z
    virtual long GetSettingsCollection(unsigned long, unsigned short const *, ISettingsCollection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@CNotificationsSettingProvider@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@CNotificationsSettingProvider@@UEAAJKPEBGPEAH@Z
    virtual long IsSupported(unsigned long, unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotificationsSettingProvider@@UEAA@XZ
    virtual ~CNotificationsSettingProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CNotificationsSettingProvider@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadDescription@CNotificationsSettingProvider@@AEAAJPEAPEAG@Z
    long _LoadDescription(unsigned short * *);
};
