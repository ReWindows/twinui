#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class TouchpadGestureComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@TouchpadGestureComponent@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TouchpadGestureComponent@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@TouchpadGestureComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@TouchpadGestureComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadGestureComponent@@UEAA@XZ
    virtual ~TouchpadGestureComponent();
};
