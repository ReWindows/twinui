#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CAppItemPropertyStoreFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CAppItemPropertyStoreFactory@@UEAAJW4GETPROPERTYSTOREFLAGS@@PEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(int, IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStoreForKeys@CAppItemPropertyStoreFactory@@UEAAJPEBU_tagpropertykey@@IW4GETPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStoreForKeys(_tagpropertykey const *, unsigned int, int, _GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppItemPropertyStoreFactory@@UEAA@XZ
    virtual ~CAppItemPropertyStoreFactory();
};
