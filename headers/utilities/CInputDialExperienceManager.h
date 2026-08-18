#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 95 member(s).
class CInputDialExperienceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCustomMenuItemWithGlyph@CInputDialExperienceManager@@UEAAJ_KIIPEAUHSTRING__@@111I@Z
    virtual long AddCustomMenuItemWithGlyph(uint64_t, unsigned int, unsigned int, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCustomMenuItemWithIcon@CInputDialExperienceManager@@UEAAJ_KIIPEAUHSTRING__@@IPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long AddCustomMenuItemWithIcon(uint64_t, unsigned int, unsigned int, HSTRING__*, unsigned int, ::Windows::Storage::Streams::IRandomAccessStreamReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCustomMenuItemWithKnownIcon@CInputDialExperienceManager@@UEAAJ_KIIPEAUHSTRING__@@II@Z
    virtual long AddCustomMenuItemWithKnownIcon(uint64_t, unsigned int, unsigned int, HSTRING__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateIn@CInputDialExperienceManager@@UEAAJXZ
    virtual long AnimateIn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateOut@CInputDialExperienceManager@@UEAAJXZ
    virtual long AnimateOut();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimatePreviewMenuIn@CInputDialExperienceManager@@UEAAJXZ
    virtual long AnimatePreviewMenuIn();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputDialExperienceManager@@QEAA@XZ
    CInputDialExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAnimation@CInputDialExperienceManager@@UEAAJXZ
    virtual long CancelAnimation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelToolPreviewDismissTimer@CInputDialExperienceManager@@UEAAJXZ
    virtual long CancelToolPreviewDismissTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCustomItems@CInputDialExperienceManager@@UEAAJ_KI@Z
    virtual long ClearCustomItems(uint64_t, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMenu@CInputDialExperienceManager@@UEAAJXZ
    virtual long ClearMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CInputDialExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyView@CInputDialExperienceManager@@UEAAJXZ
    virtual long DestroyView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindApplicationController@CInputDialExperienceManager@@UEAAJPEAUHWND__@@PEA_NPEAPEAU2@@Z
    virtual long FindApplicationController(HWND__*, bool *, HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedMenuItem@CInputDialExperienceManager@@UEAAJ_KPEAI1@Z
    virtual long GetSelectedMenuItem(uint64_t, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideViewExperience@CInputDialExperienceManager@@UEAAJXZ
    virtual long HideViewExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@CInputDialExperienceManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@CInputDialExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeDispatched@CInputDialExperienceManager@@UEAAJ_K@Z
    virtual long InvokeDispatched(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewExperienceVisible@CInputDialExperienceManager@@UEAA_NXZ
    virtual bool IsViewExperienceVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewDismissed@CInputDialExperienceManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MultitaskingViewShown@CInputDialExperienceManager@@UEAAJW4MULTITASKING_VIEW_TYPES@@@Z
    virtual long MultitaskingViewShown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CInputDialExperienceManager@@UEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@CInputDialExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialButton@CInputDialExperienceManager@@UEAAJ_N@Z
    virtual long OnInputDialButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialOnScreenContactEnd@CInputDialExperienceManager@@UEAAJXZ
    virtual long OnInputDialOnScreenContactEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialOnScreenContactMove@CInputDialExperienceManager@@UEAAJUtagPOINT@@@Z
    virtual long OnInputDialOnScreenContactMove(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialOnScreenContactStart@CInputDialExperienceManager@@UEAAJUtagPOINT@@UtagRECT@@@Z
    virtual long OnInputDialOnScreenContactStart(tagPOINT, tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialRotate@CInputDialExperienceManager@@UEAAJH@Z
    virtual long OnInputDialRotate(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialRoutedAway@CInputDialExperienceManager@@UEAAJXZ
    virtual long OnInputDialRoutedAway();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialRoutedTo@CInputDialExperienceManager@@UEAAJXZ
    virtual long OnInputDialRoutedTo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialSystemButton@CInputDialExperienceManager@@UEAAJ_N@Z
    virtual long OnInputDialSystemButton(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInputDialTouch@CInputDialExperienceManager@@UEAAJ_N@Z
    virtual long OnInputDialTouch(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CInputDialExperienceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPairedStateChanged@CInputDialExperienceManager@@UEAAJ_N@Z
    virtual long OnPairedStateChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CInputDialExperienceManager@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshIhmStateAndPosition@CInputDialExperienceManager@@UEAAJPEAW4IHM_DISPLAY_MODE@@@Z
    virtual long RefreshIhmStateAndPosition(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CInputDialExperienceManager@@UEAAJ_K0PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAIPEAUEventRegistrationToken@@@Z
    virtual long Register(uint64_t, uint64_t, WindissectOpaque *, unsigned int *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCustomMenuItem@CInputDialExperienceManager@@UEAAJ_KII@Z
    virtual long RemoveCustomMenuItem(uint64_t, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionInputDialMenuIfIntersectsWithIHM@CInputDialExperienceManager@@UEAAJXZ
    virtual long RepositionInputDialMenuIfIntersectsWithIHM();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDefaultMenuItems@CInputDialExperienceManager@@UEAAJ_K@Z
    virtual long ResetDefaultMenuItems(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInputDialExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectDefaultMenuItem@CInputDialExperienceManager@@UEAAJ_KIPEAE@Z
    virtual long SelectDefaultMenuItem(uint64_t, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectMenuItem@CInputDialExperienceManager@@UEAAJH@Z
    virtual long SelectMenuItem(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectPreviouslyActiveMenuItem@CInputDialExperienceManager@@UEAAJ_KPEAE@Z
    virtual long SelectPreviouslyActiveMenuItem(uint64_t, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendLastKnownOnScreenInfo@CInputDialExperienceManager@@UEAAJXZ
    virtual long SendLastKnownOnScreenInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationController@CInputDialExperienceManager@@UEAAJ_KE0E@Z
    virtual long SetApplicationController(uint64_t, unsigned char, uint64_t, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultMenuItems@CInputDialExperienceManager@@UEAAJ_KPEAU?$IIterable@W4RadialControllerSystemMenuItemKind@Input@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long SetDefaultMenuItems(uint64_t, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSelectedMenuItem@CInputDialExperienceManager@@UEAAJ_KIIPEAE@Z
    virtual long SetSelectedMenuItem(uint64_t, unsigned int, unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowViewExperience@CInputDialExperienceManager@@UEAAJXZ
    virtual long ShowViewExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDeviceListener@CInputDialExperienceManager@@UEAAJXZ
    virtual long StartDeviceListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartToolPreviewDismissTimer@CInputDialExperienceManager@@UEAAJXZ
    virtual long StartToolPreviewDismissTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressMenu@CInputDialExperienceManager@@UEAAJ_KE0@Z
    virtual long SuppressMenu(uint64_t, unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CInputDialExperienceManager@@UEAAJ_KIUEventRegistrationToken@@@Z
    virtual long Unregister(uint64_t, unsigned int, EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputDialExperienceManager@@UEAA@XZ
    virtual ~CInputDialExperienceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMenuItemToJsonPayload@CInputDialExperienceManager@@AEAAJAEBUInputDialMenuItem@@@Z
    long AddMenuItemToJsonPayload(InputDialMenuItem const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndUpdateOnScreenState@CInputDialExperienceManager@@AEAAX_K@Z
    void CheckAndUpdateOnScreenState(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDelaySettingsDataLoadInvoked@CInputDialExperienceManager@@AEAAXXZ
    void EnsureDelaySettingsDataLoadInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureImmersiveShell@CInputDialExperienceManager@@AEAAJXZ
    long EnsureImmersiveShell();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInputHostManager@CInputDialExperienceManager@@AEAAJXZ
    long EnsureInputHostManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWinRTStatics@CInputDialExperienceManager@@AEAAJXZ
    long EnsureWinRTStatics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowMessageService@CInputDialExperienceManager@@AEAAJXZ
    long EnsureWindowMessageService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyValueStaticInterface@CInputDialExperienceManager@@AEAAJPEAPEAUIPropertyValueStatics@Foundation@Windows@@@Z
    long GetPropertyValueStaticInterface(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleSuppressMenuEvent@CInputDialExperienceManager@@AEAAJ_N_K@Z
    long HandleSuppressMenuEvent(bool, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDisplayChangeNotification@CInputDialExperienceManager@@AEAAJXZ
    long InitializeDisplayChangeNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeMessageServiceEventsSource@CInputDialExperienceManager@@AEAAJXZ
    long InitializeMessageServiceEventsSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPenRightHanded@CInputDialExperienceManager@@CAJPEAE@Z
    static long IsPenRightHanded(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationActivatedForLaunch@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@J@Z
    virtual long OnApplicationActivatedForLaunch(CSingleViewShellExperience *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventQueued@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long OnEventQueued(CSingleViewShellExperience *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@_N@Z
    virtual long OnIdleStateChanged(CSingleViewShellExperience *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityBoostRequested@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityBoostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityUnboostRequested@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityUnboostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetForegroundFailed@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnSetForegroundFailed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCloaking@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroying@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroying(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHidden@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewHidden(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShowing@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShowing(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaked@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaked(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityRevokedChanged@CInputDialExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnVisibilityRevokedChanged(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputDialBackgroundAccess@CInputDialExperienceManager@@AEAAJIIPEAUHWND__@@@Z
    long RegisterInputDialBackgroundAccess(unsigned int, unsigned int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendDeviceSize@CInputDialExperienceManager@@AEAAJUtagRECT@@@Z
    long SendDeviceSize(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendFontFilePath@CInputDialExperienceManager@@AEAAJPEBG@Z
    long SendFontFilePath(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendMenuItemWithIconImage@CInputDialExperienceManager@@AEAAJPEBGIPEBE@Z
    long SendMenuItemWithIconImage(unsigned short const *, unsigned int, unsigned char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendOnScreenPositionUpdate@CInputDialExperienceManager@@AEAAJUtagPOINT@@@Z
    long SendOnScreenPositionUpdate(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendReactivateEvent@CInputDialExperienceManager@@AEAAJPEBGH@Z
    long SendReactivateEvent(unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpPreviewTimer@CInputDialExperienceManager@@AEAAJXZ
    long SetUpPreviewTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySendAndResetJsonPayload@CInputDialExperienceManager@@AEAAJXZ
    long TrySendAndResetJsonPayload();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindowMessageServiceEvents@CInputDialExperienceManager@@AEAAJXZ
    long UnregisterWindowMessageServiceEvents();
};
