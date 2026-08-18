#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class AppInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@AppInfo@@SAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAPEAV1@@Z
    static long Create(IUnknown *, IImmersiveMonitor *, AppInfo * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitContext@AppInfo@@AEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@@Z
    long _InitContext(IUnknown *, IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromHWND@AppInfo@@AEAAJXZ
    long _InitFromHWND();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitFromShellItem@AppInfo@@AEAAXXZ
    void _InitFromShellItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@AppInfo@@AEAAXPEAUIUnknown@@PEAUIImmersiveMonitor@@@Z
    void _Initialize(IUnknown *, IImmersiveMonitor *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppInfo@@AEAA@XZ
    ~AppInfo();
};
