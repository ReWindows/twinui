#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CTrayBatteryFlyoutExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrayBatteryFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CTrayBatteryFlyoutExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTrayBatteryFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTrayBatteryFlyoutExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTrayBatteryFlyoutExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CTrayBatteryFlyoutExperienceManager@@UEAAJXZ
    virtual long HideFlyout();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrayBatteryFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrayBatteryFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CTrayBatteryFlyoutExperienceManager@@UEAAJURect@Foundation@Windows@@@Z
    virtual long ShowFlyout(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrayBatteryFlyoutExperienceManager@@UEAA@XZ
    virtual ~CTrayBatteryFlyoutExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CTrayBatteryFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
};
