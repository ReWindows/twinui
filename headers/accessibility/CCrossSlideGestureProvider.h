#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 46 member(s).
class CCrossSlideGestureProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClient@CCrossSlideGestureProvider@@UEAAJPEAUIGestureClient@@@Z
    virtual long AddClient(IGestureClient *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCrossSlideGestureProvider@@QEAA@XZ
    CCrossSlideGestureProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelActiveGesture@CCrossSlideGestureProvider@@UEAAJXZ
    virtual long CancelActiveGesture();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@CCrossSlideGestureProvider@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CCrossSlideGestureProvider@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CCrossSlideGestureProvider@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentUpdated@CCrossSlideGestureProvider@@UEAAJPEAUIDirectManipulationViewport@@PEAUIDirectManipulationContent@@@Z
    virtual long OnContentUpdated(IDirectManipulationViewport *, IDirectManipulationContent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CCrossSlideGestureProvider@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CCrossSlideGestureProvider@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CCrossSlideGestureProvider@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CCrossSlideGestureProvider@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportStatusChanged@CCrossSlideGestureProvider@@UEAAJPEAUIDirectManipulationViewport@@W4DIRECTMANIPULATION_STATUS@@1@Z
    virtual long OnViewportStatusChanged(IDirectManipulationViewport *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewportUpdated@CCrossSlideGestureProvider@@UEAAJPEAUIDirectManipulationViewport@@@Z
    virtual long OnViewportUpdated(IDirectManipulationViewport *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@CCrossSlideGestureProvider@@UEAAJPEAUIGestureClient@@@Z
    virtual long RemoveClient(IGestureClient *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDistanceThresholds@CCrossSlideGestureProvider@@QEAAXHHHHW4SET_DISTANCE_THRESHOLDS_OPTIONS@@@Z
    void SetDistanceThresholds(int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnabled@CCrossSlideGestureProvider@@UEAAJ_N@Z
    virtual long SetEnabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCrossSlideGestureProvider@@UEAA@XZ
    virtual ~CCrossSlideGestureProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelActiveGesture@CCrossSlideGestureProvider@@AEAAXXZ
    void _CancelActiveGesture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelActiveGestureAndReleasePointers@CCrossSlideGestureProvider@@AEAAXXZ
    void _CancelActiveGestureAndReleasePointers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteActiveGesture@CCrossSlideGestureProvider@@AEAAXXZ
    void _CompleteActiveGesture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConfigureInteractionContext@CCrossSlideGestureProvider@@AEAAJPEAUHINTERACTIONCONTEXT__@@@Z
    long _ConfigureInteractionContext(HINTERACTIONCONTEXT__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisableTouchVisualizationsForTrackedPointers@CCrossSlideGestureProvider@@AEAAXXZ
    void _DisableTouchVisualizationsForTrackedPointers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FindTouchScrollViewers@CCrossSlideGestureProvider@@AEAAXXZ
    void _FindTouchScrollViewers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandlePointerInput@CCrossSlideGestureProvider@@AEAAJPEAUPointerEvent@DirectUI@@@Z
    long _HandlePointerInput(::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeInteractionContext@CCrossSlideGestureProvider@@AEAAJXZ
    long _InitializeInteractionContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeManipulationManager@CCrossSlideGestureProvider@@AEAAJXZ
    long _InitializeManipulationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRailBreakInteractionContext@CCrossSlideGestureProvider@@AEAAJXZ
    long _InitializeRailBreakInteractionContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRegion@CCrossSlideGestureProvider@@AEAAJXZ
    long _InitializeRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerDown@CCrossSlideGestureProvider@@AEAAJPEAUPointerEvent@DirectUI@@@Z
    long _OnPointerDown(::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnPointerUp@CCrossSlideGestureProvider@@AEAAJPEAUPointerEvent@DirectUI@@@Z
    long _OnPointerUp(::DirectUI::PointerEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessCrossSlide@CCrossSlideGestureProvider@@AEAAJPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    long _ProcessCrossSlide(INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRegionInteraction@CCrossSlideGestureProvider@@AEAA_NI@Z
    bool _ProcessRegionInteraction(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RailBreakInteractionContextCallback@CCrossSlideGestureProvider@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    void _RailBreakInteractionContextCallback(INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseRegion@CCrossSlideGestureProvider@@AEAAJXZ
    long _ReleaseRegion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseTrackedPointersFromScrollViewers@CCrossSlideGestureProvider@@AEAAXXZ
    void _ReleaseTrackedPointersFromScrollViewers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetGestureDetection@CCrossSlideGestureProvider@@AEAAXXZ
    void _ResetGestureDetection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendCancelForTrackedPointers@CCrossSlideGestureProvider@@AEAAXXZ
    void _SendCancelForTrackedPointers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendGestureDetected@CCrossSlideGestureProvider@@AEAAXW4GESTURE_PROVIDER_GESTURE@@MM@Z
    void _SendGestureDetected(int, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendMotionDetected@CCrossSlideGestureProvider@@AEAAXMM@Z
    void _SendMotionDetected(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetContact@CCrossSlideGestureProvider@@AEAAJI_N@Z
    long _SetContact(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTrackingPointers@CCrossSlideGestureProvider@@AEAAXXZ
    void _StopTrackingPointers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TrackPointer@CCrossSlideGestureProvider@@AEAAXI_N@Z
    void _TrackPointer(unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InteractionContextCallback@CCrossSlideGestureProvider@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    static void s_InteractionContextCallback(void *, INTERACTION_CONTEXT_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RailBreakInteractionContextCallback@CCrossSlideGestureProvider@@CAXPEAXPEBUINTERACTION_CONTEXT_OUTPUT@@@Z
    static void s_RailBreakInteractionContextCallback(void *, INTERACTION_CONTEXT_OUTPUT const *);
};
