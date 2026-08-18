#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 51 member(s).
class ModalWindowExperienceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeModalExperienceProperties@ModalWindowExperienceManager@@UEAAJUEventRegistrationToken@@PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@Z
    virtual long ChangeModalExperienceProperties(EventRegistrationToken, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@ModalWindowExperienceManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long Dismiss(EventRegistrationToken);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExistingExperienceForOwnerWindow@ModalWindowExperienceManager@@UEAAJIPEAUEventRegistrationToken@@@Z
    virtual long GetExistingExperienceForOwnerWindow(unsigned int, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrivilegedOperations@ModalWindowExperienceManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long InitializePrivilegedOperations(_GUID const &, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModalWindowExperienceManager@@QEAA@XZ
    ModalWindowExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChromeOffsetsChanged@ModalWindowExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z
    virtual long OnChromeOffsetsChanged(IApplicationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@ModalWindowExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z
    virtual long OnCommand(IApplicationFrame *, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@ModalWindowExperienceManager@@UEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@ModalWindowExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionChanged@ModalWindowExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z
    virtual long OnPositionChanged(IApplicationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@ModalWindowExperienceManager@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareForDesktopModalExperience@ModalWindowExperienceManager@@UEAAJJ@Z
    virtual long PrepareForDesktopModalExperience(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ModalWindowExperienceManager@@QEAAJPEBGAEBU_GUID@@@Z
    long RuntimeClassInitialize(unsigned short const *, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowDependentView@ModalWindowExperienceManager@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@IPEAUIModalExperienceDefaultOptions@ModalExperience@456@@Z
    virtual long ShowDependentView(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, unsigned int, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowExperience@ModalWindowExperienceManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long ShowExperience(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowForContractByAppID@ModalWindowExperienceManager@@UEAAJPEAUHSTRING__@@0PEAUIInspectable@@PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@IPEAU?$ITypedEventHandler@PEAUIModalWindowExperienceManager@ModalExperience@Shell@Internal@Windows@@PEAUIModalExperienceEventArgs@2345@@Foundation@8@PEAUEventRegistrationToken@@@Z
    virtual long ShowForContractByAppID(HSTRING__*, HSTRING__*, IInspectable *, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, unsigned int, WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowForContractWithPlugin@ModalWindowExperienceManager@@UEAAJPEAUHSTRING__@@00U_GUID@@PEAUIInspectable@@PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@IPEAU?$ITypedEventHandler@PEAUIModalWindowExperienceManager@ModalExperience@Shell@Internal@Windows@@PEAUIModalExperienceEventArgs@2345@@Foundation@9@PEAUEventRegistrationToken@@@Z
    virtual long ShowForContractWithPlugin(HSTRING__*, HSTRING__*, HSTRING__*, _GUID, IInspectable *, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, unsigned int, WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowForLaunch@ModalWindowExperienceManager@@UEAAJPEAUHSTRING__@@0PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@IPEAU?$ITypedEventHandler@PEAUIModalWindowExperienceManager@ModalExperience@Shell@Internal@Windows@@PEAUIModalExperienceEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@Z
    virtual long ShowForLaunch(HSTRING__*, HSTRING__*, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, unsigned int, WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@ModalWindowExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterFromModalExperienceEvents@ModalWindowExperienceManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long UnregisterFromModalExperienceEvents(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@ModalWindowExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedFromHolographic@ModalWindowExperienceManager@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedFromHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewTransitionedToHolographic@ModalWindowExperienceManager@@UEAAJPEAUIApplicationView@@@Z
    virtual long ViewTransitionedToHolographic(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@ModalWindowExperienceManager@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeExperiencePropertiesForView@ModalWindowExperienceManager@@AEAAJPEAUViewInfo@@PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@_N@Z
    long _ChangeExperiencePropertiesForView(ViewInfo *, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseWindowIfOwned@ModalWindowExperienceManager@@CAHPEAUHWND__@@_J@Z
    static int _CloseWindowIfOwned(HWND__*, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissView@ModalWindowExperienceManager@@AEAAJPEAUViewInfo@@@Z
    long _DismissView(ViewInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissViewAndRemoveExperience@ModalWindowExperienceManager@@AEAAJPEBUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _DismissViewAndRemoveExperience(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissViewAndRemoveExperience@ModalWindowExperienceManager@@AEAAJUEventRegistrationToken@@@Z
    long _DismissViewAndRemoveExperience(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHolographicModalExperienceManager@ModalWindowExperienceManager@@AEAAJXZ
    long _EnsureHolographicModalExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultWindowRelativeSize@ModalWindowExperienceManager@@AEAAJPEBUViewInfo@@PEAUtagSIZE@@@Z
    long _GetDefaultWindowRelativeSize(ViewInfo const *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetModalWindowPosition@ModalWindowExperienceManager@@AEAAJPEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@PEBUViewInfo@@_NPEAUtagRECT@@@Z
    long _GetModalWindowPosition(::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, ViewInfo const *, bool, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InvokeModalExperienceEventForExperience@ModalWindowExperienceManager@@CAJPEAUIModalWindowExperienceManager@ModalExperience@Shell@Internal@Windows@@PEBUViewInfo@@W4ModalExperienceViewState@3456@@Z
    static long _InvokeModalExperienceEventForExperience(::Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *, ViewInfo const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsFixedSizeModalExperience@ModalWindowExperienceManager@@CA_NPEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@Z
    static bool _IsFixedSizeModalExperience(::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KeepAppAlive@ModalWindowExperienceManager@@AEAAJPEAUViewInfo@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    long _KeepAppAlive(ViewInfo *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClientWindowReadyForPresentationChanged@ModalWindowExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long _OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewCreated@ModalWindowExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z
    long _OnViewCreated(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewEvent@ModalWindowExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long _OnViewEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PushLatestFullscreenRectToFrameAsync@ModalWindowExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@W4WaitOptions@1@@Z
    long _PushLatestFullscreenRectToFrameAsync(IApplicationFrameWrapper *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForHookService@ModalWindowExperienceManager@@AEAAJXZ
    long _RegisterForHookService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetWindowTitle@ModalWindowExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEBG@Z
    long _SetWindowTitle(IApplicationFrameWrapper *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldForwardForHolographicModalExperience@ModalWindowExperienceManager@@AEAA_NI@Z
    bool _ShouldForwardForHolographicModalExperience(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldForwardForHolographicModalExperience@ModalWindowExperienceManager@@AEAA_NUEventRegistrationToken@@@Z
    bool _ShouldForwardForHolographicModalExperience(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowView@ModalWindowExperienceManager@@AEAAJPEBUViewInfo@@@Z
    long _ShowView(ViewInfo const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrySetExperienceMinimumSize@ModalWindowExperienceManager@@AEAAJPEBUViewInfo@@PEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@PEBUtagRECT@@_N@Z
    long _TrySetExperienceMinimumSize(ViewInfo const *, ::Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *, tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnRegisterForHookService@ModalWindowExperienceManager@@AEAAXXZ
    void _UnRegisterForHookService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ExitFullScreen@ModalWindowExperienceManager@@CAJPEAUIServiceProvider@@PEAUHWND__@@@Z
    static long s_ExitFullScreen(IServiceProvider *, HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModalWindowExperienceManager@@EEAA@XZ
    virtual ~ModalWindowExperienceManager();
};
