#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
class CImmersiveMonitor {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveMonitor@@QEAA@PEBUImmersiveMonitorInfo@@KPEAV?$CCoSimpleArray@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UPENDING_DISPLAY_CHANGE_NOTIFICATION@@@@@@@Z
    CImmersiveMonitor(ImmersiveMonitorInfo const *, unsigned long, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveMonitor@@UEAA@XZ
    virtual ~CImmersiveMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectObject@CImmersiveMonitor@@EEAAJPEAUIUnknown@@@Z
    virtual long ConnectObject(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePerMonitorComponents@CImmersiveMonitor@@EEAAJ_N@Z
    virtual long CreatePerMonitorComponents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPerMonitorComponents@CImmersiveMonitor@@EEAAJXZ
    virtual long DestroyPerMonitorComponents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRect@CImmersiveMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetDisplayRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRectNoLock@CImmersiveMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetDisplayRectNoLock(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpi@CImmersiveMonitor@@EEAAJPEAI0@Z
    virtual long GetEffectiveDpi(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpiNoLock@CImmersiveMonitor@@EEAAJPEAI0@Z
    virtual long GetEffectiveDpiNoLock(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterFlags@CImmersiveMonitor@@EEAAJPEAW4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    virtual long GetFilterFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterFlagsNoLock@CImmersiveMonitor@@EEAAJPEAW4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    virtual long GetFilterFlagsNoLock(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CImmersiveMonitor@@EEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetHandle(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleNoLock@CImmersiveMonitor@@EEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetHandleNoLock(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentity@CImmersiveMonitor@@EEAAJPEAK@Z
    virtual long GetIdentity(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentityNoLock@CImmersiveMonitor@@EEAAJPEAK@Z
    virtual long GetIdentityNoLock(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@CImmersiveMonitor@@EEAAJPEAK@Z
    virtual long GetOrientation(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationNoLock@CImmersiveMonitor@@EEAAJPEAK@Z
    virtual long GetOrientationNoLock(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkArea@CImmersiveMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkAreaNoLock@CImmersiveMonitor@@EEAAJPEAUtagRECT@@@Z
    virtual long GetWorkAreaNoLock(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostDisplaySettingsChangeNoLock@CImmersiveMonitor@@EEAAJW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@W4DisplayChangeSource@@@Z
    virtual long HostDisplaySettingsChangeNoLock(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsConnected(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnectedNoLock@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsConnectedNoLock(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CImmersiveMonitor@@EEAAJPEAUIImmersiveMonitor@@PEAH@Z
    virtual long IsEqual(IImmersiveMonitor *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualNoLock@CImmersiveMonitor@@EEAAJPEAUIImmersiveMonitor@@PEAH@Z
    virtual long IsEqualNoLock(IImmersiveMonitor *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveCapable@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsImmersiveCapable(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveDisplayDevice@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsImmersiveDisplayDevice(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimary@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsPrimary(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimaryNoLock@CImmersiveMonitor@@EEAAJPEAH@Z
    virtual long IsPrimaryNoLock(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CImmersiveMonitor@@EEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryConnectedObjects@CImmersiveMonitor@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryConnectedObjects(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CImmersiveMonitor@@EEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendNotificationToConnectedObjectsNoLock@CImmersiveMonitor@@EEAAJW4DisplayChangeSource@@@Z
    virtual long SendNotificationToConnectedObjectsNoLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CImmersiveMonitor@@EEAAJXZ
    virtual long ShutdownServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CImmersiveMonitor@@EEAAJXZ
    virtual long SubscribeToServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CImmersiveMonitor@@EEAAJXZ
    virtual long UnsubscribeFromServices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectObjectNoLock@CImmersiveMonitor@@AEAAJPEAUIUnknown@@@Z
    long _ConnectObjectNoLock(IUnknown *);
};
