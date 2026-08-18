#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CSearchServicesProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesClientImplementContract@CSearchServicesProvider@@UEAAJXZ
    virtual long DoesClientImplementContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSearchServices@CSearchServicesProvider@@UEAAJXZ
    virtual long EnsureSearchServices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSearchPaneInitialized@CSearchServicesProvider@@UEAAJXZ
    virtual long IsSearchPaneInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchServicesProvider@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CSearchServicesProvider@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchServicesProvider@@UEAA@XZ
    virtual ~CSearchServicesProvider();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_QueryService@CSearchServicesProvider@@MEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long v_QueryService(_GUID const &, _GUID const &, void * *);
};
