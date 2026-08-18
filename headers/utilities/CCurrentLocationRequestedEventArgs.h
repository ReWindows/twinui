#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CCurrentLocationRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCurrentLocationRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCurrentLocationRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCurrentLocationRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCurrentLocationRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCurrentLocationRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCurrentLocationRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CCurrentLocationRequestedEventArgs@@UEAAJPEAPEAUICurrentLocationRequest@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_Request(::Windows::Storage::Pickers::Provider::ICurrentLocationRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCurrentLocationRequestedEventArgs@@UEAA@XZ
    virtual ~CCurrentLocationRequestedEventArgs();
};
