#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class CallActionControlItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAction@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJ_K0W4ActivationSource@2345@PEAUHSTRING__@@@Z
    virtual long ExecuteAction(uint64_t, uint64_t, int, HSTRING__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CallActionControlItem@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
