#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class DesktopStoreRemediationHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateExtensionFailed@DesktopStoreRemediationHandler@@UEAAJJPEBGPEAUIServiceProvider@@@Z
    virtual long ActivateExtensionFailed(long, unsigned short const *, IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToProcessPackageGraphFailed@DesktopStoreRemediationHandler@@UEAAJJPEBGPEAUIServiceProvider@@@Z
    virtual long AddToProcessPackageGraphFailed(long, unsigned short const *, IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoCreateInstanceFailed@DesktopStoreRemediationHandler@@UEAAJJAEBU_GUID@@PEAUIServiceProvider@@@Z
    virtual long CoCreateInstanceFailed(long, _GUID const &, IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateProcessFailed@DesktopStoreRemediationHandler@@UEAAJJPEBGPEAUIServiceProvider@@@Z
    virtual long CreateProcessFailed(long, unsigned short const *, IServiceProvider *);
};
