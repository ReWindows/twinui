#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CLockScreenCallBrokerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLockScreenCallBrokerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@CLockScreenCallBrokerFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CLockScreenCallBrokerFactory@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CLockScreenCallBrokerFactory@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CLockScreenCallBrokerFactory@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenCallBrokerFactory@@UEAA@XZ
    virtual ~CLockScreenCallBrokerFactory();
};
