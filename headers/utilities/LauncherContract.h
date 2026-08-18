#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class LauncherContract {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@LauncherContract@@UEAAXXZ
    virtual void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LauncherContract@@QEAA@XZ
    LauncherContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@LauncherContract@@QEAAJPEAUIShellTargetingContractManager@@PEAUIImmersiveMonitorManager@@@Z
    long RuntimeClassInitialize(IShellTargetingContractManager *, IImmersiveMonitorManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeBack@LauncherContract@@UEAAJXZ
    virtual long TryInvokeBack();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LauncherContract@@UEAA@XZ
    virtual ~LauncherContract();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContract@LauncherContract@@AEAAJXZ
    long RegisterContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContract@LauncherContract@@AEAAJXZ
    long UnregisterContract();
};
