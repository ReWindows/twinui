#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 37 member(s).
class CContactManagerBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContactManagerBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactManagerBroker@@QEAA@XZ
    CContactManagerBroker();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContactManagerBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContactManagerBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContactManagerBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CContactManagerBroker@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CContactManagerBroker@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowContactCardSupported@CContactManagerBroker@@UEAAJPEAE@Z
    virtual long IsShowContactCardSupported(unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContactManagerBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContactManagerBroker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContactCard@CContactManagerBroker@@UEAAJ_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@5@W4Placement@Popups@UI@5@PEAUIContactCardOptions@345@MEPEAPEAUIContactCardDelayedDataLoader@345@@Z
    virtual long ShowContactCard(uint64_t, ::Windows::ApplicationModel::Contacts::IContact *, WindissectOpaque, int, ::Windows::ApplicationModel::Contacts::IContactCardOptions *, float, unsigned char, ::Windows::ApplicationModel::Contacts::IContactCardDelayedDataLoader * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowContactCard2@CContactManagerBroker@@UEAAJ_KPEAUIContact@Contacts@ApplicationModel@Windows@@URect@Foundation@5@W4Placement@Popups@UI@5@PEAUIContactCardOptions@345@MEPEAPEAUIContactCardExperienceDelayedDataLoader@Internal@345@@Z
    virtual long ShowContactCard2(uint64_t, ::Windows::ApplicationModel::Contacts::IContact *, WindissectOpaque, int, ::Windows::ApplicationModel::Contacts::IContactCardOptions *, float, unsigned char, ::Windows::ApplicationModel::Contacts::Internal::IContactCardExperienceDelayedDataLoader * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContactCardExperience@CContactManagerBroker@@CAJPEAUHWND__@@PEAPEAUIContactCardExperience@PlatformExtensions@Internal@Windows@@@Z
    static long _GetContactCardExperience(HWND__*, ::Windows::Internal::PlatformExtensions::IContactCardExperience * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateCallingAppAndGetItsCurrentWindowAsHost@CContactManagerBroker@@CAJPEAUHWND__@@PEAPEAU2@@Z
    static long _ValidateCallingAppAndGetItsCurrentWindowAsHost(HWND__*, HWND__* *);
};
