#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace DataPersistence {
class CApplicationData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationFlags@CApplicationData@DataPersistence@@UEAAJPEAW4PERSISTED_APPLICATION_DATA_FLAGS@@@Z
    virtual long GetApplicationFlags(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@CApplicationData@DataPersistence@@UEAAJPEAPEAG@Z
    virtual long GetApplicationId(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationData@DataPersistence@@UEAA@XZ
    virtual ~CApplicationData();
};
} // namespace DataPersistence
