#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class RadialControllerMenuItemInvokedArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@RadialControllerMenuItemInvokedArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@RadialControllerMenuItemInvokedArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RadialControllerMenuItemInvokedArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@RadialControllerMenuItemInvokedArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@RadialControllerMenuItemInvokedArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@RadialControllerMenuItemInvokedArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemId@RadialControllerMenuItemInvokedArgs@@UEAAJPEAI@Z
    virtual long get_ItemId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ItemId@RadialControllerMenuItemInvokedArgs@@UEAAJI@Z
    virtual long put_ItemId(unsigned int);
};
