#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 38 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactActionControlBase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@QEAA@XZ
    ContactActionControlBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetActionControlItems@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIContactActionControlItem@Internal@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@@Z
    virtual long GetActionControlItems(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetControlId@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetControlId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetDisplayName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlyph@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAG@Z
    virtual long GetGlyph(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUIContact2@345@PEAUIContactPreferenceManager@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAI@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, WindissectOpaque *, unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ContactActionControlBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyContactConnectedServiceAccounts@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@KAJPEAUIContact2@345@0@Z
    static long _CopyContactConnectedServiceAccounts(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyContactNameAndThumbnail@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@KAJPEAUIContact2@345@0@Z
    static long _CopyContactNameAndThumbnail(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyContactPhones@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@KAJPEAUIContact2@345@0@Z
    static long _CopyContactPhones(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::IContact2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemFromConnectedServiceAccount@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContactConnectedServiceAccount@345@W4ContactServiceActions@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAUIContactPreferenceManager@2345@PEAPEAUIContactActionControlItem@2345@@Z
    virtual long _CreateItemFromConnectedServiceAccount(::Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount *, int, WindissectOpaque *, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, ::Windows::ApplicationModel::Contacts::Internal::IContactActionControlItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemsFromConnectedServiceAccounts@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@IEAAJPEAUIContact2@345@W4ContactServiceActions@2345@PEAUIContactPreferenceManager@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z
    long _CreateItemsFromConnectedServiceAccounts(::Windows::ApplicationModel::Contacts::IContact2*, int, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetConnectedServiceAccountData@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@KAJPEAUIContactConnectedServiceAccount@345@W4ContactServiceActions@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAPEAUHSTRING__@@33@Z
    static long _GetConnectedServiceAccountData(::Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount *, int, WindissectOpaque *, HSTRING__* *, HSTRING__* *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyValue@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEBGPEAPEAUIInspectable@@@Z
    virtual long _GetPropertyValue(unsigned short const *, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReorderItems@ContactActionControlBase@Internal@Contacts@ApplicationModel@Windows@@AEAAJPEAUIContactPreferenceManager@2345@@Z
    long _ReorderItems(::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
