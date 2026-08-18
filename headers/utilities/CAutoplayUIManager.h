#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CAutoplayUIManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveUIData@CAutoplayUIManager@@QEAAJPEBG@Z
    long RemoveUIData(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExclusive@CAutoplayUIManager@@QEAAJPEBG@Z
    long SetExclusive(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAddUIData@CAutoplayUIManager@@QEAAJPEBGPEAVCAutoplayDialog@@_NPEA_N@Z
    long TryAddUIData(unsigned short const *, CAutoplayDialog *, bool, bool *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAutoplayUIManager@@QEAA@XZ
    ~CAutoplayUIManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDPA@CAutoplayUIManager@@AEAAJXZ
    long _EnsureDPA();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUIData@CAutoplayUIManager@@AEAAJPEBGPEAPEAVCAutoplayUIData@@@Z
    long _GetUIData(unsigned short const *, CAutoplayUIData * *);
};
