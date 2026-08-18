#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactServiceDescription {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SupportedActions@ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4ContactServiceActions@2345@@Z
    virtual long get_SupportedActions(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContactServiceDescription@Internal@Contacts@ApplicationModel@Windows@@UEAA@XZ
    virtual ~ContactServiceDescription();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
