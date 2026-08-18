#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class PermissionsController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@PermissionsController@@SAJPEAVPermissionsUI@@PEAVAppInfo@@PEAPEAV1@@Z
    static long Create(PermissionsUI *, AppInfo *, PermissionsController * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PermissionsController@@IEAAJPEAVPermissionsUI@@PEAVAppInfo@@@Z
    long Initialize(PermissionsUI *, AppInfo *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PermissionsController@@MEAA@XZ
    virtual ~PermissionsController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BackgroundLoader@PermissionsController@@AEAAKXZ
    unsigned long _BackgroundLoader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadCapabilities@PermissionsController@@AEAAXPEAVPermissionsUI@@H@Z
    void _LoadCapabilities(PermissionsUI *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_BackgroundLoader@PermissionsController@@CAKPEAX@Z
    static unsigned long s_BackgroundLoader(void *);
};
