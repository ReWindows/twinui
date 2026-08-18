#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 23 member(s).
class CAddAppointmentOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddAppointmentOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddAppointmentOperation@@QEAA@XZ
    CAddAppointmentOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CAddAppointmentOperation@@UEAAJXZ
    virtual long DismissUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAddAppointmentOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAddAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAddAppointmentOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddAppointmentOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddAppointmentOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCanceled@CAddAppointmentOperation@@UEAAJXZ
    virtual long ReportCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CAddAppointmentOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportCompleted(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CAddAppointmentOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportError(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppointmentInformation@CAddAppointmentOperation@@UEAAJPEAPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_AppointmentInformation(::Windows::ApplicationModel::Appointments::IAppointment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePackageFamilyName@CAddAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourcePackageFamilyName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddAppointmentOperation@@UEAA@XZ
    virtual ~CAddAppointmentOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAction@CAddAppointmentOperation@@AEAAJXZ
    long _CompleteAction();
};
