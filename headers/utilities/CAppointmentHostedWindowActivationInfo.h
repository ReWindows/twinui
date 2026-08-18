#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 53 member(s).
class CAppointmentHostedWindowActivationInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppointmentHostedWindowActivationInfo@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppointmentHostedWindowActivationInfo@@QEAA@XZ
    CAppointmentHostedWindowActivationInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAppointmentHostedWindowActivationInfo@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAppointmentHostedWindowActivationInfo@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAppointmentHostedWindowActivationInfo@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowSize@CAppointmentHostedWindowActivationInfo@@UEAAJPEAH0@Z
    virtual long GetWindowSize(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCanceled@CAppointmentHostedWindowActivationInfo@@UEAAJXZ
    virtual long OnCanceled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationReady@CAppointmentHostedWindowActivationInfo@@UEAAJXZ
    virtual long OnHostedApplicationReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCreated@CAppointmentHostedWindowActivationInfo@@UEAAJPEAUIHostedFlyoutOperation@Actions@ApplicationModel@Windows@@@Z
    virtual long OnWindowCreated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CAppointmentHostedWindowActivationInfo@@UEAAJXZ
    virtual long OnWindowDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDismissed@CAppointmentHostedWindowActivationInfo@@UEAAJXZ
    virtual long OnWindowDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowHosted@CAppointmentHostedWindowActivationInfo@@UEAAJXZ
    virtual long OnWindowHosted();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppointmentHostedWindowActivationInfo@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppointmentHostedWindowActivationInfo@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAddOperationDeferral@CAppointmentHostedWindowActivationInfo@@QEAAJPEAV?$AsyncDeferral@VCHSTRINGResult@Internal@Windows@@@Internal@Windows@@@Z
    long SetAddOperationDeferral(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAddOperationResult@CAppointmentHostedWindowActivationInfo@@QEAAJPEBG@Z
    long SetAddOperationResult(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionRect@CAppointmentHostedWindowActivationInfo@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_SelectionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowPlacement@CAppointmentHostedWindowActivationInfo@@UEAAJPEAW4Placement@Popups@UI@Windows@@@Z
    virtual long get_WindowPlacement(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppointmentHostedWindowActivationInfo@@UEAA@XZ
    virtual ~CAppointmentHostedWindowActivationInfo();
};
