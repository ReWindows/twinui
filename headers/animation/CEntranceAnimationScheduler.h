#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CEntranceAnimationScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@CEntranceAnimationScheduler@@QEAAJPEAVElement@DirectUI@@@Z
    long AddElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Animate@CEntranceAnimationScheduler@@QEAAJXZ
    long Animate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEntranceAnimationScheduler@@QEAAJAEBUtagPOINT@@@Z
    long Initialize(tagPOINT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEntranceAnimationScheduler@@QEAA@XZ
    ~CEntranceAnimationScheduler();
};
