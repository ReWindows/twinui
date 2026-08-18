#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 31 member(s).
class HostedApplicationExperienceManager {
public:
    class HostedApplicationActivationContext;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@HostedApplicationExperienceManager@@UEAAJPEBG0PEAUIInspectable@@PEAUIHostedApplicationActivationManagerPrivateCallbacks@@1@Z
    virtual long ActivateApplication(unsigned short const *, unsigned short const *, IInspectable *, IHostedApplicationActivationManagerPrivateCallbacks *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationForDesigner@HostedApplicationExperienceManager@@UEAAJPEBG0PEAUIInspectable@@PEAUIHostedApplicationActivationManagerPrivateCallbacks@@@Z
    virtual long ActivateApplicationForDesigner(unsigned short const *, unsigned short const *, IInspectable *, IHostedApplicationActivationManagerPrivateCallbacks *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateForCoreApplicationBridge@HostedApplicationExperienceManager@@UEAAJPEBG0PEAUIInspectable@@PEAUIHostedApplicationActivationManagerPrivateCallbacks@@PEA_K@Z
    virtual long ActivateForCoreApplicationBridge(unsigned short const *, unsigned short const *, IInspectable *, IHostedApplicationActivationManagerPrivateCallbacks *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLaunchActivationArgs@HostedApplicationExperienceManager@@UEAAJPEBG0PEAPEAUIInspectable@@@Z
    virtual long CreateLaunchActivationArgs(unsigned short const *, unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOOPActivationArgs@HostedApplicationExperienceManager@@UEAAJPEBGPEAPEAUIInspectable@@@Z
    virtual long CreateOOPActivationArgs(unsigned short const *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCoreApplicationForContextId@HostedApplicationExperienceManager@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetCoreApplicationForContextId(unsigned int, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostedApplicationExperienceManager@@QEAA@XZ
    HostedApplicationExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrivilegedOperations@HostedApplicationExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long InitializePrivilegedOperations(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@HostedApplicationExperienceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PurgeUnrecoveredViews@HostedApplicationExperienceManager@@UEAAJXZ
    virtual long PurgeUnrecoveredViews();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReconnectBridgeToHostedApplication@HostedApplicationExperienceManager@@UEAAJPEAUHWND__@@KPEAPEAUIHostedApplication@@@Z
    virtual long ReconnectBridgeToHostedApplication(HWND__*, unsigned long, IHostedApplication * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeActivationTimeoutPolicy@HostedApplicationExperienceManager@@UEAAJI@Z
    virtual long RevokeActivationTimeoutPolicy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@HostedApplicationExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@HostedApplicationExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplicationExperienceManager@@UEAA@XZ
    virtual ~HostedApplicationExperienceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationWithOptions@HostedApplicationExperienceManager@@AEAAJPEBG0PEAUIInspectable@@PEAUIHostedApplicationActivationManagerPrivateCallbacks@@W4ActivateApplicationForExperienceOptions@@1PEA_K@Z
    long ActivateApplicationWithOptions(unsigned short const *, unsigned short const *, IInspectable *, IHostedApplicationActivationManagerPrivateCallbacks *, int, IInspectable *, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostViewPriority@HostedApplicationExperienceManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    void BoostViewPriority(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleViewCreated@HostedApplicationExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long HandleViewCreated(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleViewDestroyed@HostedApplicationExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long HandleViewDestroyed(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCallerProcessClose@HostedApplicationExperienceManager@@AEAAJI@Z
    long OnCallerProcessClose(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientWindowReadyForPresentationChanged@HostedApplicationExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewEvent@HostedApplicationExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long OnViewEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboostViewPriority@HostedApplicationExperienceManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    void UnboostViewPriority(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecoverViews@HostedApplicationExperienceManager@@AEAAJPEAUIViewEventDispatcherCrashRecovery@@@Z
    long _RecoverViews(IViewEventDispatcherCrashRecovery *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterMessages@HostedApplicationExperienceManager@@AEAAJPEAUIServiceProvider@@@Z
    long _RegisterMessages(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetActivationTimeoutPolicy@HostedApplicationExperienceManager@@AEAAJI@Z
    long _ResetActivationTimeoutPolicy(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartActivationTimeoutPolicy@HostedApplicationExperienceManager@@AEAAJIPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _StartActivationTimeoutPolicy(unsigned int, ::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterMessages@HostedApplicationExperienceManager@@AEAAJPEAUIServiceProvider@@@Z
    long _UnregisterMessages(IServiceProvider *);
};
