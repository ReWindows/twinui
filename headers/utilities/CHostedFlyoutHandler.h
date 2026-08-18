#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CHostedFlyoutHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHostedFlyoutHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostedFlyoutHandler@@QEAA@XZ
    CHostedFlyoutHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CHostedFlyoutHandler@@UEAAJPEAUHSTRING__@@0PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIActionActivationInfo@Actions@56@@Z
    virtual long Execute(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHostedFlyoutHandler@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHostedFlyoutHandler@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHostedFlyoutHandler@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HostedFlowCompleted@CHostedFlyoutHandler@@UEAAJK@Z
    virtual long HostedFlowCompleted(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHostedFlyoutHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHostedFlyoutHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedFlyoutHandler@@UEAA@XZ
    virtual ~CHostedFlyoutHandler();
};
