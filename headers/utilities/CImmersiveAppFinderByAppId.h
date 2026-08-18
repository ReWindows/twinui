#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class CImmersiveAppFinderByAppId {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveAppFinderByAppId@@QEAA@PEAUIImmersiveApplication@@@Z
    CImmersiveAppFinderByAppId(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CImmersiveAppFinderByAppId@@QEBAHAEBV?$ComPtr@UIProjectionContext@@@WRL@Microsoft@@0@Z
    int Compare(WindissectOpaque const &, WindissectOpaque const &) const;
};
