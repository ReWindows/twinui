#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class FullscreenEventListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullScreenVisibilityChanged@FullscreenEventListener@@UEAAJH@Z
    virtual long FullScreenVisibilityChanged(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FullscreenEventListener@@QEAA@XZ
    FullscreenEventListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRudeWindowStateChange@FullscreenEventListener@@UEAAJW4RudeWindowStateChangeFlags@@PEAUHWND__@@@Z
    virtual long OnRudeWindowStateChange(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@FullscreenEventListener@@QEAAJPEAUIImmersiveMonitor@@PEAVCompactOverlayManager@@@Z
    long RuntimeClassInitialize(IImmersiveMonitor *, CompactOverlayManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@FullscreenEventListener@@QEAAJXZ
    long Unregister();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FullscreenEventListener@@UEAA@XZ
    virtual ~FullscreenEventListener();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFullscreenStatus@FullscreenEventListener@@AEAAJXZ
    long UpdateFullscreenStatus();
};
