#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CImmersiveSplashScreenCF {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CImmersiveSplashScreenCF@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveSplashScreenCF@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CImmersiveSplashScreenCF@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CImmersiveSplashScreenCF@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveSplashScreenCF@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveSplashScreenCF@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveSplashScreenCF@@EEAA@XZ
    virtual ~CImmersiveSplashScreenCF();
};
