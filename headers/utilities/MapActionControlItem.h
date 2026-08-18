#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 38 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class MapActionControlItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAction@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJ_K0W4ActivationSource@2345@PEAUHSTRING__@@@Z
    virtual long ExecuteAction(uint64_t, uint64_t, int, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAddress@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUIContactAddress@345@@Z
    virtual long GetAddress(::Windows::ApplicationModel::Contacts::IContactAddress * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@QEAA@XZ
    MapActionControlItem();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUIContact2@345@PEAUHSTRING__@@1PEAUIContactAddress@345@PEAUIShellItem@@PEAUIContactPreferenceManager@2345@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Contacts::IContact2*, HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Contacts::IContactAddress *, IShellItem *, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~MapActionControlItem();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactFullAddress@MapActionControlItem@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUIContactAddress@345@PEAPEAUHSTRING__@@@Z
    long GetContactFullAddress(::Windows::ApplicationModel::Contacts::IContactAddress *, HSTRING__* *);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
