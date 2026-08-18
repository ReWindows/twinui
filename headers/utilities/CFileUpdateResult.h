#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CFileUpdateResult {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileUpdateStatus@CFileUpdateResult@@UEAAJPEAK@Z
    virtual long GetFileUpdateStatus(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOriginalShellItem@CFileUpdateResult@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetOriginalShellItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedShellItem@CFileUpdateResult@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetUpdatedShellItem(IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileUpdateResult@@QEAAJPEAUIFileUpdateRequest@Provider@Storage@Windows@@PEAUIShellItem@@@Z
    long RuntimeClassInitialize(::Windows::Storage::Provider::IFileUpdateRequest *, IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileUpdateResult@@UEAA@XZ
    virtual ~CFileUpdateResult();
};
