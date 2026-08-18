#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CNonLockingImmersiveMonitor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CNonLockingImmersiveMonitor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectObject@CNonLockingImmersiveMonitor@@UEAAJPEAUIUnknown@@@Z
    virtual long ConnectObject(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRect@CNonLockingImmersiveMonitor@@UEAAJPEAUtagRECT@@@Z
    virtual long GetDisplayRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveDpi@CNonLockingImmersiveMonitor@@UEAAJPEAI0@Z
    virtual long GetEffectiveDpi(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilterFlags@CNonLockingImmersiveMonitor@@UEAAJPEAW4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    virtual long GetFilterFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandle@CNonLockingImmersiveMonitor@@UEAAJPEAPEAUHMONITOR__@@@Z
    virtual long GetHandle(HMONITOR__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentity@CNonLockingImmersiveMonitor@@UEAAJPEAK@Z
    virtual long GetIdentity(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientation@CNonLockingImmersiveMonitor@@UEAAJPEAK@Z
    virtual long GetOrientation(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWorkArea@CNonLockingImmersiveMonitor@@UEAAJPEAUtagRECT@@@Z
    virtual long GetWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsConnected@CNonLockingImmersiveMonitor@@UEAAJPEAH@Z
    virtual long IsConnected(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqual@CNonLockingImmersiveMonitor@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z
    virtual long IsEqual(IImmersiveMonitor *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveCapable@CNonLockingImmersiveMonitor@@UEAAJPEAH@Z
    virtual long IsImmersiveCapable(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsImmersiveDisplayDevice@CNonLockingImmersiveMonitor@@UEAAJPEAH@Z
    virtual long IsImmersiveDisplayDevice(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPrimary@CNonLockingImmersiveMonitor@@UEAAJPEAH@Z
    virtual long IsPrimary(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CNonLockingImmersiveMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CNonLockingImmersiveMonitor@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CNonLockingImmersiveMonitor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNonLockingImmersiveMonitor@@QEAA@XZ
    ~CNonLockingImmersiveMonitor();
};
