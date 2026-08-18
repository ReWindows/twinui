#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactPreferenceManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastUsedItemIndex@ContactPreferenceManager@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAU?$IVectorView@PEAUIContactActionControlItem@Internal@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@PEAI@Z
    virtual long GetLastUsedItemIndex(HSTRING__*, WindissectOpaque *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContactPreferenceManager@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUIContactsListManager@2345@PEAUHKEY__@@PEAUHSTRING__@@@Z
    long RuntimeClassInitialize(::Windows::ApplicationModel::Contacts::Internal::IContactsListManager *, HKEY__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastUsedItem@ContactPreferenceManager@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAUHSTRING__@@PEAUIContactActionControlItem@2345@@Z
    virtual long UpdateLastUsedItem(HSTRING__*, ::Windows::ApplicationModel::Contacts::Internal::IContactActionControlItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactPreferenceManager@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ContactPreferenceManager();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
