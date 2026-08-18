#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace DirectUI {
class RichText {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentSize@RichText@DirectUI@@UEAA?AUtagSIZE@@HHPEAVSurface@2@@Z
    virtual tagSIZE GetContentSize(int, int, ::DirectUI::Surface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Paint@RichText@DirectUI@@UEAAXPEAUHDC__@@PEBUtagRECT@@1PEAU4@2@Z
    virtual void Paint(HDC__*, tagRECT const *, tagRECT const *, tagRECT *, tagRECT *);
};
} // namespace DirectUI
