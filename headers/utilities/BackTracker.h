#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class BackTracker {
public:
    class ThreadSafeData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppLayoutChanged@BackTracker@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z
    virtual long AppLayoutChanged(IImmersiveMonitor *, IAppLayoutOperation *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackTracker@@QEAA@XZ
    BackTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InAppBackResult@BackTracker@@UEAAJPEAUIApplicationView@@W4InAppBackResponse@@@Z
    virtual long InAppBackResult(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBack@BackTracker@@UEAAJW4BACK_INVOKE_FLAGS@@@Z
    virtual long InvokeBack(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@BackTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@BackTracker@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BackTracker@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@BackTracker@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeChanged@BackTracker@@UEAAJW4_TABLETMODESTATE@@@Z
    virtual long TabletModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetChanged@BackTracker@@UEAAJW4SHELL_TARGET_IDENTIFIER@@PEAUIApplicationView@@@Z
    virtual long TargetChanged(int, IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@BackTracker@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackTracker@@UEAA@XZ
    virtual ~BackTracker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BackTracker@@AEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterDesktopMode@BackTracker@@AEAAJXZ
    long EnterDesktopMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSystemBack@BackTracker@@AEAAJXZ
    long InvokeSystemBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@BackTracker@@AEAAXW4State@1@@Z
    void Reset(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInAppBackState@BackTracker@@AEAAXXZ
    void ResetInAppBackState();
};
