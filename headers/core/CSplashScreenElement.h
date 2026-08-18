#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
// Base evidence: DirectUI::Element (likely; classinfo-template-instantiation).
class CSplashScreenElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSplashScreenElement@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroy@CSplashScreenElement@@UEAAXXZ
    virtual void OnDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CSplashScreenElement@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutDoLayout@CSplashScreenElement@@UEAAXHH@Z
    virtual void _SelfLayoutDoLayout(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SelfLayoutUpdateDesiredSize@CSplashScreenElement@@UEAA?AUtagSIZE@@HHPEAVSurface@DirectUI@@@Z
    virtual tagSIZE _SelfLayoutUpdateDesiredSize(int, int, ::DirectUI::Surface *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplashScreenElement@@UEAA@XZ
    virtual ~CSplashScreenElement();
};
