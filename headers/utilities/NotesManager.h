#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 51 member(s).
class NotesManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NotesManager@@QEAA@XZ
    NotesManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@NotesManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NotesManager@@UEAA@XZ
    virtual ~NotesManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAreStickyNotesUsingNewApis@NotesManager@@EEAAJPEAH@Z
    virtual long CheckAreStickyNotesUsingNewApis(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotesAppId@NotesManager@@EEAAJPEAPEAG@Z
    virtual long GetNotesAppId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNotesThumbnailForPenWorkspace@NotesManager@@EEAAJPEAIPEAPEAE@Z
    virtual long GetNotesThumbnailForPenWorkspace(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowSpatialData@NotesManager@@EEAAJIPEAIPEAPEAE@Z
    virtual long GetWindowSpatialData(unsigned int, unsigned int *, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideNote@NotesManager@@EEAAJI@Z
    virtual long HideNote(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrivilegedOperations@NotesManager@@EEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long InitializePrivilegedOperations(_GUID const &, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusOnAnyNote@NotesManager@@EEAAJPEAH@Z
    virtual long IsFocusOnAnyNote(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNotesWindow@NotesManager@@EEAAJPEAUHWND__@@PEAH@Z
    virtual long IsNotesWindow(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenLocked@NotesManager@@EEAAJPEAH@Z
    virtual long IsScreenLocked(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveIntoPenWorkspace@NotesManager@@EEAAJUtagPOINT@@PEAPEAUHMONITOR__@@@Z
    virtual long MoveIntoPenWorkspace(tagPOINT, HMONITOR__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveOutOfPenWorkspace@NotesManager@@EEAAJXZ
    virtual long MoveOutOfPenWorkspace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationStateChanged@NotesManager@@EEAAJPEBGW4PLM_STATE_CHANGE@@@Z
    virtual long OnApplicationStateChanged(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChromeOffsetsChanged@NotesManager@@EEAAJPEAUIApplicationFrame@@@Z
    virtual long OnChromeOffsetsChanged(IApplicationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@NotesManager@@EEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z
    virtual long OnCommand(IApplicationFrame *, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@NotesManager@@EEAAJH@Z
    virtual long OnIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateFlagsChanged@NotesManager@@EEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z
    virtual long OnIdleStateFlagsChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@NotesManager@@EEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionChanged@NotesManager@@EEAAJPEAUIApplicationFrame@@@Z
    virtual long OnPositionChanged(IApplicationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@NotesManager@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCallback@NotesManager@@EEAAJPEAUINotesManagerCallback@@PEAK@Z
    virtual long RegisterCallback(INotesManagerCallback *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToNextView@NotesManager@@EEAAJXZ
    virtual long SetFocusToNextView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusToPreviousView@NotesManager@@EEAAJXZ
    virtual long SetFocusToPreviousView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNotesThumbnail@NotesManager@@EEAAJIPEAE@Z
    virtual long SetNotesThumbnail(unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailImageForTaskSwitcher@NotesManager@@EEAAJPEAUIWICBitmapSource@@@Z
    virtual long SetThumbnailImageForTaskSwitcher(IWICBitmapSource *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSpatialData@NotesManager@@EEAAJIIPEAE@Z
    virtual long SetWindowSpatialData(unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisibility@NotesManager@@EEAAJIH@Z
    virtual long SetWindowVisibility(unsigned int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowVisibilityWithOptions@NotesManager@@EEAAJIHPEAUNoteShowOptions@@@Z
    virtual long SetWindowVisibilityWithOptions(unsigned int, int, NoteShowOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandalone@NotesManager@@EEAAJII@Z
    virtual long ShowAsStandalone(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsStandaloneWithOptions@NotesManager@@EEAAJIIPEAUNoteShowOptions@@@Z
    virtual long ShowAsStandaloneWithOptions(unsigned int, unsigned int, NoteShowOptions *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNote@NotesManager@@EEAAJI@Z
    virtual long ShowNote(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@NotesManager@@EEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetSize@NotesManager@@EEAAJIUtagSIZE@@PEAH@Z
    virtual long TrySetSize(unsigned int, tagSIZE, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterCallback@NotesManager@@EEAAJK@Z
    virtual long UnRegisterCallback(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@NotesManager@@EEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@NotesManager@@EEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutManager@NotesManager@@AEAAJPEAPEAUIImmersiveLayout@@@Z
    long _GetLayoutManager(IImmersiveLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShouldApplicationRestart@NotesManager@@CAJPEA_N@Z
    static long _GetShouldApplicationRestart(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionChangingTimerCallback@NotesManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void _PositionChangingTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReLaunchApplicationIfPreviouslyOpen@NotesManager@@AEAAJXZ
    long _ReLaunchApplicationIfPreviouslyOpen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForApplicationStateChanges@NotesManager@@AEAAJXZ
    long _RegisterForApplicationStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetShouldApplicationRestart@NotesManager@@CAJ_N@Z
    static long _SetShouldApplicationRestart(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToServicesInner@NotesManager@@AEAAJPEAUIServiceProvider@@@Z
    long _SubscribeToServicesInner(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnRegisterForLayoutChanges@NotesManager@@AEAAJXZ
    long _UnRegisterForLayoutChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterForApplicationStateChanges@NotesManager@@AEAAJXZ
    long _UnregisterForApplicationStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateNotesApplicationName@NotesManager@@AEAAJXZ
    long _UpdateNotesApplicationName();
};
