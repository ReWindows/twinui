#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class CContactMessageActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContactMessageActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactMessageActivatedEventArgs@@QEAA@XZ
    CContactMessageActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContactMessageActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContactMessageActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContactMessageActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContactMessageActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContactMessageActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CContactMessageActivatedEventArgs@@QEAAJPEBG0PEAUIContact2@Contacts@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CContactMessageActivatedEventArgs@@UEAAJPEAPEAUIContact@Contacts@ApplicationModel@Windows@@@Z
    virtual long get_Contact(::Windows::ApplicationModel::Contacts::IContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceId@CContactMessageActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceUserId@CContactMessageActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceUserId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CContactMessageActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactMessageActivatedEventArgs@@UEAA@XZ
    virtual ~CContactMessageActivatedEventArgs();
};
