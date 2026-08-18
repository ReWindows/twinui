#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 49 member(s).
class CAppointmentsProviderAddAppointmentActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentsProviderAddAppointmentActivatedEventArgs@@QEAA@XZ
    CAppointmentsProviderAddAppointmentActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AddAppointmentOperation@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJPEAPEAUIAddAppointmentOperation@AppointmentsProvider@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_AddAppointmentOperation(::Windows::ApplicationModel::Appointments::AppointmentsProvider::IAddAppointmentOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentsProviderAddAppointmentActivatedEventArgs@@UEAA@XZ
    virtual ~CAppointmentsProviderAddAppointmentActivatedEventArgs();
};
