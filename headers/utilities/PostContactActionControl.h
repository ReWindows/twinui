#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class PostContactActionControl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CopyMatchingContactConnectedServiceAccounts@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@KAJPEAUIContact2@345@0PEBG@Z
    static long _CopyMatchingContactConnectedServiceAccounts(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::IContact2*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemFromConnectedServiceAccount@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContactConnectedServiceAccount@345@W4ContactServiceActions@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAUIContactPreferenceManager@2345@PEAPEAUIContactActionControlItem@2345@@Z
    virtual long _CreateItemFromConnectedServiceAccount(::Windows::ApplicationModel::Contacts::IContactConnectedServiceAccount *, int, WindissectOpaque *, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, ::Windows::ApplicationModel::Contacts::Internal::IContactActionControlItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemsFromContactFields@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContact2@345@PEAUIContactPreferenceManager@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAI@Z
    virtual long _CreateItemsFromContactFields(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContractId@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAQEBGXZ
    virtual unsigned short const * const _GetContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetControlType@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAA?AW4ControlType@2345@XZ
    virtual int _GetControlType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeContactForAction@PostContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContact2@345@@Z
    virtual long _InitializeContactForAction(::Windows::ApplicationModel::Contacts::IContact2*);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
