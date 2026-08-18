#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CSettingsFlowController {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsFlowController@@QEAA@XZ
    CSettingsFlowController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualState@CSettingsFlowController@@UEAAJKPEAW4SETTINGS_FLOW_VISUAL_STATE@@@Z
    virtual long GetVisualState(unsigned long, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSettingsFlowController@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@W4SETTINGS_FLOW_INVOCATION_REASON@@PEAG@Z
    virtual long Show(IUnknown *, IImmersiveMonitor *, int, unsigned short *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureDUI@CSettingsFlowController@@AEAAJXZ
    long _EnsureDUI();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsFlowController@@EEAA@XZ
    virtual ~CSettingsFlowController();
};
