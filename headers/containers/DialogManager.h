#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class DialogManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DialogManager@@QEAA@XZ
    DialogManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FixDialogOwnershipForWindow@DialogManager@@UEAAJPEAUHWND__@@@Z
    virtual long FixDialogOwnershipForWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApplicationBackgroundColor@DialogManager@@UEAAJPEBGPEAK@Z
    virtual long GetImmersiveApplicationBackgroundColor(unsigned short const *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrivilegedOperations@DialogManager@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long InitializePrivilegedOperations(_GUID const &, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundPrivileged@DialogManager@@UEAAJPEAUHWND__@@@Z
    virtual long SetForegroundPrivileged(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowOwner@DialogManager@@UEAAJPEAUHWND__@@0@Z
    virtual long SetWindowOwner(HWND__*, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@DialogManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DialogManager@@UEAA@XZ
    virtual ~DialogManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppFrameWindow@DialogManager@@AEAAJPEAUHWND__@@PEAPEAU2@@Z
    long _GetAppFrameWindow(HWND__*, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_FixDialogsForWindowEnumProc@DialogManager@@CAHPEAUHWND__@@_J@Z
    static int s_FixDialogsForWindowEnumProc(HWND__*, int64_t);
};
