#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
class CSingleViewShellExperience {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z
    long AddTestAumid(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z
    void BoostPriority(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSingleViewShellExperience@@QEAA@PEAVSingleViewShellExperienceEventHandler@@W4Flags@0@@Z
    CSingleViewShellExperience(SingleViewShellExperienceEventHandler *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyView@CSingleViewShellExperience@@QEAAJXZ
    long DestroyView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z
    long Hide(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Launch@CSingleViewShellExperience@@QEAAJXZ
    long Launch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long NavigateView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z
    long OnSessionIdleStateChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewStateChanged@CSingleViewShellExperience@@QEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z
    long OnViewStateChanged(::Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z
    long Reactivate(HSTRING__*, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z
    long RuntimeClassInitialize(IWeakReferenceSource *, IServiceProvider *, HSTRING__*, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z
    long SetArgs(HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z
    long SetPosition(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z
    long SetPreferentialRMSettings(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z
    long SetWindowBand(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z
    long Show(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowBorder@CSingleViewShellExperience@@QEAAJW4Border@1@W4ACCENT_STATE@@KPEBUtagRECT@@@Z
    long ShowBorder(int, int, unsigned long, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboostPriority@CSingleViewShellExperience@@QEAAXW4PriorityBoostReason@1@@Z
    void UnboostPriority(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uncloak@CSingleViewShellExperience@@QEAAJXZ
    long Uncloak();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSingleViewShellExperience@@QEAA@XZ
    ~CSingleViewShellExperience();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostDiskIo@CSingleViewShellExperience@@AEAAXXZ
    void BoostDiskIo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelWaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAXXZ
    void CancelWaitForWindowReadyForPresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureUnboostCallback@CSingleViewShellExperience@@AEAAJXZ
    long EnsureUnboostCallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z
    long LaunchCore(::Microsoft::WRL::Wrappers::HString const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClientWindowReadyForPresentationChanged@CSingleViewShellExperience@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventQueued@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z
    long OnEventQueued(::Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z
    long OnViewCreatedBase(WindissectOpaque &&);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ
    long OnViewDestroyedBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChangedBase@CSingleViewShellExperience@@AEAAJPEAUIShellExperienceViewStateChangedEventArgs@Experience@Shell@Internal@Windows@@@Z
    long OnViewPropertiesChangedBase(::Windows::Internal::Shell::Experience::IShellExperienceViewStateChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewVisibilityRevokedChangedBase@CSingleViewShellExperience@@AEAAJXZ
    long OnViewVisibilityRevokedChangedBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAumid@CSingleViewShellExperience@@AEAAJPEAUHSTRING__@@PEAUEventRegistrationToken@@@Z
    long RegisterAumid(HSTRING__*, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetViews@CSingleViewShellExperience@@AEAAXXZ
    void ResetViews();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z
    long SetImportanceValues(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowView@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z
    long ShowView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowViewAsync@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z
    long ShowViewAsync(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StashPendingShow@CSingleViewShellExperience@@AEAAXW4ShowOptions@1@@Z
    void StashPendingShow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboostDiskIo@CSingleViewShellExperience@@AEAAXXZ
    void UnboostDiskIo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnstashPendingShow@CSingleViewShellExperience@@AEAA?AW4ShowOptions@1@XZ
    int UnstashPendingShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForWindowReadyForPresentation@CSingleViewShellExperience@@AEAAJW4ShowOptions@1@@Z
    long WaitForWindowReadyForPresentation(int);
};
