#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 49 member(s).
class CAppointmentsProviderReplaceAppointmentActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@QEAA@XZ
    CAppointmentsProviderReplaceAppointmentActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ReplaceAppointmentOperation@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJPEAPEAUIReplaceAppointmentOperation@AppointmentsProvider@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_ReplaceAppointmentOperation(::Windows::ApplicationModel::Appointments::AppointmentsProvider::IReplaceAppointmentOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Verb@CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Verb(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentsProviderReplaceAppointmentActivatedEventArgs@@UEAA@XZ
    virtual ~CAppointmentsProviderReplaceAppointmentActivatedEventArgs();
};
