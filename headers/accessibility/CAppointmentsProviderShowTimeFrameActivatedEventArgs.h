#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 50 member(s).
class CAppointmentsProviderShowTimeFrameActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentsProviderShowTimeFrameActivatedEventArgs@@QEAA@XZ
    CAppointmentsProviderShowTimeFrameActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Duration@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAUTimeSpan@Foundation@Windows@@@Z
    virtual long get_Duration(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TimeToShow@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_TimeToShow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentsProviderShowTimeFrameActivatedEventArgs@@UEAA@XZ
    virtual ~CAppointmentsProviderShowTimeFrameActivatedEventArgs();
};
