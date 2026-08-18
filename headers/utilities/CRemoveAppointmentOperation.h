#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CRemoveAppointmentOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRemoveAppointmentOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRemoveAppointmentOperation@@QEAA@XZ
    CRemoveAppointmentOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CRemoveAppointmentOperation@@UEAAJXZ
    virtual long DismissUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRemoveAppointmentOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRemoveAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRemoveAppointmentOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRemoveAppointmentOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRemoveAppointmentOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCanceled@CRemoveAppointmentOperation@@UEAAJXZ
    virtual long ReportCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportCompleted@CRemoveAppointmentOperation@@UEAAJXZ
    virtual long ReportCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportError@CRemoveAppointmentOperation@@UEAAJPEAUHSTRING__@@@Z
    virtual long ReportError(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CRemoveAppointmentOperation@@QEAAJPEBGUDateTime@Foundation@Windows@@0PEAVCAppointmentHostedWindowActivationInfo@@@Z
    long RuntimeClassInitialize(unsigned short const *, WindissectOpaque, unsigned short const *, CAppointmentHostedWindowActivationInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppointmentId@CRemoveAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppointmentId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InstanceStartDate@CRemoveAppointmentOperation@@UEAAJPEAPEAU?$IReference@UDateTime@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_InstanceStartDate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SourcePackageFamilyName@CRemoveAppointmentOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SourcePackageFamilyName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRemoveAppointmentOperation@@UEAA@XZ
    virtual ~CRemoveAppointmentOperation();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAction@CRemoveAppointmentOperation@@AEAAJ_N@Z
    long _CompleteAction(bool);
};
