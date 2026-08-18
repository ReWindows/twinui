#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 49 member(s).
namespace Windows::Internal::Shell::AssignedAccess {
class AssignedAccessControllerProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAssignedAccessIfNeeded@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAW4AssignedAccessType@245@@Z
    virtual long ApplyAssignedAccessIfNeeded(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@QEAA@XZ
    AssignedAccessControllerProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoLaunchIfNeeded@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAE@Z
    virtual long AutoLaunchIfNeeded(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedAccessType@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAW4AssignedAccessType@245@@Z
    virtual long GetAssignedAccessType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfile@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAPEAUIAssignedAccessProfile@245@@Z
    virtual long GetProfile(::Windows::Internal::AssignedAccess::IAssignedAccessProfile * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrivilegedOperations@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long InitializePrivilegedOperations(_GUID const &, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@UEAA@XZ
    virtual ~AssignedAccessControllerProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowSetForegroundWindow@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJXZ
    long AllowSetForegroundWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAssignedAccess@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJPEAW4AssignedAccessType@245@@Z
    long ApplyAssignedAccess(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesAssignedAccessConfigExist@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJPEA_N@Z
    long DoesAssignedAccessConfigExist(bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesCachedProfileExist@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAA_NXZ
    bool DoesCachedProfileExist();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesTargetProfileExist@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJPEA_N@Z
    long DoesTargetProfileExist(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssignedAccessTypeFromController@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJPEAW4AssignedAccessType@245@@Z
    long GetAssignedAccessTypeFromController(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProfileFromController@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessProfile@245@@Z
    long GetProfileFromController(::Windows::Internal::AssignedAccess::IAssignedAccessProfile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForSwitchToDesktop@AssignedAccessControllerProxy@AssignedAccess@Shell@Internal@Windows@@AEAAJXZ
    long WaitForSwitchToDesktop();
};
} // namespace Windows::Internal::Shell::AssignedAccess
