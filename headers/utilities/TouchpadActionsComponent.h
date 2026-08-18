#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class TouchpadActionsComponent {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@TouchpadActionsComponent@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@TouchpadActionsComponent@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@TouchpadActionsComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@TouchpadActionsComponent@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchpadActionsComponent@@UEAA@XZ
    virtual ~TouchpadActionsComponent();
};
