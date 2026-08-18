#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class RemoteAppPrivilegedOperationBroker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyWindowAction@RemoteAppPrivilegedOperationBroker@@UEAAJPEAUHWND__@@U_WINDOW_ACTION@@@Z
    virtual long ApplyWindowAction(HWND__*, _WINDOW_ACTION);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableWindowShellWindowManagementBehavior@RemoteAppPrivilegedOperationBroker@@UEAAJPEAUHWND__@@KK@Z
    virtual long EnableWindowShellWindowManagementBehavior(HWND__*, unsigned long, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteAppPrivilegedOperationBroker@@QEAA@XZ
    RemoteAppPrivilegedOperationBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RemoteAppPrivilegedOperationBroker@@QEAAJPEAUIPrivilegedPresentationOperations@@PEAUIPrivilegedWindowingOperations@@PEAUIPrivilegedArrangementOperations@@@Z
    long RuntimeClassInitialize(IPrivilegedPresentationOperations *, IPrivilegedWindowingOperations *, IPrivilegedArrangementOperations *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowCloaked@RemoteAppPrivilegedOperationBroker@@UEAAJPEAUHWND__@@H@Z
    virtual long SetWindowCloaked(HWND__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowSnapArrangement@RemoteAppPrivilegedOperationBroker@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long SetWindowSnapArrangement(HWND__*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuppressWindowDisplayChange@RemoteAppPrivilegedOperationBroker@@UEAAJPEAUHWND__@@H@Z
    virtual long SuppressWindowDisplayChange(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayMonitorInfo@RemoteAppPrivilegedOperationBroker@@UEAAJXZ
    virtual long UpdateDisplayMonitorInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteAppPrivilegedOperationBroker@@UEAA@XZ
    virtual ~RemoteAppPrivilegedOperationBroker();
};
