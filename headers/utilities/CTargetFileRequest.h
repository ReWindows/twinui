#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
class CTargetFileRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTargetFileRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTargetFileRequest@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CTargetFileRequest(::Microsoft::WRL::WeakRef);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CTargetFileRequest@@UEAAJPEAPEAUITargetFileRequestDeferral@Provider@Pickers@Storage@Windows@@@Z
    virtual long GetDeferral(::Windows::Storage::Pickers::Provider::ITargetFileRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTargetFileRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTargetFileRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTargetFileRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTargetFileRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTargetFileRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetFile@CTargetFileRequest@@UEAAJPEAPEAUIStorageFile@Storage@Windows@@@Z
    virtual long get_TargetFile(::Windows::Storage::IStorageFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetFile@CTargetFileRequest@@UEAAJPEAUIStorageFile@Storage@Windows@@@Z
    virtual long put_TargetFile(::Windows::Storage::IStorageFile *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTargetFileRequest@@UEAA@XZ
    virtual ~CTargetFileRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCompleted@CTargetFileRequest@@EEAAJXZ
    virtual long v_OnCompleted();
};
