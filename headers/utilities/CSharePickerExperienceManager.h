#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 59 member(s).
class CSharePickerExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSharePickerExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSharePickerExperienceManager@@QEAA@XZ
    CSharePickerExperienceManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSharePickerExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSharePickerExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSharePickerExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@CSharePickerExperienceManager@@UEAAJXZ
    virtual long Hide();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@CSharePickerExperienceManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChromeOffsetsChanged@CSharePickerExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z
    virtual long OnChromeOffsetsChanged(IApplicationFrame *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommand@CSharePickerExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z
    virtual long OnCommand(IApplicationFrame *, _GUID const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CSharePickerExperienceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPositionChanged@CSharePickerExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z
    virtual long OnPositionChanged(IApplicationFrame *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSharePickerExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSharePickerExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSharePickerExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSharePickerExperienceManager@@UEAAJPEAUISharingOperation@DataTransfer@Internal@ApplicationModel@Windows@@PEAUIShareExperienceCallbacks@Share@Shell@46@PEAUHSTRING__@@@Z
    virtual long Show(::Windows::ApplicationModel::Internal::DataTransfer::ISharingOperation *, ::Windows::Internal::Shell::Share::IShareExperienceCallbacks *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowErrorMessage@CSharePickerExperienceManager@@UEAAJ_K@Z
    virtual long ShowErrorMessage(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HostAppPackageFamilyName@CSharePickerExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HostAppPackageFamilyName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharePickerExperienceManager@@UEAA@XZ
    virtual ~CSharePickerExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationActivatedForLaunch@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@J@Z
    virtual long OnApplicationActivatedForLaunch(CSingleViewShellExperience *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEventQueued@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long OnEventQueued(CSingleViewShellExperience *, HSTRING__*, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetForegroundFailed@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnSetForegroundFailed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CSharePickerExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateHostedRect@CSharePickerExperienceManager@@AEAAXQEAUHWND__@@AEBUtagRECT@@USize@Foundation@Windows@@AEAU3@@Z
    void CalculateHostedRect(HWND__* const, tagRECT const &, WindissectOpaque, tagRECT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CSharePickerExperienceManager@@AEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupStaleRegistrationsForCurrentLaunch@CSharePickerExperienceManager@@AEAAXXZ
    void CleanupStaleRegistrationsForCurrentLaunch();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CSharePickerExperienceManager@@AEAAJXZ
    long Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFrame@CSharePickerExperienceManager@@AEAAJXZ
    long DestroyFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureShareExperienceCallbacks@CSharePickerExperienceManager@@AEAAJXZ
    long EnsureShareExperienceCallbacks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderColor@CSharePickerExperienceManager@@AEAAKXZ
    unsigned long GetBorderColor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideInternal@CSharePickerExperienceManager@@AEAAJXZ
    long HideInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDestroyInProgress@CSharePickerExperienceManager@@AEBA_NXZ
    bool IsDestroyInProgress() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CSharePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistentShareShow@CSharePickerExperienceManager@@AEAAJPEAUISharingOperation@DataTransfer@Internal@ApplicationModel@Windows@@PEAUHWND__@@@Z
    long PersistentShareShow(::Windows::ApplicationModel::Internal::DataTransfer::ISharingOperation *, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeFrame@CSharePickerExperienceManager@@AEAAXUSize@Foundation@Windows@@@Z
    void ResizeFrame(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeWindow@CSharePickerExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z
    long ResizeWindow(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeWindowWithScaling@CSharePickerExperienceManager@@AEAAJUSize@Foundation@Windows@@@Z
    long ResizeWindowWithScaling(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupApplicationFrame@CSharePickerExperienceManager@@AEAAJXZ
    long SetupApplicationFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPicker@CSharePickerExperienceManager@@AEAAJXZ
    long ShowPicker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryDismissShareExperience@CSharePickerExperienceManager@@AEAAJXZ
    long TryDismissShareExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFramePositionAndSize@CSharePickerExperienceManager@@AEAAJURect@Foundation@Windows@@@Z
    long UpdateFramePositionAndSize(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHostedViewPosition@CSharePickerExperienceManager@@AEAAJXZ
    long UpdateHostedViewPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMonitorScaleForWindow@CSharePickerExperienceManager@@AEAAJPEAUHWND__@@PEAW4DEVICE_SCALE_FACTOR@@@Z
    long _GetMonitorScaleForWindow(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?isDarkModeEnabled@CSharePickerExperienceManager@@AEAA_NXZ
    bool isDarkModeEnabled();
};
