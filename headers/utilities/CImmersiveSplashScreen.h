#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CImmersiveSplashScreen {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@CImmersiveSplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CImmersiveSplashScreen@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@CImmersiveSplashScreen@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationEnd@CImmersiveSplashScreen@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@CImmersiveSplashScreen@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@CImmersiveSplashScreen@@UEAAJXZ
    virtual long TransitionToApp();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveSplashScreen@@UEAA@XZ
    virtual ~CImmersiveSplashScreen();
};
