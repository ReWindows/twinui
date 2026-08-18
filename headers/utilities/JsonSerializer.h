#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class JsonSerializer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@JsonSerializer@Internal@Contacts@ApplicationModel@Windows@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNumberValue@JsonSerializer@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@N@Z
    long SetNumberValue(HSTRING__*, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStringValue@JsonSerializer@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAUHSTRING__@@0@Z
    long SetStringValue(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stringify@JsonSerializer@Internal@Contacts@ApplicationModel@Windows@@QEAAJPEAPEAUHSTRING__@@@Z
    long Stringify(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JsonSerializer@Internal@Contacts@ApplicationModel@Windows@@QEAA@XZ
    ~JsonSerializer();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
