#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class CReplaceAppointmentOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReplaceAppointmentOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReplaceAppointmentOperation@@QEAA@XZ
    CReplaceAppointmentOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CReplaceAppointmentOperation@@UEAAJXZ
    virtual long DismissUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CReplaceAppointmentOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CReplaceAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CReplaceAppointmentOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReplaceAppointmentOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReplaceAppointmentOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCanceled@CReplaceAppointmentOperation@@UEAAJXZ
    virtual long ReportCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CReplaceAppointmentOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportCompleted(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CReplaceAppointmentOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportError(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CReplaceAppointmentOperation@@QEAAJPEBGPEAUIAppointment@Appointments@ApplicationModel@Windows@@UDateTime@Foundation@5@0PEAVCAppointmentHostedWindowActivationInfo@@@Z
    long RuntimeClassInitialize(unsigned short const *, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, unsigned short const *, CAppointmentHostedWindowActivationInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppointmentId@CReplaceAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppointmentId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppointmentInformation@CReplaceAppointmentOperation@@UEAAJPEAPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    virtual long get_AppointmentInformation(::Windows::ApplicationModel::Appointments::IAppointment * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceStartDate@CReplaceAppointmentOperation@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_InstanceStartDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePackageFamilyName@CReplaceAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourcePackageFamilyName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReplaceAppointmentOperation@@UEAA@XZ
    virtual ~CReplaceAppointmentOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAction@CReplaceAppointmentOperation@@AEAAJXZ
    long _CompleteAction();
};
