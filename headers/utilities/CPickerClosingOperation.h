#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CPickerClosingOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPickerClosingOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPickerClosingOperation@@QEAA@PEAX@Z
    CPickerClosingOperation(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CPickerClosingOperation@@UEAAJPEAPEAUIPickerClosingDeferral@Provider@Pickers@Storage@Windows@@@Z
    virtual long GetDeferral(::Windows::Storage::Pickers::Provider::IPickerClosingDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPickerClosingOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPickerClosingOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPickerClosingOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPickerClosingOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPickerClosingOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Deadline@CPickerClosingOperation@@UEAAJPEAUDateTime@Foundation@Windows@@@Z
    virtual long get_Deadline(WindissectOpaque *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnCompleted@CPickerClosingOperation@@EEAAJXZ
    virtual long v_OnCompleted();
};
