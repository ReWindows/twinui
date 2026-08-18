#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class HostedApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@HostedApplication@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHostId@HostedApplication@@UEAAJPEA_K@Z
    virtual long GetHostId(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewInstanceId@HostedApplication@@UEAAJPEAK@Z
    virtual long GetViewInstanceId(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowId@HostedApplication@@UEAAJPEAK@Z
    virtual long GetWindowId(unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HostedApplication@@QEAA@XZ
    HostedApplication();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyBridgeWindow@HostedApplication@@UEAAJK@Z
    virtual long NotifyBridgeWindow(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@HostedApplication@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPrivilegedWindowOwnershipOperations@@@Z
    long RuntimeClassInitialize(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, IPrivilegedWindowOwnershipOperations *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentWindow@HostedApplication@@UEAAJPEAUHWND__@@@Z
    virtual long SetParentWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@HostedApplication@@UEAAJPEBUtagRECT@@@Z
    virtual long SetPosition(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisible@HostedApplication@@UEAAJH@Z
    virtual long SetVisible(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOwner@HostedApplication@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindowOwner(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostedApplication@@UEAA@XZ
    virtual ~HostedApplication();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentViewWindow@HostedApplication@@AEAAJPEAPEAUHWND__@@@Z
    long GetCurrentViewWindow(HWND__* *);
};
