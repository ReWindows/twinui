#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CEndpointMonitor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CEndpointMonitor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEndpointMonitor@@QEAA@PEAUHWND__@@@Z
    CEndpointMonitor(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CEndpointMonitor@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNotify@CEndpointMonitor@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z
    virtual long OnNotify(AUDIO_VOLUME_NOTIFICATION_DATA *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEndpointMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CEndpointMonitor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEndpointMonitor@@QEAA@XZ
    ~CEndpointMonitor();
};
