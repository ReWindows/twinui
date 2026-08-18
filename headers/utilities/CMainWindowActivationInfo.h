#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
namespace Windows::ApplicationModel::Actions {
class CMainWindowActivationInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@QEAA@XZ
    CMainWindowActivationInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMainWindowActivationInfo@Actions@ApplicationModel@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::ApplicationModel::Actions
