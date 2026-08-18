#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class CContactVideoCallActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CContactVideoCallActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CContactVideoCallActivatedEventArgs@@QEAA@XZ
    CContactVideoCallActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CContactVideoCallActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CContactVideoCallActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CContactVideoCallActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CContactVideoCallActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CContactVideoCallActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CContactVideoCallActivatedEventArgs@@QEAAJPEBG0PEAUIContact2@Contacts@ApplicationModel@Windows@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Contact@CContactVideoCallActivatedEventArgs@@UEAAJPEAPEAUIContact@Contacts@ApplicationModel@Windows@@@Z
    virtual long get_Contact(::Windows::ApplicationModel::Contacts::IContact * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceId@CContactVideoCallActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ServiceUserId@CContactVideoCallActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ServiceUserId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CContactVideoCallActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CContactVideoCallActivatedEventArgs@@UEAA@XZ
    virtual ~CContactVideoCallActivatedEventArgs();
};
