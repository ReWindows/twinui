#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class PenSignalManagerImpl {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFirstLaunch@PenSignalManagerImpl@@UEAAJPEAH@Z
    virtual long IsFirstLaunch(int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PenSignalManagerImpl@@QEAA@XZ
    PenSignalManagerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportPenAttached@PenSignalManagerImpl@@UEAAJXZ
    virtual long ReportPenAttached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportPenDetached@PenSignalManagerImpl@@UEAAJXZ
    virtual long ReportPenDetached();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenSignalManagerImpl@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenSignalManagerImpl@@UEAA@XZ
    virtual ~PenSignalManagerImpl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInkWorkspaceManager@PenSignalManagerImpl@@AEAAJXZ
    long EnsureInkWorkspaceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchFirstRunExperience@PenSignalManagerImpl@@AEAAJPEBG@Z
    long LaunchFirstRunExperience(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchUri@PenSignalManagerImpl@@AEAAJPEBG0@Z
    long LaunchUri(unsigned short const *, unsigned short const *);
};
