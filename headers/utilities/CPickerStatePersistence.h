#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CPickerStatePersistence {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLastLocation@CPickerStatePersistence@@QEAAJPEAPEAUIShellItem@@@Z
    long GetLastLocation(IShellItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@CPickerStatePersistence@@QEAAJPEAU_GUID@@@Z
    long GetUniqueId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPickerStatePersistence@@QEAAJPEBUPICKER_CALLER_INFORMATION@@PEBG1@Z
    long Initialize(PICKER_CALLER_INFORMATION const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistLastLocation@CPickerStatePersistence@@QEAAJPEAUIShellItem@@@Z
    long PersistLastLocation(IShellItem *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerStatePersistence@@QEAA@XZ
    ~CPickerStatePersistence();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePersistenceKey@CPickerStatePersistence@@AEAAJKPEAPEAUHKEY__@@@Z
    long _CreatePersistenceKey(unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPersistenceKey@CPickerStatePersistence@@AEAAJKPEAPEAUHKEY__@@@Z
    long _GetPersistenceKey(unsigned long, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStateHandle@CPickerStatePersistence@@AEAAJPEAPEAX@Z
    long _GetStateHandle(void * *);
};
