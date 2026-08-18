#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class AvailableMiracastDeviceEnumerator {
public:
    class EnumeratedMiracastDeviceInfo;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AvailableMiracastDeviceEnumerator@@QEAA@XZ
    AvailableMiracastDeviceEnumerator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChallengeComplete@AvailableMiracastDeviceEnumerator@@UEAAXPEAUIMiracastDeviceChallenge@@@Z
    virtual void OnChallengeComplete(IMiracastDeviceChallenge *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceElementSourceNotification@AvailableMiracastDeviceEnumerator@@UEAAJW4_DeviceElementSourceNotificationType@@PEAUDeviceDisplayItem@@@Z
    virtual long OnDeviceElementSourceNotification(int, DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AvailableMiracastDeviceEnumerator@@QEAAJPEAUIAvailableMiracastDeviceEnumeratorListener@@@Z
    long RuntimeClassInitialize(IAvailableMiracastDeviceEnumeratorListener *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@AvailableMiracastDeviceEnumerator@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEnumeration@AvailableMiracastDeviceEnumerator@@UEAAJXZ
    virtual long StartEnumeration();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AvailableMiracastDeviceEnumerator@@UEAA@XZ
    virtual ~AvailableMiracastDeviceEnumerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckInitialAvailableEnumerationCompleteAndNotifyUnderLock@AvailableMiracastDeviceEnumerator@@AEAAXXZ
    void CheckInitialAvailableEnumerationCompleteAndNotifyUnderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindEnumeratedMiracastDeviceUnderLock@AvailableMiracastDeviceEnumerator@@AEAAHPEBG@Z
    int FindEnumeratedMiracastDeviceUnderLock(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePairedMiracastDeviceAdded@AvailableMiracastDeviceEnumerator@@AEAAXPEAUDeviceDisplayItem@@@Z
    void HandlePairedMiracastDeviceAdded(DeviceDisplayItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePairedMiracastDeviceChallengeComplete@AvailableMiracastDeviceEnumerator@@AEAAXPEBGW4MiracastDeviceChallengeState@@@Z
    void HandlePairedMiracastDeviceChallengeComplete(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePairedMiracastDeviceRemoved@AvailableMiracastDeviceEnumerator@@AEAAXPEBG@Z
    void HandlePairedMiracastDeviceRemoved(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePairedMiracastDeviceUpdated@AvailableMiracastDeviceEnumerator@@AEAAXPEAUDeviceDisplayItem@@@Z
    void HandlePairedMiracastDeviceUpdated(DeviceDisplayItem *);
};
