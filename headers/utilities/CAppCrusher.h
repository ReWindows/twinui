#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
class CAppCrusher {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppCrusher@@QEAA@XZ
    CAppCrusher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAllApps@CAppCrusher@@UEAAJXZ
    virtual long CloseAllApps();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApp@CAppCrusher@@UEAAJPEAUIImmersiveApplication@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z
    virtual long CloseApp(IImmersiveApplication *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseAppWithTelemetryCookie@CAppCrusher@@UEAAJPEAUIImmersiveApplication@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@K@Z
    virtual long CloseAppWithTelemetryCookie(IImmersiveApplication *, int, int, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseApps@CAppCrusher@@UEAAJPEAUIObjectArray@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z
    virtual long CloseApps(IObjectArray *, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskCompletionFormatString@CAppCrusher@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long GetTaskCompletionFormatString(uint64_t, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MinimizeApp@CAppCrusher@@UEAAJPEAUIImmersiveApplication@@W4APPCRUSHER_MINIMIZE_FLAGS@@@Z
    virtual long MinimizeApp(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CAppCrusher@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupCloseCommandInvoked@CAppCrusher@@UEAAXXZ
    virtual void PopupCloseCommandInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopupDismissed@CAppCrusher@@UEAAXH@Z
    virtual void PopupDismissed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CAppCrusher@@UEAAJPEAUIImmersiveAppCrusherNotification@@PEAK@Z
    virtual long Register(IImmersiveAppCrusherNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CAppCrusher@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppCrusher@@UEAA@XZ
    virtual ~CAppCrusher();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AppWantsSuspendOnClose@CAppCrusher@@AEAA_NPEBG@Z
    bool _AppWantsSuspendOnClose(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollapseAllViewsForApp@CAppCrusher@@AEAAJPEAUIImmersiveMonitorManager@@PEAUIImmersiveApplication@@@Z
    long _CollapseAllViewsForApp(IImmersiveMonitorManager *, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleConfirmAppClose@CAppCrusher@@AEAAJPEAUIImmersiveApplication@@W4APPCRUSHER_CLOSE_OPTIONS@@K@Z
    long _HandleConfirmAppClose(IImmersiveApplication *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HasConfirmAppCloseCapability@CAppCrusher@@AEAA_NPEAUIImmersiveApplication@@@Z
    bool _HasConfirmAppCloseCapability(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyApplicationViaCloseRequest@CAppCrusher@@AEAAJPEAUIImmersiveApplication@@@Z
    long _NotifyApplicationViaCloseRequest(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyApplicationViaWindowService@CAppCrusher@@AEAAJPEAUIImmersiveApplication@@_N1K@Z
    long _NotifyApplicationViaWindowService(IImmersiveApplication *, bool, bool, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyListeners@CAppCrusher@@AEAAJW4AC_NOTIFY@1@PEAUIImmersiveApplication@@@Z
    long _NotifyListeners(int, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformPostTerminationTasks@CAppCrusher@@AEAAXPEAUIImmersiveApplication@@PEAUIViewEventDispatcherDesktopExtension@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z
    void _PerformPostTerminationTasks(IImmersiveApplication *, ::Windows::Internal::Shell::Desktop::ViewManagerInterop::IViewEventDispatcherDesktopExtension *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PreAppClosing@CAppCrusher@@AEAAXPEAUIImmersiveApplication@@W4APPCRUSHER_CLOSE_OPTIONS@@PEAW4AppCrusherCloseResult@@PEA_N@Z
    void _PreAppClosing(IImmersiveApplication *, int, int *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessAppClosing@CAppCrusher@@AEAAJAEAUAC_CLOSE_INFO@@@Z
    long _ProcessAppClosing(AC_CLOSE_INFO &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowPopup@CAppCrusher@@AEAAJW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@AEBUAC_CLOSE_INFO@@@Z
    long _ShowPopup(int, AC_CLOSE_INFO const &);
};
