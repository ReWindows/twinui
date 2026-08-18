#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CEdgeUiDeviceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEdgeUiManager@CEdgeUiDeviceManager@@UEAAJPEAUIEdgeUiManagerInternal@@@Z
    virtual long AddEdgeUiManager(IEdgeUiManagerInternal *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEdgeUiDeviceManager@@QEAA@XZ
    CEdgeUiDeviceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CEdgeUiDeviceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CEdgeUiDeviceManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshDeviceRegistrations@CEdgeUiDeviceManager@@UEAAJXZ
    virtual long RefreshDeviceRegistrations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEdgeUiManager@CEdgeUiDeviceManager@@UEAAJPEAUIEdgeUiManagerInternal@@@Z
    virtual long RemoveEdgeUiManager(IEdgeUiManagerInternal *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CEdgeUiDeviceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CEdgeUiDeviceManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterAllDevices@CEdgeUiDeviceManager@@AEAAJXZ
    long _RegisterAllDevices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryRegisterDeviceWithManagers@CEdgeUiDeviceManager@@AEAAXPEAX@Z
    void _TryRegisterDeviceWithManagers(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryUnregisterDeviceWithManagers@CEdgeUiDeviceManager@@AEAAXPEAX@Z
    void _TryUnregisterDeviceWithManagers(void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEdgeUiDeviceManager@@EEAA@XZ
    virtual ~CEdgeUiDeviceManager();
};
