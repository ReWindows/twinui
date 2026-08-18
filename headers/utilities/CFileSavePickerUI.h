#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CFileSavePickerUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileSavePickerUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileSavePickerUI@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileSavePickerUI(::Microsoft::WRL::WeakRef);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileSavePickerUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileSavePickerUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileSavePickerUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileSavePickerUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSavePickerUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSavePickerUI@@UEAA@XZ
    virtual ~CFileSavePickerUI();
};
