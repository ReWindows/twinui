#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactActionControlItemBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@QEAA@XZ
    ContactActionControlItemBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionId@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetActionId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactData@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetContactData(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayData@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayData(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUIShellItem@@@Z
    virtual long GetItem(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceId@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetServiceId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitializeBase@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUIContact2@345@PEAUHSTRING__@@1111PEAUIShellItem@@PEAUIContactPreferenceManager@2345@@Z
    long RuntimeClassInitializeBase(::Windows::ApplicationModel::Contacts::IContact2*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, IShellItem *, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAUIShellItem@@@Z
    virtual long SetItem(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@QEAA@XZ
    ~ContactActionControlItemBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateActionItem@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@IEAAXPEAUHSTRING__@@@Z
    void _CreateActionItem(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteActionThroughActivationFramework@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@IEAAJPEAUIActivatedEventArgs@Activation@45@PEAUHSTRING__@@W4APPLICATION_VIEW_SIZE_PREFERENCE@@_KW4ActivationSource@2345@1PEAUHWND__@@1@Z
    long _ExecuteActionThroughActivationFramework(::Windows::ApplicationModel::Activation::IActivatedEventArgs *, HSTRING__*, int, uint64_t, int, HSTRING__*, HWND__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteActionThroughLaunch@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@IEAAJ_KW4ActivationSource@2345@PEAUHSTRING__@@PEAUHWND__@@@Z
    long _ExecuteActionThroughLaunch(uint64_t, int, HSTRING__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteActionThroughUriScheme@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@IEAAJPEBGW4APPLICATION_VIEW_SIZE_PREFERENCE@@_KW4ActivationSource@2345@PEAUHSTRING__@@PEAUHWND__@@@Z
    long _ExecuteActionThroughUriScheme(unsigned short const *, int, uint64_t, int, HSTRING__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyValue@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEBGPEAPEAUIInspectable@@@Z
    virtual long _GetPropertyValue(unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateContactPreference@ContactActionControlItemBase@Internal@Contacts@ApplicationModel@Windows@@IEAAXXZ
    void _UpdateContactPreference();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
