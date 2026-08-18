#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class DesktopContactCardExperience {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@DesktopContactCardExperience@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@DesktopContactCardExperience@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@DesktopContactCardExperience@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@DesktopContactCardExperience@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@DesktopContactCardExperience@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@DesktopContactCardExperience@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@DesktopContactCardExperience@@UEAAJPEAE@Z
    virtual long IsSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@DesktopContactCardExperience@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DesktopContactCardExperience@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContactCard@DesktopContactCardExperience@@UEAAJ_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@5@W4Placement@Popups@UI@5@PEAUIContactCardOptions@345@MEPEAPEAUIContactCardExperienceDelayedDataLoader@Internal@345@@Z
    virtual long ShowContactCard(uint64_t, ::Windows::ApplicationModel::Contacts::IContact *, WindissectOpaque, int, ::Windows::ApplicationModel::Contacts::IContactCardOptions *, float, unsigned char, ::Windows::ApplicationModel::Contacts::Internal::IContactCardExperienceDelayedDataLoader * *);
};
