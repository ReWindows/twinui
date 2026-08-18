#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CPickerClosingDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPickerClosingDeferral@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPickerClosingDeferral@@QEAA@PEAV?$CDeferrableRequest@UIPickerClosingDeferral@Provider@Pickers@Storage@Windows@@@@@Z
    CPickerClosingDeferral(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPickerClosingDeferral@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPickerClosingDeferral@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPickerClosingDeferral@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPickerClosingDeferral@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPickerClosingDeferral@@UEAAKXZ
    virtual unsigned long Release();
};
