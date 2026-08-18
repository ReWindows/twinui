#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 49 member(s).
class WindowManagementEvents {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureChannel@WindowManagementEvents@@UEAAJXZ
    virtual long EnsureChannel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@WindowManagementEvents@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterArrangement@WindowManagementEvents@@UEAAJPEAUIWindowManagementArrangementEvents@@@Z
    virtual long RegisterArrangement(IWindowManagementArrangementEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterChannelSever@WindowManagementEvents@@UEAAJPEAUIWindowManagementChannelSeverEvents@@@Z
    virtual long RegisterChannelSever(IWindowManagementChannelSeverEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterConstraints@WindowManagementEvents@@UEAAJPEAUIWindowManagementConstraintsEvents@@@Z
    virtual long RegisterConstraints(IWindowManagementConstraintsEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputUsage@WindowManagementEvents@@UEAAJPEAUIWindowManagementInputUsageEvents@@@Z
    virtual long RegisterInputUsage(IWindowManagementInputUsageEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterJointResize@WindowManagementEvents@@UEAAJPEAUIWindowManagementJointResizeEvents@@@Z
    virtual long RegisterJointResize(IWindowManagementJointResizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterShellHotkey@WindowManagementEvents@@UEAAJIIUWindowId@UI@Windows@@PEAPEAUIShellHotkeyRegistration@1Shell@Internal@4@@Z
    virtual long RegisterShellHotkey(unsigned int, unsigned int, ::Windows::UI::WindowId, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterShowMoveSize@WindowManagementEvents@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@@Z
    virtual long RegisterShowMoveSize(IWindowManagementShowMoveSizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWindowGrouping@WindowManagementEvents@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@@Z
    virtual long RegisterWindowGrouping(IWindowManagementWindowGroupingEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWorkAreaJointResize@WindowManagementEvents@@UEAAJPEAUIWindowManagementJointResizeEvents@@@Z
    virtual long RegisterWorkAreaJointResize(IWindowManagementJointResizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WindowManagementEvents@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@WindowManagementEvents@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterArrangement@WindowManagementEvents@@UEAAJPEAUIWindowManagementArrangementEvents@@@Z
    virtual long UnregisterArrangement(IWindowManagementArrangementEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterChannelSever@WindowManagementEvents@@UEAAJPEAUIWindowManagementChannelSeverEvents@@@Z
    virtual long UnregisterChannelSever(IWindowManagementChannelSeverEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterConstraints@WindowManagementEvents@@UEAAJPEAUIWindowManagementConstraintsEvents@@@Z
    virtual long UnregisterConstraints(IWindowManagementConstraintsEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputUsage@WindowManagementEvents@@UEAAJPEAUIWindowManagementInputUsageEvents@@@Z
    virtual long UnregisterInputUsage(IWindowManagementInputUsageEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterJointResize@WindowManagementEvents@@UEAAJPEAUIWindowManagementJointResizeEvents@@@Z
    virtual long UnregisterJointResize(IWindowManagementJointResizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterShellHotkey@WindowManagementEvents@@UEAAJPEAUIShellHotkeyRegistration@1Shell@Internal@Windows@@@Z
    virtual long UnregisterShellHotkey(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterShowMoveSize@WindowManagementEvents@@UEAAJPEAUIWindowManagementShowMoveSizeEvents@@@Z
    virtual long UnregisterShowMoveSize(IWindowManagementShowMoveSizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWindowGrouping@WindowManagementEvents@@UEAAJPEAUIWindowManagementWindowGroupingEvents@@@Z
    virtual long UnregisterWindowGrouping(IWindowManagementWindowGroupingEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWorkAreaJointResize@WindowManagementEvents@@UEAAJPEAUIWindowManagementJointResizeEvents@@@Z
    virtual long UnregisterWorkAreaJointResize(IWindowManagementJointResizeEvents *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@WindowManagementEvents@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeConstraints@WindowManagementEvents@@UEAAJPEAUHWND__@@UtagSIZE@@1@Z
    virtual long UpdateSizeConstraints(HWND__*, tagSIZE, tagSIZE);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WindowManagementEvents@@QEAA@XZ
    WindowManagementEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ArrangedWindowJointResizeCompleted@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ArrangedWindowJointResizeCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ArrangedWindowResizeStarted@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVArrangedWindowResizeStartedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ArrangedWindowResizeStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DragSizeInfoEvent@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UDragSizeInfoEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DragSizeInfoEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_HitTestPartNotifyEvent@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UHitTestPartNotifyEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_HitTestPartNotifyEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WindowArrangementEvent@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWindowArrangementEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WindowArrangementEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WindowMigrationEvent@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWindowMigrationEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WindowMigrationEvent(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WorkAreaJointResizeCompleted@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UWorkAreaJointResizeCompletedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WorkAreaJointResizeCompleted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_WorkAreaJointResizeStarted@WindowManagementEvents@@UEAAJPEAU?$ITypedEventHandler@PEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAVWorkAreaJointResizeStartedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_WorkAreaJointResizeStarted(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ArrangedWindowJointResizeCompleted@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ArrangedWindowJointResizeCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ArrangedWindowResizeStarted@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ArrangedWindowResizeStarted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DragSizeInfoEvent@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DragSizeInfoEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_HitTestPartNotifyEvent@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_HitTestPartNotifyEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WindowArrangementEvent@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WindowArrangementEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WindowMigrationEvent@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WindowMigrationEvent(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WorkAreaJointResizeCompleted@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WorkAreaJointResizeCompleted(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_WorkAreaJointResizeStarted@WindowManagementEvents@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_WorkAreaJointResizeStarted(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowManagementEvents@@UEAA@XZ
    virtual ~WindowManagementEvents();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangedWindowResizeStartedNotifyHelper@WindowManagementEvents@@AEAA_JQEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z
    int64_t ArrangedWindowResizeStartedNotifyHelper(_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellWindowManagementCallout@WindowManagementEvents@@AEAA_JQEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z
    int64_t OnShellWindowManagementCallout(_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellWindowManagementNotify@WindowManagementEvents@@AEAAXQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z
    void OnShellWindowManagementNotify(_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO const * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@WindowManagementEvents@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
