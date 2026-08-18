#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class TransitionCoordinator {
public:
    class ThreadSafeData;
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWaitingOnIncomingTransition@TransitionCoordinator@@UEAAJPEAH@Z
    virtual long IsWaitingOnIncomingTransition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIncomingTransitionStarted@TransitionCoordinator@@UEAAJXZ
    virtual long OnIncomingTransitionStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOutgoingTransitionCompleted@TransitionCoordinator@@UEAAJXZ
    virtual long OnOutgoingTransitionCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOutgoingTransitionStarting@TransitionCoordinator@@UEAAJXZ
    virtual long OnOutgoingTransitionStarting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimerElapsed@TransitionCoordinator@@UEAAJXZ
    virtual long OnTimerElapsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTransitionNotifications@TransitionCoordinator@@UEAAJPEAUITransitionNotification@@PEAK@Z
    virtual long RegisterForTransitionNotifications(ITransitionNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TransitionCoordinator@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@TransitionCoordinator@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeChanged@TransitionCoordinator@@UEAAJW4_TABLETMODESTATE@@@Z
    virtual long TabletModeChanged(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionCoordinator@@QEAA@XZ
    TransitionCoordinator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForTransitionNotifications@TransitionCoordinator@@UEAAJK@Z
    virtual long UnregisterForTransitionNotifications(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@TransitionCoordinator@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionCoordinator@@UEAA@XZ
    virtual ~TransitionCoordinator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFacadeTimeoutTimer@TransitionCoordinator@@AEAAJXZ
    long CancelFacadeTimeoutTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopCoordination@TransitionCoordinator@@AEAAJW4StopCoordinationReason@TransitionCoordinatorTelemetry@@@Z
    long StopCoordination(int);
};
