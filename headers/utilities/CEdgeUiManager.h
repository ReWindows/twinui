#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 73 member(s).
class CEdgeUiManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginInputObservation@CEdgeUiManager@@UEAAJW4EDGEUI_COMPONENT@@@Z
    virtual long BeginInputObservation(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeUiManager@@QEAA@XZ
    CEdgeUiManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DiscreteInvokeForApp@CEdgeUiManager@@UEAAJW4EDGEUI_COMPONENT@@PEAUIImmersiveApplication@@@Z
    virtual long DiscreteInvokeForApp(int, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissedUI@CEdgeUiManager@@UEAAJW4EDGEUI_COMPONENT@@W4DISMISSED_UI_FLAGS@@@Z
    virtual long DismissedUI(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CEdgeUiManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullScreenVisibilityChanged@CEdgeUiManager@@UEAAJH@Z
    virtual long FullScreenVisibilityChanged(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutohideImmuneWorkArea@CEdgeUiManager@@UEAAJPEAUtagRECT@@@Z
    virtual long GetAutohideImmuneWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCornerMetrics@CEdgeUiManager@@UEAAJPEAI000@Z
    virtual long GetCornerMetrics(unsigned int *, unsigned int *, unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPearlRect@CEdgeUiManager@@UEAAJPEAUtagRECT@@@Z
    virtual long GetPearlRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegionForCornerOrEdge@CEdgeUiManager@@UEAAJW4EDGEUI_COMPONENT@@PEAPEAUHRGN__@@@Z
    virtual long GetRegionForCornerOrEdge(int, HRGN__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetApplicationFromPoint@CEdgeUiManager@@UEAAJUtagPOINT@@HPEAPEAUIImmersiveApplication@@@Z
    virtual long GetTargetApplicationFromPoint(tagPOINT, int, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayRect@CEdgeUiManager@@UEAAJPEAUtagRECT@@@Z
    virtual long GetTrayRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTraySearchBoxVisibility@CEdgeUiManager@@UEAAJPEAH@Z
    virtual long GetTraySearchBoxVisibility(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrayStuckPlace@CEdgeUiManager@@UEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z
    virtual long GetTrayStuckPlace(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEdgeGesturePrefChanged@CEdgeUiManager@@UEAAJPEAUHWND__@@@Z
    virtual long HandleEdgeGesturePrefChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HintVisualDestroyed@CEdgeUiManager@@UEAAJPEAUIEdgeUiHint@@@Z
    virtual long HintVisualDestroyed(IEdgeUiHint *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@CEdgeUiManager@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@CEdgeUiManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputObserveEnd@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@@Z
    virtual long InputObserveEnd(IEdgeUiInput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputObserveStart@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@@Z
    virtual long InputObserveStart(IEdgeUiInput *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceRegisteredForEdgeInput@CEdgeUiManager@@UEAAJPEAX@Z
    virtual long IsDeviceRegisteredForEdgeInput(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEdgeSwipeAllowedByTouchKeyboard@CEdgeUiManager@@UEAAJUtagPOINT@@PEAH@Z
    virtual long IsEdgeSwipeAllowedByTouchKeyboard(tagPOINT, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ModeChanged@CEdgeUiManager@@UEAAJW4IMM_SYSTEM_MODE@@@Z
    virtual long ModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CEdgeUiManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseDragEnd@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@@Z
    virtual long MouseDragEnd(IEdgeUiInput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseDragStart@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@PEAPEAUIEdgeUiMouseInvocation@@@Z
    virtual long MouseDragStart(IEdgeUiInput *, IEdgeUiMouseInvocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseDwelledCornerOrEdge@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@PEAPEAUIEdgeUiMouseInvocation@@@Z
    virtual long MouseDwelledCornerOrEdge(IEdgeUiInput *, IEdgeUiMouseInvocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseHitCornerOrEdge@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@_N1UtagPOINT@@PEA_NPEAPEAUIEdgeUiMouseInvocation@@@Z
    virtual long MouseHitCornerOrEdge(IEdgeUiInput *, bool, bool, tagPOINT, bool *, IEdgeUiMouseInvocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseLeaveOnCornerOrEdge@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@@Z
    virtual long MouseLeaveOnCornerOrEdge(IEdgeUiInput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAutohideImmuneWorkAreaMayHaveChanged@CEdgeUiManager@@UEAAJUtagRECT@@@Z
    virtual long NotifyAutohideImmuneWorkAreaMayHaveChanged(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPearlRectChanged@CEdgeUiManager@@UEAAJUtagRECT@@@Z
    virtual long NotifyPearlRectChanged(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTraySearchBoxVisibilityChanged@CEdgeUiManager@@UEAAJH@Z
    virtual long NotifyTraySearchBoxVisibilityChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyTrayStuckPlaceChanged@CEdgeUiManager@@UEAAJW4EDGEUI_TRAYSTUCKPLACE@@@Z
    virtual long NotifyTrayStuckPlaceChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRudeWindowStateChange@CEdgeUiManager@@UEAAJW4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z
    virtual long OnRudeWindowStateChange(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CEdgeUiManager@@UEAAJ_K_J@Z
    virtual long OnShellHookMessage(uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OverrideInvocation@CEdgeUiManager@@UEAAJPEAUIEdgeUiInvocationProvider@@@Z
    virtual long OverrideInvocation(IEdgeUiInvocationProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CEdgeUiManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithDeviceIfApplicable@CEdgeUiManager@@UEAAJPEAX@Z
    virtual long RegisterWithDeviceIfApplicable(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowStandardSystemOverlays@CEdgeUiManager@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long ShowStandardSystemOverlays(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CEdgeUiManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeChanged@CEdgeUiManager@@UEAAJW4_TABLETMODESTATE@@@Z
    virtual long TabletModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TaskbarRaised@CEdgeUiManager@@UEAAJXZ
    virtual long TaskbarRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchExtendedSwipeStart@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@PEAPEAUIEdgeUiTouchInvocation@@PEAH@Z
    virtual long TouchExtendedSwipeStart(IEdgeUiInput *, IEdgeUiTouchInvocation * *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchSwipeEnd@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@@Z
    virtual long TouchSwipeEnd(IEdgeUiInput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchSwipeStart@CEdgeUiManager@@UEAAJPEAUIEdgeUiInput@@_NUtagPOINT@@PEA_NPEAPEAUIEdgeUiTouchInvocation@@4@Z
    virtual long TouchSwipeStart(IEdgeUiInput *, bool, tagPOINT, bool *, IEdgeUiTouchInvocation * *, IEdgeUiTouchInvocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWithDeviceIfApplicable@CEdgeUiManager@@UEAAJPEAX@Z
    virtual long UnregisterWithDeviceIfApplicable(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CEdgeUiManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEdgeWindowZorder@CEdgeUiManager@@UEAAJXZ
    virtual long UpdateEdgeWindowZorder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@CEdgeUiManager@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeUiManager@@MEAA@XZ
    virtual ~CEdgeUiManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireInvokerForComponent@CEdgeUiManager@@AEAAJW4EDGEUI_COMPONENT@@AEBU_GUID@@PEAPEAX@Z
    long _AcquireInvokerForComponent(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireMouseInvokerForEdge@CEdgeUiManager@@AEAAJW4EDGEUI_INDEX@@PEAPEAUIEdgeUiMouseInvocation@@@Z
    long _AcquireMouseInvokerForEdge(int, IEdgeUiMouseInvocation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissAllInputObservers@CEdgeUiManager@@AEAAXXZ
    void _DismissAllInputObservers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnableEdgeInput@CEdgeUiManager@@AEAAXW4EdgeInputEnableState@1@@Z
    void _EnableEdgeInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEdgyLocationFromIndexArray@CEdgeUiManager@@AEAAPEBW4tagEDGY_LOCATION@@XZ
    int const * _GetEdgyLocationFromIndexArray();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HideHint@CEdgeUiManager@@AEAAX_N@Z
    void _HideHint(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IndexFromEdgeInput@CEdgeUiManager@@AEAA?AW4EDGEUI_INDEX@@PEAUIEdgeUiInput@@@Z
    int _IndexFromEdgeInput(IEdgeUiInput *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeComponent@CEdgeUiManager@@AEAAJXZ
    long _InitializeComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDeviceRegisteredForEdgeInput@CEdgeUiManager@@AEAA_NPEAX@Z
    bool _IsDeviceRegisteredForEdgeInput(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDeviceSupported@CEdgeUiManager@@AEAA_NPEAX@Z
    bool _IsDeviceSupported(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsEdgeSwipeAllowedByPolicy@CEdgeUiManager@@AEAA_NXZ
    bool _IsEdgeSwipeAllowedByPolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsStartScreenVisible@CEdgeUiManager@@AEAA_NXZ
    bool _IsStartScreenVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsTaskViewVisible@CEdgeUiManager@@AEAA_NXZ
    bool _IsTaskViewVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LayoutEdgeUiInputs@CEdgeUiManager@@AEAAJW4EDGEUI_LAYOUT_REASON@@@Z
    long _LayoutEdgeUiInputs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForEdgeGestureWithDevice@CEdgeUiManager@@AEAAJPEAX@Z
    long _RegisterForEdgeGestureWithDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShouldIgnoreEdgeDueToStartOrAllUpView@CEdgeUiManager@@AEAA_NW4EDGEUI_INDEX@@@Z
    bool _ShouldIgnoreEdgeDueToStartOrAllUpView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToWNF@CEdgeUiManager@@AEAAJXZ
    long _SubscribeToWNF();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryShowEdgeHint@CEdgeUiManager@@AEAAJPEAUIEdgeUiInput@@_N1UtagPOINT@@PEA_N@Z
    long _TryShowEdgeHint(IEdgeUiInput *, bool, bool, tagPOINT, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterAllDevicesForEdgeInput@CEdgeUiManager@@AEAAXXZ
    void _UnregisterAllDevicesForEdgeInput();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterForEdgeGestureWithDevice@CEdgeUiManager@@AEAAXPEAX@Z
    void _UnregisterForEdgeGestureWithDevice(void *);
};
