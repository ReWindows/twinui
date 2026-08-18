#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class CQuickLinkList {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQuickLinkList@@QEAA@XZ
    ~CQuickLinkList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CQuickLinkList@@IEAAJPEAVCQuickLinkInfoPriv@@@Z
    long Add(CQuickLinkInfoPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ClearList@CQuickLinkList@@IEAAXXZ
    void _ClearList();
};
