#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 19 member(s).
class CCompatibilityPolicyManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCompatibilityPolicyManager@@QEAA@XZ
    CCompatibilityPolicyManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CCompatibilityPolicyManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompatPolicyEvaluation@CCompatibilityPolicyManager@@UEAAJPEAUHWND__@@@Z
    virtual long ForceCompatPolicyEvaluation(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveTMCWNFCallback@CCompatibilityPolicyManager@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ImmersiveTMCWNFCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CCompatibilityPolicyManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@CCompatibilityPolicyManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForApplicationViewCompatibilityChanges@CCompatibilityPolicyManager@@UEAAJPEAUIApplicationViewCompatiblityNotification@@PEAK@Z
    virtual long RegisterForApplicationViewCompatibilityChanges(IApplicationViewCompatiblityNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CCompatibilityPolicyManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForApplicationViewCompatibilityChanges@CCompatibilityPolicyManager@@UEAAJK@Z
    virtual long UnregisterForApplicationViewCompatibilityChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CCompatibilityPolicyManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCompatibilityPolicyManager@@UEAA@XZ
    virtual ~CCompatibilityPolicyManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWorkAreaBasedPolicy@CCompatibilityPolicyManager@@AEAAJPEAUIImmersiveApplication@@PEAW4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z
    long _GetWorkAreaBasedPolicy(IImmersiveApplication *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleTabletModeChanged@CCompatibilityPolicyManager@@AEAAJH@Z
    long _HandleTabletModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyPolicyChange@CCompatibilityPolicyManager@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z
    long _NotifyPolicyChange(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToTabletModeNotifications@CCompatibilityPolicyManager@@AEAAJXZ
    long _SubscribeToTabletModeNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePolicyForView@CCompatibilityPolicyManager@@AEAAJPEAUIApplicationView@@@Z
    long _UpdatePolicyForView(IApplicationView *);
};
