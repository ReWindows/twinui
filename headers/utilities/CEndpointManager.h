#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CEndpointManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEndpointManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEndpointManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEndpointManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEndpointManager@@QEAA@XZ
    ~CEndpointManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNewDeviceMonitor@CEndpointManager@@AEAAJPEBG@Z
    long CreateNewDeviceMonitor(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindDeviceMonitor@CEndpointManager@@AEAAJPEBGPEAPEAVCEndpointMonitor@@@Z
    long FindDeviceMonitor(unsigned short const *, CEndpointMonitor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkMonitorRemoved@CEndpointManager@@AEAAXPEAVCEndpointMonitor@@@Z
    void MarkMonitorRemoved(CEndpointMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDefaultDeviceChanged@CEndpointManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEBG@Z
    virtual long OnDefaultDeviceChanged(int, int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceAdded@CEndpointManager@@EEAAJPEBG@Z
    virtual long OnDeviceAdded(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceRemoved@CEndpointManager@@EEAAJPEBG@Z
    virtual long OnDeviceRemoved(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeviceStateChanged@CEndpointManager@@EEAAJPEBGK@Z
    virtual long OnDeviceStateChanged(unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyValueChanged@CEndpointManager@@EEAAJPEBGU_tagpropertykey@@@Z
    virtual long OnPropertyValueChanged(unsigned short const *, _tagpropertykey);
};
