#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CBackstackManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CBackstackManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackstackManager@@QEAA@XZ
    CBackstackManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearBackstack@CBackstackManager@@UEAAJXZ
    virtual long ClearBackstack();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackstack@CBackstackManager@@UEAAJPEAPEAUIObjectArray@@H@Z
    virtual long GetBackstack(IObjectArray * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppAddedToSwitchers@CBackstackManager@@UEAAJPEAUIImmersiveApplication@@W4APP_SWITCHER_FLAGS@@@Z
    virtual long OnAppAddedToSwitchers(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppRemovedFromSwitchers@CBackstackManager@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z
    virtual long OnAppRemovedFromSwitchers(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CBackstackManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveApp@CBackstackManager@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long RemoveApp(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAppForSystemAction@CBackstackManager@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long RemoveAppForSystemAction(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CBackstackManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CBackstackManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CBackstackManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CBackstackManager@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupAppStateOnRemoval@CBackstackManager@@AEAAXPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@_N@Z
    void _CleanupAppStateOnRemoval(IImmersiveApplication *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetImmersiveAppArray@CBackstackManager@@AEAAJPEAPEAUIImmersiveApplicationArray@@@Z
    long _GetImmersiveAppArray(IImmersiveApplicationArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveApp@CBackstackManager@@AEAAJPEAUIImmersiveApplication@@_NW4SWITCHER_REMOVAL_REASON@@@Z
    long _RemoveApp(IImmersiveApplication *, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateAppTimestamp@CBackstackManager@@AEAAJPEAUIImmersiveApplication@@_N@Z
    long _UpdateAppTimestamp(IImmersiveApplication *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackstackManager@@EEAA@XZ
    virtual ~CBackstackManager();
};
