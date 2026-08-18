#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CPerWindowNotificationQueue {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPerWindowNotificationQueue@@QEAA@PEAUHWND__@@@Z
    CPerWindowNotificationQueue(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanRemove@CPerWindowNotificationQueue@@UEAA_NXZ
    virtual bool CanRemove();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextNotification@CPerWindowNotificationQueue@@UEAAJPEAUIHM_PER_WINDOW_NOTIFICATION_QUEUE_DATA@@@Z
    virtual long GetNextNotification(IHM_PER_WINDOW_NOTIFICATION_QUEUE_DATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeout@CPerWindowNotificationQueue@@UEAAKXZ
    virtual unsigned long GetTimeout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CPerWindowNotificationQueue@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueNotification@CPerWindowNotificationQueue@@UEAAJPEBUIHM_PER_WINDOW_NOTIFICATION_QUEUE_DATA@@@Z
    virtual long QueueNotification(IHM_PER_WINDOW_NOTIFICATION_QUEUE_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartProcessing@CPerWindowNotificationQueue@@UEAAJXZ
    virtual long StartProcessing();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPerWindowNotificationQueue@@EEAA@XZ
    virtual ~CPerWindowNotificationQueue();
};
