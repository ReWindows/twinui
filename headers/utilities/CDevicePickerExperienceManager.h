#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 36 member(s).
class CDevicePickerExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDevicePickerExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDevicePickerExperienceManager@@QEAA@XZ
    CDevicePickerExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CDevicePickerExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDevicePickerExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDevicePickerExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDevicePickerExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideFlyout@CDevicePickerExperienceManager@@UEAAJXZ
    virtual long HideFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDevicePickerExperienceManager@@UEAAJU_GUID@@K_K@Z
    virtual long Initialize(_GUID, unsigned long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@CDevicePickerExperienceManager@@UEAAJXZ
    virtual long OnDismiss();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDevicePickerExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDevicePickerExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowFlyout@CDevicePickerExperienceManager@@UEAAJURect@Foundation@Windows@@W4Placement@Popups@UI@4@@Z
    virtual long ShowFlyout(WindissectOpaque, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Dismissed@CDevicePickerExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAVDevicePickerExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Dismissed(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Dismissed@CDevicePickerExperienceManager@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Dismissed(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDevicePickerExperienceManager@@UEAA@XZ
    virtual ~CDevicePickerExperienceManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroyed@CDevicePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroyed(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewDestroying@CDevicePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewDestroying(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewHidden@CDevicePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewHidden(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewShown@CDevicePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewShown(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewUncloaking@CDevicePickerExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewUncloaking(CSingleViewShellExperience *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculatePopupRect@CDevicePickerExperienceManager@@CA?AUtagRECT@@AEBU2@W4Placement@Popups@UI@Windows@@PEAUHWND__@@@Z
    static tagRECT _CalculatePopupRect(tagRECT const &, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateViewPosition@CDevicePickerExperienceManager@@AEAAXXZ
    void _UpdateViewPosition();
};
