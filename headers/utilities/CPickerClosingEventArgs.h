#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CPickerClosingEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPickerClosingEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CPickerClosingEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CPickerClosingEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CPickerClosingEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPickerClosingEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPickerClosingEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ClosingOperation@CPickerClosingEventArgs@@UEAAJPEAPEAUIPickerClosingOperation@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_ClosingOperation(::Windows::Storage::Pickers::Provider::IPickerClosingOperation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@CPickerClosingEventArgs@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerClosingEventArgs@@UEAA@XZ
    virtual ~CPickerClosingEventArgs();
};
