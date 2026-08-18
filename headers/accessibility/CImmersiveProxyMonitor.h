#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 38 member(s).
class CImmersiveProxyMonitor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveProxyMonitor@@QEAA@PEAUProxyMonitorInfo@@KPEAV?$CCoSimpleArray@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@@@@@@Z
    CImmersiveProxyMonitor(ProxyMonitorInfo *, unsigned long, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveProxyMonitor@@UEAA@XZ
    virtual ~CImmersiveProxyMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectObject@CImmersiveProxyMonitor@@EEAAJPEAUIUnknown@@@Z
    virtual long ConnectObject(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePerMonitorComponents@CImmersiveProxyMonitor@@EEAAJ_N@Z
    virtual long CreatePerMonitorComponents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPerMonitorComponents@CImmersiveProxyMonitor@@EEAAJXZ
    virtual long DestroyPerMonitorComponents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRect@CImmersiveProxyMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetDisplayRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRectNoLock@CImmersiveProxyMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetDisplayRectNoLock(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpi@CImmersiveProxyMonitor@@EEAAJPEAI0@Z
    virtual long GetEffectiveDpi(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpiNoLock@CImmersiveProxyMonitor@@EEAAJPEAI0@Z
    virtual long GetEffectiveDpiNoLock(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterFlags@CImmersiveProxyMonitor@@EEAAJPEAW4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    virtual long GetFilterFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterFlagsNoLock@CImmersiveProxyMonitor@@EEAAJPEAW4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    virtual long GetFilterFlagsNoLock(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CImmersiveProxyMonitor@@EEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetHandle(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleNoLock@CImmersiveProxyMonitor@@EEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetHandleNoLock(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentity@CImmersiveProxyMonitor@@EEAAJPEAK@Z
    virtual long GetIdentity(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityNoLock@CImmersiveProxyMonitor@@EEAAJPEAK@Z
    virtual long GetIdentityNoLock(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@CImmersiveProxyMonitor@@EEAAJPEAK@Z
    virtual long GetOrientation(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationNoLock@CImmersiveProxyMonitor@@EEAAJPEAK@Z
    virtual long GetOrientationNoLock(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkArea@CImmersiveProxyMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkAreaNoLock@CImmersiveProxyMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetWorkAreaNoLock(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDisplaySettingsChangeNoLock@CImmersiveProxyMonitor@@EEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@W4DisplayChangeSource@@@Z
    virtual long HostDisplaySettingsChangeNoLock(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsConnected(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedNoLock@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsConnectedNoLock(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CImmersiveProxyMonitor@@EEAAJPEAUIImmersiveMonitor@@PEAH@Z
    virtual long IsEqual(IImmersiveMonitor *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualNoLock@CImmersiveProxyMonitor@@EEAAJPEAUIImmersiveMonitor@@PEAH@Z
    virtual long IsEqualNoLock(IImmersiveMonitor *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveCapable@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsImmersiveCapable(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveDisplayDevice@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsImmersiveDisplayDevice(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimary@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsPrimary(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryNoLock@CImmersiveProxyMonitor@@EEAAJPEAH@Z
    virtual long IsPrimaryNoLock(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveProxyMonitor@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryConnectedObjects@CImmersiveProxyMonitor@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryConnectedObjects(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CImmersiveProxyMonitor@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotificationToConnectedObjectsNoLock@CImmersiveProxyMonitor@@EEAAJW4DisplayChangeSource@@@Z
    virtual long SendNotificationToConnectedObjectsNoLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CImmersiveProxyMonitor@@EEAAJXZ
    virtual long ShutdownServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveProxyMonitor@@EEAAJXZ
    virtual long SubscribeToServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveProxyMonitor@@EEAAJXZ
    virtual long UnsubscribeFromServices();
};
