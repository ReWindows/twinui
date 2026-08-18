#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class DesktopContactCardExperienceDelayedDataLoader {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopContactCardExperienceDelayedDataLoader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopContactCardExperienceDelayedDataLoader@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopContactCardExperienceDelayedDataLoader@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopContactCardExperienceDelayedDataLoader@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopContactCardExperienceDelayedDataLoader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopContactCardExperienceDelayedDataLoader@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@DesktopContactCardExperienceDelayedDataLoader@@UEAAJPEAUIContact@Contacts@ApplicationModel@Windows@@@Z
    virtual long SetData(::Windows::ApplicationModel::Contacts::IContact *);
};
