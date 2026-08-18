#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 26 member(s).
class CFileOpenPickerUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileOpenPickerUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileOpenPickerUI@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileOpenPickerUI(::Microsoft::WRL::WeakRef);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileOpenPickerUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileOpenPickerUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileOpenPickerUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileOpenPickerUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileOpenPickerUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileOpenPickerUI@@UEAA@XZ
    virtual ~CFileOpenPickerUI();
};
