#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CSettingsFlow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsFlow@@QEAA@XZ
    CSettingsFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CSettingsFlow@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSettingsFlow@@UEAAJPEAUIImmersiveMonitor@@KPEAG@Z
    virtual long Show(IImmersiveMonitor *, unsigned long, unsigned short *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeUIThread@CSettingsFlow@@IEAAJXZ
    long _InitializeUIThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopUIThread@CSettingsFlow@@IEAAXXZ
    void _StopUIThread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsFlow@@MEAA@XZ
    virtual ~CSettingsFlow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateControllerInUIThread@CSettingsFlow@@AEAAJXZ
    long _CreateControllerInUIThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunMessageLoop@CSettingsFlow@@CAJPEAX@Z
    static long s_RunMessageLoop(void *);
};
