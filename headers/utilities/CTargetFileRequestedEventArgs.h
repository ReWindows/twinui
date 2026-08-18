#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CTargetFileRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTargetFileRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTargetFileRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTargetFileRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTargetFileRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTargetFileRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTargetFileRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CTargetFileRequestedEventArgs@@UEAAJPEAPEAUITargetFileRequest@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_Request(::Windows::Storage::Pickers::Provider::ITargetFileRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTargetFileRequestedEventArgs@@UEAA@XZ
    virtual ~CTargetFileRequestedEventArgs();
};
