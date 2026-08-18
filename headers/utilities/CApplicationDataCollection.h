#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace DataPersistence {
class CApplicationDataCollection {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CApplicationDataCollection@DataPersistence@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CApplicationDataCollection@DataPersistence@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationDataCollection@DataPersistence@@UEAA@XZ
    virtual ~CApplicationDataCollection();
};
} // namespace DataPersistence
