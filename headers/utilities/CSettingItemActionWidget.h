#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CSettingItemActionWidget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSettingItemActionWidget@@SAJPEAUHWND__@@IPEBGPEAPEAVCSettingsWidget@@@Z
    static long Create(HWND__*, unsigned int, unsigned short const *, CSettingsWidget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CSettingItemActionWidget@@UEAAXXZ
    virtual void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSettingItemActionWidget@@IEAAJPEAUHWND__@@IPEBG@Z
    long Initialize(HWND__*, unsigned int, unsigned short const *);
};
