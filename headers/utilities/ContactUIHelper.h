#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
namespace Windows::ApplicationModel::Contacts::Internal {
class ContactUIHelper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteActionOnContact@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAU?$IVectorView@PEAVContact@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1_K2@Z
    virtual long ExecuteActionOnContact(WindissectOpaque *, HSTRING__*, HSTRING__*, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteActionOnContactFromSource@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAU?$IVectorView@PEAVContact@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@PEAUHSTRING__@@1_K2W4ActivationSource@2345@@Z
    virtual long ExecuteActionOnContactFromSource(WindissectOpaque *, HSTRING__*, HSTRING__*, uint64_t, uint64_t, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContactDisplayInformation@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAU?$IVectorView@PEAVContact@Contacts@ApplicationModel@Windows@@@Collections@Foundation@5@PEAPEAU?$IVectorView@PEAUIContactDisplayInformation@Internal@Contacts@ApplicationModel@Windows@@@785@@Z
    virtual long GetContactDisplayInformation(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContactUIHelper@Internal@Contacts@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Contacts::Internal
