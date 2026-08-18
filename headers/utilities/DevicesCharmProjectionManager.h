#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class DevicesCharmProjectionManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectUI@DevicesCharmProjectionManager@@UEAAJXZ
    virtual long ConnectUI();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicesCharmProjectionManager@@QEAA@XZ
    DevicesCharmProjectionManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectUI@DevicesCharmProjectionManager@@UEAAJXZ
    virtual long DisconnectUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForgetTerminatedCurrentMiracastConnection@DevicesCharmProjectionManager@@UEAAJXZ
    virtual long ForgetTerminatedCurrentMiracastConnection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableDisplayState@DevicesCharmProjectionManager@@UEAAJPEA_N00PEAPEAUIMiracastConnection@@@Z
    virtual long GetAvailableDisplayState(bool *, bool *, bool *, IMiracastConnection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMiracastConnection@DevicesCharmProjectionManager@@UEAAJPEAPEAUIMiracastConnection@@@Z
    virtual long GetCurrentMiracastConnection(IMiracastConnection * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSessionRemoteable@DevicesCharmProjectionManager@@UEAA_NXZ
    virtual bool IsSessionRemoteable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForProjectionManagerEvents@DevicesCharmProjectionManager@@UEAAJPEAUIDevicesCharmProjectionManagerEventHandler@@PEAUEventRegistrationToken@@@Z
    virtual long RegisterForProjectionManagerEvents(IDevicesCharmProjectionManagerEventHandler *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@DevicesCharmProjectionManager@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartNewMiracastConnection@DevicesCharmProjectionManager@@UEAAJPEBG_NPEAPEAUIMiracastConnection@@@Z
    virtual long StartNewMiracastConnection(unsigned short const *, bool, IMiracastConnection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Startup@DevicesCharmProjectionManager@@UEAAJXZ
    virtual long Startup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForProjectionManagerEvents@DevicesCharmProjectionManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long UnregisterForProjectionManagerEvents(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicesCharmProjectionManager@@UEAA@XZ
    virtual ~DevicesCharmProjectionManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckAndUnregisterForWnfNotificationsIfNecessaryUnderLock@DevicesCharmProjectionManager@@AEAAXXZ
    void CheckAndUnregisterForWnfNotificationsIfNecessaryUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleCurrentConnectionStateChangedUnderLock@DevicesCharmProjectionManager@@AEAAXW4MiracastConnectionState@@@Z
    void HandleCurrentConnectionStateChangedUnderLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialMiracastStateCallback@DevicesCharmProjectionManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long InitialMiracastStateCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MiracastStateChangeCallback@DevicesCharmProjectionManager@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long MiracastStateChangeCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMiracastDeviceStateChange@DevicesCharmProjectionManager@@AEAAXU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEBU_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION@@@Z
    void OnMiracastDeviceStateChange(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, _NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForWnfNotificationsUnderLock@DevicesCharmProjectionManager@@AEAAJXZ
    long RegisterForWnfNotificationsUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowProjectConnectionErrorToast@DevicesCharmProjectionManager@@CAJW4MiracastConnectionError@@@Z
    static long ShowProjectConnectionErrorToast(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetNewActiveMiracastConnectionFromWnfState@DevicesCharmProjectionManager@@AEAAJPEBGW4MIRACAST_DISPLAY_DEVICE_STATE@@W4MIRACAST_DEVICE_STATUS@@PEAPEAVMiracastConnection@@@Z
    long TryGetNewActiveMiracastConnectionFromWnfState(unsigned short const *, int, int, MiracastConnection * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentConnectionUnderLock@DevicesCharmProjectionManager@@AEAAXPEAVMiracastConnection@@@Z
    void UpdateCurrentConnectionUnderLock(MiracastConnection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurrentConnectionWithActiveConnectionFromWnfStateUnderLock@DevicesCharmProjectionManager@@AEAAJPEBGW4MIRACAST_DISPLAY_DEVICE_STATE@@W4MIRACAST_DEVICE_STATUS@@@Z
    long UpdateCurrentConnectionWithActiveConnectionFromWnfStateUnderLock(unsigned short const *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WnfUnregisterCompleteCallback@DevicesCharmProjectionManager@@CAXPEAX@Z
    static void WnfUnregisterCompleteCallback(void *);
};
