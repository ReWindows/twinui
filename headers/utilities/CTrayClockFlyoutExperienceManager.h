#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CTrayClockFlyoutExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrayClockFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTrayClockFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTrayClockFlyoutExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTrayClockFlyoutExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CTrayClockFlyoutExperienceManager@@UEAAJXZ
    virtual long HideFlyout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CTrayClockFlyoutExperienceManager@@UEAAJPEAE@Z
    virtual long IsVisible(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrayClockFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrayClockFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CTrayClockFlyoutExperienceManager@@UEAAJURect@Foundation@Windows@@@Z
    virtual long ShowFlyout(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrayClockFlyoutExperienceManager@@UEAA@XZ
    virtual ~CTrayClockFlyoutExperienceManager();
};
