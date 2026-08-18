#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class StoreFrontHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@StoreFrontHelper@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@StoreFrontHelper@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@StoreFrontHelper@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StoreFrontHelper@@UEAA@XZ
    virtual ~StoreFrontHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceAppShutdown@StoreFrontHelper@@AEAAJPEBG@Z
    long ForceAppShutdown(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleWnf@StoreFrontHelper@@AEAAJJPEBG_NI@Z
    long HandleWnf(long, unsigned short const *, bool, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeApp@StoreFrontHelper@@AEAAJPEBG0@Z
    long ResumeApp(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToStoreWnfMessages@StoreFrontHelper@@AEAAJXZ
    long SubscribeToStoreWnfMessages();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfCallback@StoreFrontHelper@@AEAAJXZ
    long WnfCallback();
};
