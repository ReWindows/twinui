#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class DevicesCharmUISession {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DevicesCharmUISession@@QEAA@XZ
    DevicesCharmUISession();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevicesFlow@DevicesCharmUISession@@UEAAJPEAPEAUIDevicesFlow@@@Z
    virtual long GetDevicesFlow(IDevicesFlow * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlowParams@DevicesCharmUISession@@UEAAJPEAKPEAU_GUID@@@Z
    virtual long GetFlowParams(unsigned long *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObject@DevicesCharmUISession@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetUIObject(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIType@DevicesCharmUISession@@UEAAJPEAW4DEVICESFLOW_FLAGS@@@Z
    virtual long GetUIType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@DevicesCharmUISession@@UEAAJPEAUIPopupWindow@@@Z
    virtual long Invoke(IPopupWindow *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFlowParams@DevicesCharmUISession@@UEAAJKU_GUID@@@Z
    virtual long SetFlowParams(unsigned long, _GUID);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DevicesCharmUISession@@UEAA@XZ
    virtual ~DevicesCharmUISession();
};
