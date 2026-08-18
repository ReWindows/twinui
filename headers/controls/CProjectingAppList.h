#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CProjectingAppList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@CProjectingAppList@@QEAAJPEAUIProjectionContext@@@Z
    long Add(IProjectionContext *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindProjectedViewOnMonitor@CProjectingAppList@@QEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z
    long FindProjectedViewOnMonitor(IImmersiveMonitor *, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAndRemove@CProjectingAppList@@QEAAJPEAUIImmersiveApplication@@PEAPEAU2@@Z
    long GetAndRemove(IImmersiveApplication *, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProjectionContext@CProjectingAppList@@QEAAJPEAUIImmersiveApplication@@PEAPEAUIProjectionContext@@@Z
    long GetProjectionContext(IImmersiveApplication *, IProjectionContext * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleClosingPresenterView@CProjectingAppList@@QEAAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationArrayService@@PEAPEAU2@@Z
    long HandleClosingPresenterView(IImmersiveApplication *, IImmersiveApplicationArrayService *, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPresenterView@CProjectingAppList@@QEAA_NPEAUIImmersiveApplication@@@Z
    bool IsPresenterView(IImmersiveApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProjectedView@CProjectingAppList@@QEAA_NPEAUIImmersiveApplication@@@Z
    bool IsProjectedView(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CProjectingAppList@@QEAAJPEAUIImmersiveApplication@@@Z
    long Remove(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRevertScreenMode@CProjectingAppList@@QEAA_NPEAUIImmersiveApplication@@@Z
    bool ShouldRevertScreenMode(IImmersiveApplication *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectingAppList@@QEAA@XZ
    ~CProjectingAppList();
};
