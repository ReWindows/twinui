#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CTrayMtcUvcFlyoutExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTrayMtcUvcFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CTrayMtcUvcFlyoutExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTrayMtcUvcFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTrayMtcUvcFlyoutExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTrayMtcUvcFlyoutExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CTrayMtcUvcFlyoutExperienceManager@@UEAAJXZ
    virtual long HideFlyout();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTrayMtcUvcFlyoutExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTrayMtcUvcFlyoutExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTrayMtcUvcFlyoutExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CTrayMtcUvcFlyoutExperienceManager@@UEAAJURect@Foundation@Windows@@@Z
    virtual long ShowFlyout(WindissectOpaque);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTrayMtcUvcFlyoutExperienceManager@@EEAA@XZ
    virtual ~CTrayMtcUvcFlyoutExperienceManager();
};
