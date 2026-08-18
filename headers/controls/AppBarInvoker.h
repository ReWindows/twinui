#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class AppBarInvoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AppBarInvoker@@QEAA@XZ
    AppBarInvoker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelSwipe@AppBarInvoker@@UEAAJXZ
    virtual long CancelSwipe();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitSwipe@AppBarInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long CommitSwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContinueSwipe@AppBarInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long ContinueSwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeForApp@AppBarInvoker@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long InvokeForApp(IImmersiveApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSite@AppBarInvoker@@UEAAJPEAUIUnknown@@@Z
    virtual long SetSite(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExtendedSwipe@AppBarInvoker@@UEAAJUtagPOINT@@I0@Z
    virtual long StartExtendedSwipe(tagPOINT, unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSwipe@AppBarInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long StartSwipe(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchEdgeGripperDismissed@AppBarInvoker@@UEAAJXZ
    virtual long TouchEdgeGripperDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchEdgeGripperPressed@AppBarInvoker@@UEAAJIUtagPOINT@@@Z
    virtual long TouchEdgeGripperPressed(unsigned int, tagPOINT);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AppBarInvoker@@UEAA@XZ
    virtual ~AppBarInvoker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissAllLightDismiss@AppBarInvoker@@AEAAXXZ
    void DismissAllLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireEvent@AppBarInvoker@@AEAAJW4EdgeGestureEventToTrigger@@W4EDGEGESTURE_INVOCATION_KIND@@@Z
    long FireEvent(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeScheduler@AppBarInvoker@@AEAAJXZ
    long InitializeScheduler();
};
