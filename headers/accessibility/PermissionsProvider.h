#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class PermissionsProvider {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PermissionsProvider@@SAJPEAUISettingsProvider@@PEAVAppInfo@@AEBU_GUID@@PEAPEAV1@@Z
    static long Create(ISettingsProvider *, AppInfo *, _GUID const &, PermissionsProvider * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@PermissionsProvider@@QEAAXXZ
    void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PermissionsProvider@@IEAAJPEAUISettingsProvider@@PEAVAppInfo@@AEBU_GUID@@@Z
    long Initialize(ISettingsProvider *, AppInfo *, _GUID const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PermissionsProvider@@IEAA@XZ
    ~PermissionsProvider();
};
