#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 45 member(s).
class CDevicesFlowExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDevicesFlowExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevicesFlowExperienceManager@@QEAA@XZ
    CDevicesFlowExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CDevicesFlowExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CDevicesFlowExperienceManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDevicesFlowExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDevicesFlowExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDevicesFlowExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CDevicesFlowExperienceManager@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CDevicesFlowExperienceManager@@UEAAJXZ
    virtual long HideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CDevicesFlowExperienceManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIdleStateChanged@CDevicesFlowExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@_N@Z
    virtual long OnIdleStateChanged(CSingleViewShellExperience *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CDevicesFlowExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CDevicesFlowExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHidden@CDevicesFlowExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewHidden(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CDevicesFlowExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDevicesFlowExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDevicesFlowExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDevicesFlowExperienceManager@@QEAAJPEAUIServiceProvider@@PEBG@Z
    long RuntimeClassInitialize(IServiceProvider *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlyoutTitle@CDevicesFlowExperienceManager@@UEAAJPEAUHSTRING__@@@Z
    virtual long SetFlyoutTitle(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTitle@CDevicesFlowExperienceManager@@UEAAJPEBG@Z
    virtual long SetTitle(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CDevicesFlowExperienceManager@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CDevicesFlowExperienceManager@@UEAAJXZ
    virtual long ShowFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNotification@CDevicesFlowExperienceManager@@UEAAJPEBG0W4DevicesFlowNotificationType@@PEAUIUnknown@@@Z
    virtual long ShowNotification(unsigned short const *, unsigned short const *, int, IUnknown *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDeviceDiscoveryTrayLocation@CDevicesFlowExperienceManager@@AEAAJAEAURect@Foundation@Windows@@@Z
    long _GetDeviceDiscoveryTrayLocation(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionDeviceDiscoveryTrayLocation@CDevicesFlowExperienceManager@@AEAAJAEAURect@Foundation@Windows@@@Z
    long _PositionDeviceDiscoveryTrayLocation(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopTimer@CDevicesFlowExperienceManager@@AEAAXXZ
    void _StopTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TimerCallback@CDevicesFlowExperienceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_TimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevicesFlowExperienceManager@@EEAA@XZ
    virtual ~CDevicesFlowExperienceManager();
};
