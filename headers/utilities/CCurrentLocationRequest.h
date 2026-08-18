#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
class CCurrentLocationRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCurrentLocationRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCurrentLocationRequest@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CCurrentLocationRequest(::Microsoft::WRL::WeakRef);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CCurrentLocationRequest@@UEAAJPEAPEAUICurrentLocationRequestDeferral@Provider@Pickers@Storage@Windows@@@Z
    virtual long GetDeferral(::Windows::Storage::Pickers::Provider::ICurrentLocationRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCurrentLocationRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCurrentLocationRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCurrentLocationRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCurrentLocationRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCurrentLocationRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CurrentLocation@CCurrentLocationRequest@@UEAAJPEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long get_CurrentLocation(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_CurrentLocation@CCurrentLocationRequest@@UEAAJPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long put_CurrentLocation(::Windows::Storage::IStorageFolder *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCurrentLocationRequest@@UEAA@XZ
    virtual ~CCurrentLocationRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCompleted@CCurrentLocationRequest@@EEAAJXZ
    virtual long v_OnCompleted();
};
