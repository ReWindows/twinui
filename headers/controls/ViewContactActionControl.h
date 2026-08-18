#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ViewContactActionControl {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateItemsFromContactFields@ViewContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContact2@345@PEAUIContactPreferenceManager@2345@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@PEAI@Z
    virtual long _CreateItemsFromContactFields(::Windows::ApplicationModel::Contacts::IContact2*, ::Windows::ApplicationModel::Contacts::Internal::IContactPreferenceManager *, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContractId@ViewContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAQEBGXZ
    virtual unsigned short const * const _GetContractId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetControlType@ViewContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAA?AW4ControlType@2345@XZ
    virtual int _GetControlType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeContactForAction@ViewContactActionControl@Internal@Contacts@ApplicationModel@Windows@@MEAAJPEAUIContact2@345@@Z
    virtual long _InitializeContactForAction(::Windows::ApplicationModel::Contacts::IContact2*);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
