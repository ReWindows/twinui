#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class CContactPostActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContactPostActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactPostActivatedEventArgs@@QEAA@XZ
    CContactPostActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContactPostActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContactPostActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContactPostActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContactPostActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContactPostActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CContactPostActivatedEventArgs@@QEAAJPEBG0PEAUIContact2@Contacts@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CContactPostActivatedEventArgs@@UEAAJPEAPEAUIContact@Contacts@ApplicationModel@Windows@@@Z
    virtual long get_Contact(::Windows::ApplicationModel::Contacts::IContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceId@CContactPostActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceUserId@CContactPostActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceUserId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CContactPostActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactPostActivatedEventArgs@@UEAA@XZ
    virtual ~CContactPostActivatedEventArgs();
};
