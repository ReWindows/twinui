#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CBacklightController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CBacklightController@@QEAAJP6AXPEAX@Z0@Z
    long Initialize(void ( *)(void *), void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBrightness@CBacklightController@@QEAAJE@Z
    long SetBrightness(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CBacklightController@@QEAAXXZ
    void Shutdown();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NotifyCallback@CBacklightController@@CAKPEAXK0@Z
    static unsigned long s_NotifyCallback(void *, unsigned long, void *);
};
