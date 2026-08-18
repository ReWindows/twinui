#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 35 member(s).
class CFileUpdateRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileUpdateRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileUpdateRequest@@QEAA@XZ
    CFileUpdateRequest();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CFileUpdateRequest@@UEAAJPEAPEAUIFileUpdateRequestDeferral@Provider@Storage@Windows@@@Z
    virtual long GetDeferral(::Windows::Storage::Provider::IFileUpdateRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileUpdateRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalShellItem@CFileUpdateRequest@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetOriginalShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileUpdateRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileUpdateRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileUpdateRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileUpdateRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileUpdateRequest@@QEAAJVWeakRef@WRL@Microsoft@@W4LOCAL_FILE_UPDATE_DISPOSITION@@PEAUIStorageFile@Storage@Windows@@@Z
    long RuntimeClassInitialize(::Microsoft::WRL::WeakRef, int, ::Windows::Storage::IStorageFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLocalFile@CFileUpdateRequest@@UEAAJPEAUIStorageFile@Storage@Windows@@@Z
    virtual long UpdateLocalFile(::Windows::Storage::IStorageFile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentId@CFileUpdateRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_File@CFileUpdateRequest@@UEAAJPEAPEAUIStorageFile@Storage@Windows@@@Z
    virtual long get_File(::Windows::Storage::IStorageFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Status@CFileUpdateRequest@@UEAAJPEAW4FileUpdateStatus@Provider@Storage@Windows@@@Z
    virtual long get_Status(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Status@CFileUpdateRequest@@UEAAJW4FileUpdateStatus@Provider@Storage@Windows@@@Z
    virtual long put_Status(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileUpdateRequest@@UEAA@XZ
    virtual ~CFileUpdateRequest();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValidatedUpdatedFile@CFileUpdateRequest@@AEAAJPEAPEAUIStorageItem@Storage@Windows@@@Z
    long _GetValidatedUpdatedFile(::Windows::Storage::IStorageItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCompleted@CFileUpdateRequest@@EEAAJXZ
    virtual long v_OnCompleted();
};
