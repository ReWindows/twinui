#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CImmersiveSessionIdleDetector {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveSessionIdleDetector@@QEAA@XZ
    CImmersiveSessionIdleDetector();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdleState@CImmersiveSessionIdleDetector@@UEAAJPEAH@Z
    virtual long GetIdleState(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CImmersiveSessionIdleDetector@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CImmersiveSessionIdleDetector@@UEAAJPEAUIImmersiveSessionIdleNotification@@PEAK@Z
    virtual long Register(IImmersiveSessionIdleNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResumeSessionIdleDetector@CImmersiveSessionIdleDetector@@UEAAJXZ
    virtual long ResumeSessionIdleDetector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveSessionIdleDetector@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuspendSessionIdleDetector@CImmersiveSessionIdleDetector@@UEAAJXZ
    virtual long SuspendSessionIdleDetector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CImmersiveSessionIdleDetector@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveSessionIdleDetector@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveSessionIdleDetector@@UEAA@XZ
    virtual ~CImmersiveSessionIdleDetector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishWNF@CImmersiveSessionIdleDetector@@AEAAXXZ
    void _PublishWNF();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateIdleStateAndNotify@CImmersiveSessionIdleDetector@@AEAAJXZ
    long _UpdateIdleStateAndNotify();
};
