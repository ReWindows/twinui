#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
// Base evidence: DirectUI::TouchHyperLink (likely; classinfo-template-instantiation).
class PreviousShareLink {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@PreviousShareLink@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@PreviousShareLink@@SAJXZ
    static long Register();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PreviousShareLink@@EEAA@XZ
    virtual ~PreviousShareLink();
};
