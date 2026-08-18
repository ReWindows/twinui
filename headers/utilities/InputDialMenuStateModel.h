#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 54 member(s).
class InputDialMenuStateModel {
public:
    class SelectedToolUsageInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AbortMenuShowActivity@InputDialMenuStateModel@@QEAAJXZ
    long AbortMenuShowActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@0PEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@PEAI@Z
    long AddCustomMenuSection(HWND__*, HWND__*, WindissectOpaque *, EventRegistrationToken *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFontIconEntryToCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@IIPEBG111I@Z
    long AddFontIconEntryToCustomMenuSection(HWND__*, unsigned int, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddIconEntryToCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@IIPEBGPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@I@Z
    long AddIconEntryToCustomMenuSection(HWND__*, unsigned int, unsigned int, unsigned short const *, ::Windows::Storage::Streams::IRandomAccessStreamReference *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddImagePixelBufferToMenuItem@InputDialMenuStateModel@@QEAAJPEAUInputDialMenuItem@@PEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    long AddImagePixelBufferToMenuItem(InputDialMenuItem *, ::Windows::Storage::Streams::IRandomAccessStreamReference *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddKnownIconEntryToCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@IIPEBGII@Z
    long AddKnownIconEntryToCustomMenuSection(HWND__*, unsigned int, unsigned int, unsigned short const *, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAndNotifyClients@InputDialMenuStateModel@@QEAAJXZ
    long CleanUpAndNotifyClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@InputDialMenuStateModel@@QEAAJXZ
    long Init();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InputDialMenuStateModel@@QEAA@PEAVIInputDialStateModelHandler@@@Z
    InputDialMenuStateModel(IInputDialStateModelHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@InputDialMenuStateModel@@QEAAJW4EventType@@PEATEventData@@@Z
    long ProcessEvent(int, EventData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@InputDialMenuStateModel@@QEAAJW4EventType@@@Z
    long ProcessEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllItemsFromCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@I@Z
    long RemoveAllItemsFromCustomMenuSection(HWND__*, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@IUEventRegistrationToken@@@Z
    long RemoveCustomMenuSection(HWND__*, unsigned int, EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveItemFromCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@II@Z
    long RemoveItemFromCustomMenuSection(HWND__*, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectPreviouslyActiveMenuItem@InputDialMenuStateModel@@QEAAJPEAUHWND__@@PEA_N@Z
    long SelectPreviouslyActiveMenuItem(HWND__*, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSystemMenuItem@InputDialMenuStateModel@@QEAAJPEAUHWND__@@IPEA_N@Z
    long SelectSystemMenuItem(HWND__*, unsigned int, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveItemForCustomMenuSection@InputDialMenuStateModel@@QEAAJPEAUHWND__@@II@Z
    long SetActiveItemForCustomMenuSection(HWND__*, unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActiveToHighlightedTool@InputDialMenuStateModel@@QEAAJXZ
    long SetActiveToHighlightedTool();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultMenuItems@InputDialMenuStateModel@@QEAAJPEAUHWND__@@PEAU?$IIterable@W4RadialControllerSystemMenuItemKind@Input@UI@Windows@@@Collections@Foundation@Windows@@@Z
    long SetDefaultMenuItems(HWND__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateActiveApp@InputDialMenuStateModel@@QEAAXXZ
    void UpdateActiveApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentlyActiveToolInfo@InputDialMenuStateModel@@QEAAXXZ
    void UpdateCurrentlyActiveToolInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShowMenuActivityState@InputDialMenuStateModel@@QEAAJXZ
    long UpdateShowMenuActivityState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolIndexOnClick@InputDialMenuStateModel@@QEAAJH@Z
    long UpdateToolIndexOnClick(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateToolIndexOnRotation@InputDialMenuStateModel@@QEAAXH@Z
    void UpdateToolIndexOnRotation(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputDialMenuStateModel@@QEAA@XZ
    ~InputDialMenuStateModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ChangeViewState@InputDialMenuStateModel@@AEAAXW4ViewState@@@Z
    void _ChangeViewState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndFixUIStateTimeout@InputDialMenuStateModel@@AEAAXPEA_N@Z
    void _CheckAndFixUIStateTimeout(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DismissMenu@InputDialMenuStateModel@@AEAAJXZ
    long _DismissMenu();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureMenuPopulated@InputDialMenuStateModel@@AEAAJXZ
    long _EnsureMenuPopulated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessClickDismissMenuEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessClickDismissMenuEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessClickEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessClickEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessEnsureMenuIsDismissedEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessEnsureMenuIsDismissedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessFocusChangedEvent@InputDialMenuStateModel@@AEAAJPEAUHWND__@@@Z
    long _ProcessFocusChangedEvent(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessFocusChangedEventAsync@InputDialMenuStateModel@@AEAAJPEAUHWND__@@@Z
    long _ProcessFocusChangedEventAsync(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessHideAnimationCompletedEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessHideAnimationCompletedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessIHMShowEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessIHMShowEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessIdleStateFlagsChanged@InputDialMenuStateModel@@AEAAJH@Z
    long _ProcessIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessItemClickDownEvent@InputDialMenuStateModel@@AEAAJH@Z
    long _ProcessItemClickDownEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessItemClickUpEvent@InputDialMenuStateModel@@AEAAJH@Z
    long _ProcessItemClickUpEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessMultitaskViewEvent@InputDialMenuStateModel@@AEAAJ_N@Z
    long _ProcessMultitaskViewEvent(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessMultitaskViewEventAsync@InputDialMenuStateModel@@AEAAJ_N@Z
    long _ProcessMultitaskViewEventAsync(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessOnViewHiddenEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessOnViewHiddenEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessOnViewShownEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessOnViewShownEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessRotationEvent@InputDialMenuStateModel@@AEAAJH@Z
    long _ProcessRotationEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessSystemClickEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessSystemClickEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessToolPreviewDismissTimerExpiredEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessToolPreviewDismissTimerExpiredEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessTouchEvent@InputDialMenuStateModel@@AEAAJXZ
    long _ProcessTouchEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetViewToDestroyedState@InputDialMenuStateModel@@AEAAXXZ
    void _ResetViewToDestroyedState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInputDialFocusToCurrentlyActiveTool@InputDialMenuStateModel@@AEAAJPEAUHWND__@@@Z
    long _SetInputDialFocusToCurrentlyActiveTool(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInputDialFocusToCurrentlyActiveTool@InputDialMenuStateModel@@AEAAJAEBUInputDialAppToolsInfo@@@Z
    long _SetInputDialFocusToCurrentlyActiveTool(InputDialAppToolsInfo const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMenuVisibility@InputDialMenuStateModel@@AEAAJW4MenuVisibility@@@Z
    long _SetMenuVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupToolPreview@InputDialMenuStateModel@@AEAAJXZ
    long _SetupToolPreview();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateMenuWithProgrammaticToolActivation@InputDialMenuStateModel@@AEAAJXZ
    long _UpdateMenuWithProgrammaticToolActivation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateToolUsedTelemetry@InputDialMenuStateModel@@AEAAJ_N@Z
    long _UpdateToolUsedTelemetry(bool);
};
