#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 19 member(s).
class MiracastConnection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionErrorDetails@MiracastConnection@@UEAAJPEAW4MiracastConnectionError@@PEAW4MiracastConnectionState@@@Z
    virtual long GetConnectionErrorDetails(int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentConnectionState@MiracastConnection@@UEAA?AW4MiracastConnectionState@@XZ
    virtual int GetCurrentConnectionState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetDeviceIDs@MiracastConnection@@UEAAJPEAPEAG0@Z
    virtual long GetTargetDeviceIDs(unsigned short * *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInTerminalState@MiracastConnection@@UEAA_NXZ
    virtual bool IsInTerminalState();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MiracastConnection@@QEAA@XZ
    MiracastConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForConnectionEvents@MiracastConnection@@UEAAJPEAUIMiracastConnectionEventHandler@@PEAUEventRegistrationToken@@PEAW4MiracastConnectionState@@@Z
    virtual long RegisterForConnectionEvents(IMiracastConnectionEventHandler *, EventRegistrationToken *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MiracastConnection@@QEAAJPEAUIUnknown@@PEBG@Z
    long RuntimeClassInitialize(IUnknown *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@MiracastConnection@@QEAAXXZ
    void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartConnection@MiracastConnection@@QEAAX_N@Z
    void StartConnection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryAttachConnection@MiracastConnection@@QEAA_NW4MIRACAST_DISPLAY_DEVICE_STATE@@W4MIRACAST_DEVICE_STATUS@@@Z
    bool TryAttachConnection(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUpdateState@MiracastConnection@@QEAA_NW4MIRACAST_DISPLAY_DEVICE_STATE@@W4MIRACAST_DEVICE_STATUS@@@Z
    bool TryUpdateState(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForConnectionEvents@MiracastConnection@@UEAAJUEventRegistrationToken@@@Z
    virtual long UnregisterForConnectionEvents(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MiracastConnection@@UEAA@XZ
    virtual ~MiracastConnection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeStateUnderLock@MiracastConnection@@AEAAXW4MiracastConnectionState@@@Z
    void ChangeStateUnderLock(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConnectionErrorFromDeviceStatus@MiracastConnection@@CA?AW4MiracastConnectionError@@W4MIRACAST_DEVICE_STATUS@@@Z
    static int GetConnectionErrorFromDeviceStatus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToErrorStateUnderLock@MiracastConnection@@AEAAXW4MiracastConnectionError@@@Z
    void TransitionToErrorStateUnderLock(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryTransitionStateFromMiracastStateUnderLock@MiracastConnection@@AEAA_NW4MIRACAST_DISPLAY_DEVICE_STATE@@W4MIRACAST_DEVICE_STATUS@@@Z
    bool TryTransitionStateFromMiracastStateUnderLock(int, int);
};
