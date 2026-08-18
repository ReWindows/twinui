#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class MsaWindowManagerImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppClosing@MsaWindowManagerImpl@@UEAAJPEAUIImmersiveApplication@@@Z
    virtual long AppClosing(IImmersiveApplication *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MsaWindowManagerImpl@@QEAA@XZ
    MsaWindowManagerImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@MsaWindowManagerImpl@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterBackgroundExecution@MsaWindowManagerImpl@@UEAAJXZ
    virtual long RegisterBackgroundExecution();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForAppClose@MsaWindowManagerImpl@@UEAAJPEAUIMsaWindowManagerAppCloseNotification@@PEAK@Z
    virtual long RegisterForAppClose(IMsaWindowManagerAppCloseNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MsaWindowManagerImpl@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@MsaWindowManagerImpl@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAppClose@MsaWindowManagerImpl@@UEAAJK@Z
    virtual long UnregisterAppClose(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@MsaWindowManagerImpl@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MsaWindowManagerImpl@@UEAA@XZ
    virtual ~MsaWindowManagerImpl();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallerPackageFullName@MsaWindowManagerImpl@@MEAAJPEAPEAG@Z
    virtual long GetCallerPackageFullName(unsigned short * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_NotifyAppClosingListeners@MsaWindowManagerImpl@@AEAAJXZ
    long _NotifyAppClosingListeners();
};
