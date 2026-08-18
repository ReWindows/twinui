#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 35 member(s).
class CBrokeredAppointmentsManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CBrokeredAppointmentsManager@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CBrokeredAppointmentsManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CBrokeredAppointmentsManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CBrokeredAppointmentsManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CBrokeredAppointmentsManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CBrokeredAppointmentsManager@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CBrokeredAppointmentsManager@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBrokeredAppointmentsManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CBrokeredAppointmentsManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAddAppointmentAsync@CBrokeredAppointmentsManager@@UEAAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@5@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@75@@Z
    virtual long ShowAddAppointmentAsync(::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAddAppointmentWithPlacementAsync@CBrokeredAppointmentsManager@@UEAAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@5@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@75@@Z
    virtual long ShowAddAppointmentWithPlacementAsync(::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentAsync(HSTRING__*, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentWithPlacementAndDateAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@W4Placement@Popups@UI@5@UDateTime@45@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentWithPlacementAndDateAsync(HSTRING__*, WindissectOpaque, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowRemoveAppointmentWithPlacementAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@URect@Foundation@Windows@@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@_N@45@@Z
    virtual long ShowRemoveAppointmentWithPlacementAsync(HSTRING__*, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentWithPlacementAndDateAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@UDateTime@86@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentWithPlacementAndDateAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowReplaceAppointmentWithPlacementAsync@CBrokeredAppointmentsManager@@UEAAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@URect@Foundation@6@W4Placement@Popups@UI@6@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    virtual long ShowReplaceAppointmentWithPlacementAsync(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowTimeFrameAsync@CBrokeredAppointmentsManager@@UEAAJUDateTime@Foundation@Windows@@UTimeSpan@34@PEAPEAUIAsyncAction@34@@Z
    virtual long ShowTimeFrameAsync(WindissectOpaque, WindissectOpaque, WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddAppointmentAsyncInternal@CBrokeredAppointmentsManager@@CAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@AEBURect@Foundation@5@W4Placement@Popups@UI@5@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@75@@Z
    static long _AddAppointmentAsyncInternal(::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque const &, int, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteAppointmentAction@CBrokeredAppointmentsManager@@CAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEBGPEAUIActionActivationInfo@Actions@45@@Z
    static long _ExecuteAppointmentAction(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCallingApplicationWindowAndVerifyVisibility@CBrokeredAppointmentsManager@@CAJPEAPEAUHWND__@@PEAPEAG@Z
    static long _GetCallingApplicationWindowAndVerifyVisibility(HWND__* *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveAppointmentAsyncInternal@CBrokeredAppointmentsManager@@CAJPEAUHSTRING__@@URect@Foundation@Windows@@W4Placement@Popups@UI@5@PEAUDateTime@45@PEAPEAU?$IAsyncOperation@_N@45@@Z
    static long _RemoveAppointmentAsyncInternal(HSTRING__*, WindissectOpaque, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceAppointmentAsyncInternal@CBrokeredAppointmentsManager@@CAJPEAUHSTRING__@@PEAUIAppointment@Appointments@ApplicationModel@Windows@@AEBURect@Foundation@6@W4Placement@Popups@UI@6@PEAUDateTime@86@PEAPEAU?$IAsyncOperation@PEAUHSTRING__@@@86@@Z
    static long _ReplaceAppointmentAsyncInternal(HSTRING__*, ::Windows::ApplicationModel::Appointments::IAppointment *, WindissectOpaque const &, int, WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAppointmentInternalImplementation@CBrokeredAppointmentsManager@@CAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    static long _ValidateAppointmentInternalImplementation(::Windows::ApplicationModel::Appointments::IAppointment *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAppointmentOrganzierAndInvitees@CBrokeredAppointmentsManager@@CAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    static long _ValidateAppointmentOrganzierAndInvitees(::Windows::ApplicationModel::Appointments::IAppointment *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAppointmentPropertyValues@CBrokeredAppointmentsManager@@CAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    static long _ValidateAppointmentPropertyValues(::Windows::ApplicationModel::Appointments::IAppointment *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateAppointmentRecurrence@CBrokeredAppointmentsManager@@CAJPEAUIAppointment@Appointments@ApplicationModel@Windows@@@Z
    static long _ValidateAppointmentRecurrence(::Windows::ApplicationModel::Appointments::IAppointment *);
};
