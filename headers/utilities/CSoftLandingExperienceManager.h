#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 89 member(s).
class CSoftLandingExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSoftLandingExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSoftLandingExperienceManager@@QEAA@XZ
    CSoftLandingExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSoftLandingExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusHotkeyInvoked@CSoftLandingExperienceManager@@UEAAJXZ
    virtual long FocusHotkeyInvoked();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSoftLandingExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSoftLandingExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSoftLandingExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedKeyDown@CSoftLandingExperienceManager@@UEAAJI@Z
    virtual long ObservedKeyDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedKeyUp@CSoftLandingExperienceManager@@UEAAJI@Z
    virtual long ObservedKeyUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonDown@CSoftLandingExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonDown(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseButtonUp@CSoftLandingExperienceManager@@UEAAJUtagPOINT@@W4RAW_INPUT_MOUSE_BUTTON@@@Z
    virtual long ObservedMouseButtonUp(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedMouseMove@CSoftLandingExperienceManager@@UEAAJUtagPOINT@@G0@Z
    virtual long ObservedMouseMove(tagPOINT, unsigned short, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedPenInput@CSoftLandingExperienceManager@@UEAAJUtagPOINT@@HPEAX@Z
    virtual long ObservedPenInput(tagPOINT, int, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObservedTouchInput@CSoftLandingExperienceManager@@UEAAJUtagPOINT@@H@Z
    virtual long ObservedTouchInput(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CSoftLandingExperienceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSoftLandingExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSoftLandingExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSoftLandingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftLandingExperienceManager@@UEAA@XZ
    virtual ~CSoftLandingExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityBoostRequested@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityBoostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPriorityUnboostRequested@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnPriorityUnboostRequested(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCloaking@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaked@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaked(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CSoftLandingExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculatePositionRect@CSoftLandingExperienceManager@@AEAA?AUtagRECT@@W4SoftLandingViewState@1@@Z
    tagRECT CalculatePositionRect(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBubbleAboveTarget@CSoftLandingExperienceManager@@AEAAJXZ
    long EnsureBubbleAboveTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForegroundEventProc@CSoftLandingExperienceManager@@CAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z
    static void ForegroundEventProc(HWINEVENTHOOK__*, unsigned long, HWND__*, long, long, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleMissingAnchorSkip@CSoftLandingExperienceManager@@AEAAJ_NHJPEA_N@Z
    long HandleMissingAnchorSkip(bool, int, long, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CSoftLandingExperienceManager@@AEAAJXZ
    long Hide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKeyStrokeConsideredForLightDismiss@CSoftLandingExperienceManager@@AEAA_NI@Z
    bool IsKeyStrokeConsideredForLightDismiss(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTaskbarWindow@CSoftLandingExperienceManager@@CA_NPEAUHWND__@@@Z
    static bool IsTaskbarWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisibleState@CSoftLandingExperienceManager@@CA_NW4SoftLandingViewState@1@@Z
    static bool IsVisibleState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPositionUpdateFromNewAnchor@CSoftLandingExperienceManager@@AEAAJXZ
    long NotifyPositionUpdateFromNewAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNewNotification@CSoftLandingExperienceManager@@AEAAJXZ
    long OnNewNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRawInput@CSoftLandingExperienceManager@@AEAAJXZ
    long OnRawInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellReady@CSoftLandingExperienceManager@@AEAAJXZ
    long OnShellReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetedMessage@CSoftLandingExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z
    long OnTargetedMessage(int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PositionView@CSoftLandingExperienceManager@@AEAAJW4SoftLandingViewState@1@@Z
    long PositionView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostTargetedMessage@CSoftLandingExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z
    static long PostTargetedMessage(void *, int, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGuidedToursAnchorUpdate@CSoftLandingExperienceManager@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@_NHPEA_N222@Z
    long ProcessGuidedToursAnchorUpdate(WindissectOpaque *, bool, int, bool *, bool *, bool *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadCommonViewProperties@CSoftLandingExperienceManager@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@_N1111@Z
    long ReadCommonViewProperties(WindissectOpaque *, bool, bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForRawInput@CSoftLandingExperienceManager@@AEAAJ_N@Z
    long RegisterForRawInput(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForegroundHook@CSoftLandingExperienceManager@@AEAAXXZ
    void RegisterForegroundHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportAnchoredUIClickthroughIfApplicable@CSoftLandingExperienceManager@@AEAAJUtagPOINT@@@Z
    long ReportAnchoredUIClickthroughIfApplicable(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToAnchorUI@CSoftLandingExperienceManager@@AEAAXXZ
    void SetFocusToAnchorUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZBand@CSoftLandingExperienceManager@@AEAAJXZ
    long SetZBand();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellReadyCallback@CSoftLandingExperienceManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ShellReadyCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSoftLandingExperienceManager@@AEAAJXZ
    long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToNewNotificationWnf@CSoftLandingExperienceManager@@AEAAJXZ
    long SubscribeToNewNotificationWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToPublishedContentWnf@CSoftLandingExperienceManager@@AEAAJXZ
    long SubscribeToPublishedContentWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToShellReadyWnf@CSoftLandingExperienceManager@@AEAAJXZ
    long SubscribeToShellReadyWnf();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToState@CSoftLandingExperienceManager@@AEAAJW4SoftLandingViewState@1@@Z
    long TransitionToState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForegroundHook@CSoftLandingExperienceManager@@AEAAXXZ
    void UnregisterForegroundHook();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAnchorFromQuery@CSoftLandingExperienceManager@@AEAAJPEBG_N@Z
    long UpdateAnchorFromQuery(unsigned short const *, bool);
};
