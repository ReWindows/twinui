#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 28 member(s).
class CPlaybackManager {
public:
    class HostedAppContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppClosing@CPlaybackManager@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long AppClosing(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CPlaybackManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CPlaybackManager@@UEAAJPEBG_KPEAUHWND__@@W4HOSTED_APP_CHANGED@@@Z
    virtual long ApplicationChanged(unsigned short const *, uint64_t, HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CPlaybackManager@@UEAAJPEBG_KW4IMM_APP_CHANGED@@@Z
    virtual long ApplicationChanged(unsigned short const *, uint64_t, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPlaybackManager@@QEAA@XZ
    CPlaybackManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CPlaybackManager@@UEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@CPlaybackManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnServiceStateChanged@CPlaybackManager@@UEAAXK@Z
    virtual void OnServiceStateChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CPlaybackManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CPlaybackManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAggregateApplicationState@CPlaybackManager@@AEAAJ_KPEAH111@Z
    long ComputeAggregateApplicationState(uint64_t, int *, int *, int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAggregateHostedApplicationState@CPlaybackManager@@AEAAJPEBG_KQEAUHWND__@@W4HOSTED_APP_CHANGED@@PEAW43@PEA_N@Z
    long ComputeAggregateHostedApplicationState(unsigned short const *, uint64_t, HWND__* const, int, int *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPBMBindingHandle@CPlaybackManager@@AEAAJPEAPEAX@Z
    long GetPBMBindingHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IamAppChanged_2_PbmInteractivityChanged@CPlaybackManager@@AEAA?AW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@W4IMM_APP_CHANGED@@H@Z
    int IamAppChanged_2_PbmInteractivityChanged(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLastInstanceOfApplication@CPlaybackManager@@AEAAJPEBG_KPEAUIImmersiveApplication@@PEAH@Z
    long IsLastInstanceOfApplication(unsigned short const *, uint64_t, IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSessionIdle@CPlaybackManager@@AEAAHXZ
    int IsSessionIdle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAppCrusherNotification@CPlaybackManager@@AEAAJPEAUIServiceProvider@@@Z
    long RegisterAppCrusherNotification(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterApplicationNotification@CPlaybackManager@@AEAAJPEAUIServiceProvider@@@Z
    long RegisterApplicationNotification(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSessionIdleNotification@CPlaybackManager@@AEAAJPEAUIServiceProvider@@@Z
    long RegisterSessionIdleNotification(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportAppInteractivityChange@CPlaybackManager@@AEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@@Z
    long ReportAppInteractivityChange(unsigned short const *, uint64_t, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryFindContextForHostedApp@CPlaybackManager@@AEAA?AV?$shared_ptr@UHostedAppContext@CPlaybackManager@@@utl@@PEBG_K@Z
    WindissectOpaque TryFindContextForHostedApp(unsigned short const *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppCrusherNotification@CPlaybackManager@@AEAAXPEAUIServiceProvider@@@Z
    void UnregisterAppCrusherNotification(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterApplicationNotification@CPlaybackManager@@AEAAXPEAUIServiceProvider@@@Z
    void UnregisterApplicationNotification(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterSessionIdleNotification@CPlaybackManager@@AEAAXXZ
    void UnregisterSessionIdleNotification();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlaybackManager@@EEAA@XZ
    virtual ~CPlaybackManager();
};
