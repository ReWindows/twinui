#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CUpdateFilesResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CUpdateFilesResult@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUpdateFilesResult@@QEAA@XZ
    CUpdateFilesResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CUpdateFilesResult@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalShellItem@CUpdateFilesResult@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetOriginalShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CUpdateFilesResult@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamedFileCallback@CUpdateFilesResult@@UEAAJPEAPEAUIStreamedFileDataRequestedCallback@@@Z
    virtual long GetStreamedFileCallback(IStreamedFileDataRequestedCallback * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CUpdateFilesResult@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedShellItem@CUpdateFilesResult@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetUpdatedShellItem(IShellItem * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CUpdateFilesResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CUpdateFilesResult@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CUpdateFilesResult@@QEAAJPEAUIFileUpdateResult@@PEAUIStreamedFileDataRequestedCallback@@@Z
    long RuntimeClassInitialize(IFileUpdateResult *, IStreamedFileDataRequestedCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateResult@CUpdateFilesResult@@UEAAJPEAW4FileUpdateStatus@Provider@Storage@Windows@@@Z
    virtual long get_UpdateResult(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUpdateFilesResult@@UEAA@XZ
    virtual ~CUpdateFilesResult();
};
