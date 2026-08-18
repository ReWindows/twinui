#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 51 member(s).
class CContactMapActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContactMapActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactMapActivatedEventArgs@@QEAA@XZ
    CContactMapActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContactMapActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContactMapActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContactMapActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContactMapActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContactMapActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CContactMapActivatedEventArgs@@QEAAJPEAUIContactAddress@Contacts@ApplicationModel@Windows@@PEAUIContact2@345@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Contacts::IContactAddress *, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Address@CContactMapActivatedEventArgs@@UEAAJPEAPEAUIContactAddress@Contacts@ApplicationModel@Windows@@@Z
    virtual long get_Address(::Windows::ApplicationModel::Contacts::IContactAddress * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CContactMapActivatedEventArgs@@UEAAJPEAPEAUIContact@Contacts@ApplicationModel@Windows@@@Z
    virtual long get_Contact(::Windows::ApplicationModel::Contacts::IContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CContactMapActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactMapActivatedEventArgs@@UEAA@XZ
    virtual ~CContactMapActivatedEventArgs();
};
