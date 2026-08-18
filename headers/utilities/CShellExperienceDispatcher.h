#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 78 member(s).
class CShellExperienceDispatcher {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperienceDispatcher@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellExperienceDispatcher@@QEAA@XZ
    CShellExperienceDispatcher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CShellExperienceDispatcher@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperienceDispatcher@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperienceDispatcher@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperienceDispatcher@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShellExperienceDispatcher@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    virtual long Invoke(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CShellExperienceDispatcher@@UEAAJXZ
    virtual long Invoke();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRegisteredApp@CShellExperienceDispatcher@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsRegisteredApp(HSTRING__*, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperienceDispatcher@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CShellExperienceDispatcher@@UEAAJHPEBGPEAUIUnknown@@@Z
    virtual long QueueEvent(int, unsigned short const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForShellExperienceViewEvents@CShellExperienceDispatcher@@UEAAJPEAUHSTRING__@@00W4ShellExperienceRegistrationFlags@Experience@Shell@Internal@Windows@@PEAU?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@7@PEAUEventRegistrationToken@@@Z
    virtual long RegisterForShellExperienceViewEvents(HSTRING__*, HSTRING__*, HSTRING__*, int, WindissectOpaque *, EventRegistrationToken *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperienceDispatcher@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CShellExperienceDispatcher@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultHandlerForAppUserModelId@CShellExperienceDispatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long SetDefaultHandlerForAppUserModelId(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellExperienceChanged@CShellExperienceDispatcher@@UEAAJH@Z
    virtual long ShellExperienceChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CShellExperienceDispatcher@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForShellExperienceViewEvents@CShellExperienceDispatcher@@UEAAJUEventRegistrationToken@@@Z
    virtual long UnregisterForShellExperienceViewEvents(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CShellExperienceDispatcher@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellExperienceDispatcher@@UEAA@XZ
    virtual ~CShellExperienceDispatcher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BufferQueuedEvent@CShellExperienceDispatcher@@AEAAJHPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    long _BufferQueuedEvent(int, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushQueuedEvents@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _FlushQueuedEvents(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetExperienceIdForView@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHSTRING__@@@Z
    long _GetExperienceIdForView(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertySetForView@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUIPropertySet@Collections@Foundation@6@@Z
    long _GetPropertySetForView(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetViewWrapper@CShellExperienceDispatcher@@AEAAJHPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _GetViewWrapper(int, ::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeExperienceId@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _InitializeExperienceId(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializePropertySet@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _InitializePropertySet(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_KillQueuedEventWatchdogTimer@CShellExperienceDispatcher@@AEAAXXZ
    void _KillQueuedEventWatchdogTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyListener@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ShellExperienceViewState@Experience@456@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@6@@Z
    long _NotifyListener(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnNavigateToView@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _OnNavigateToView(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewCreated@CShellExperienceDispatcher@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long _OnViewCreated(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartQueuedEventWatchdogTimer@CShellExperienceDispatcher@@AEAAXXZ
    void _StartQueuedEventWatchdogTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_OnTimer@CShellExperienceDispatcher@@CAJXZ
    static long s_OnTimer();
};
