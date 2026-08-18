#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 61 member(s).
class CDeviceActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDeviceActivatedEventArgs@@QEAA@XZ
    CDeviceActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDeviceActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDeviceActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDeviceActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeviceActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DeviceInformationId@CDeviceActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DeviceInformationId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CDeviceActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceActivatedEventArgs@@EEAA@XZ
    virtual ~CDeviceActivatedEventArgs();
};
