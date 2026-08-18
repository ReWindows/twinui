#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 49 member(s).
class CAppointmentsProviderRemoveAppointmentActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@QEAA@XZ
    CAppointmentsProviderRemoveAppointmentActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_RemoveAppointmentOperation@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJPEAPEAUIRemoveAppointmentOperation@AppointmentsProvider@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_RemoveAppointmentOperation(::Windows::ApplicationModel::Appointments::AppointmentsProvider::IRemoveAppointmentOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentsProviderRemoveAppointmentActivatedEventArgs@@UEAA@XZ
    virtual ~CAppointmentsProviderRemoveAppointmentActivatedEventArgs();
};
