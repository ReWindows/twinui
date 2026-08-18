#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CCommandItemWidget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCommand@CCommandItemWidget@@SAJPEAUHWND__@@IPEBGPEAPEAVCSettingsWidget@@@Z
    static long CreateCommand(HWND__*, unsigned int, unsigned short const *, CSettingsWidget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CCommandItemWidget@@UEAAXXZ
    virtual void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCommandItemWidget@@IEAAJPEAUHWND__@@IPEBG@Z
    long Initialize(HWND__*, unsigned int, unsigned short const *);
};
