#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CApplicationPreLaunchNotifications {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CApplicationPreLaunchNotifications@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CApplicationPreLaunchNotifications@@QEAA@XZ
    CApplicationPreLaunchNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CApplicationPreLaunchNotifications@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CApplicationPreLaunchNotifications@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CApplicationPreLaunchNotifications@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CApplicationPreLaunchNotifications@@UEAA@XZ
    virtual ~CApplicationPreLaunchNotifications();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertWin32PathToNtPath@CApplicationPreLaunchNotifications@@AEAAJPEBGKPEAG@Z
    long ConvertWin32PathToNtPath(unsigned short const *, unsigned long, unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDefaultApp@CApplicationPreLaunchNotifications@@AEAAXPEBG0_N@Z
    void NotifyDefaultApp(unsigned short const *, unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDefaultAppForPenClick@CApplicationPreLaunchNotifications@@AEAAJXZ
    long NotifyDefaultAppForPenClick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDefaultAppForProtocol@CApplicationPreLaunchNotifications@@AEAAJPEBG_N@Z
    long NotifyDefaultAppForProtocol(unsigned short const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyDefaultWin32ForProtocol@CApplicationPreLaunchNotifications@@AEAAJPEBG_N@Z
    long NotifyDefaultWin32ForProtocol(unsigned short const *, bool);
};
