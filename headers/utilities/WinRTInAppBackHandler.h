#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class WinRTInAppBackHandler {
public:
    class AsyncCallResult;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InAppBackResult@WinRTInAppBackHandler@@UEAAJPEAUIApplicationView@@W4InAppBackResponse@@@Z
    virtual long InAppBackResult(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@WinRTInAppBackHandler@@QEAAJPEAUIApplicationView@@PEAUIInAppBackHandlerNotifications@@@Z
    long RuntimeClassInitialize(IApplicationView *, IInAppBackHandlerNotifications *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_TryBack@WinRTInAppBackHandler@@SAJPEAVAsyncCallResult@1@PEAUIApplicationView@@@Z
    static long s_TryBack(WindissectOpaque *, IApplicationView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WinRTInAppBackHandler@@UEAA@XZ
    virtual ~WinRTInAppBackHandler();
};
