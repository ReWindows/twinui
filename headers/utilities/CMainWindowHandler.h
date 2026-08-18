#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CMainWindowHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMainWindowHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMainWindowHandler@@QEAA@XZ
    CMainWindowHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CMainWindowHandler@@UEAAJPEAUHSTRING__@@0PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIActionActivationInfo@Actions@56@@Z
    virtual long Execute(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMainWindowHandler@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMainWindowHandler@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMainWindowHandler@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMainWindowHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMainWindowHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMainWindowHandler@@UEAA@XZ
    virtual ~CMainWindowHandler();
};
