#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class SttExperienceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessage@SttExperienceManager@@UEAAJPEAUHSTRING__@@0W4GameChatMessageOrigin@UI@Gaming@Windows@@@Z
    virtual long AddMessage(HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMessageReceivedListener@SttExperienceManager@@UEAAJPEAUIInternalMessageReceivedListener@SttInternal@@@Z
    virtual long RegisterMessageReceivedListener(::SttInternal::IInternalMessageReceivedListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SttExperienceManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayBeforeClosingAfterMessageReceived@SttExperienceManager@@UEAAJUTimeSpan@Foundation@Windows@@@Z
    virtual long SetDelayBeforeClosingAfterMessageReceived(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@SttExperienceManager@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SttExperienceManager@@QEAA@XZ
    SttExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@SttExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@SttExperienceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@SttExperienceManager@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DesiredPosition@SttExperienceManager@@UEAAJPEAW4GameChatOverlayPosition@UI@Gaming@Windows@@@Z
    virtual long get_DesiredPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_DesiredPosition@SttExperienceManager@@UEAAJW4GameChatOverlayPosition@UI@Gaming@Windows@@@Z
    virtual long put_DesiredPosition(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SttExperienceManager@@UEAA@XZ
    virtual ~SttExperienceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePluginWindowTimerCallback@SttExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void ClosePluginWindowTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWindowTimerCallback@SttExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void CloseWindowTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHString@SttExperienceManager@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEAG@Z
    ::Microsoft::WRL::Wrappers::HString CreateHString(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideWindowTimerCallback@SttExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void HideWindowTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientWindowReadyForPresentationChanged@SttExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPluginAppViewEvent@SttExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long OnPluginAppViewEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewEvent@SttExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long OnViewEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHideAndCloseTimers@SttExperienceManager@@AEAAXXZ
    void ResetHideAndCloseTimers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowPosition@SttExperienceManager@@AEAAJXZ
    long SetWindowPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerHideAndCloseTimers@SttExperienceManager@@AEAAJXZ
    long TriggerHideAndCloseTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerPluginAppCloseTimer@SttExperienceManager@@AEAAJXZ
    long TriggerPluginAppCloseTimer();
};
