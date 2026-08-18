#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CShellHookNotificationHolder {
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMask@CShellHookNotificationHolder@@EEBA_KXZ
    virtual uint64_t NotifyMask() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShellHookMessage@CShellHookNotificationHolder@@EEAAJ_K0_J@Z
    virtual long OnShellHookMessage(uint64_t, uint64_t, int64_t);
};
