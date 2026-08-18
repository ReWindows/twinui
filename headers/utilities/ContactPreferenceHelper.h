#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactPreferenceHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHashOfControlItem@ContactPreferenceHelper@Internal@Contacts@ApplicationModel@Windows@@SAJPEAUIContactActionControlItem@2345@PEA_K@Z
    static long GetHashOfControlItem(::Windows::ApplicationModel::Contacts::Internal::IContactActionControlItem *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringHash@ContactPreferenceHelper@Internal@Contacts@ApplicationModel@Windows@@SA_KPEAUHSTRING__@@@Z
    static uint64_t GetStringHash(HSTRING__*);
};
} // namespace Windows::ApplicationModel::Contacts::Internal
