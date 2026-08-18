#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class ShellDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@ShellDropTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Cancel(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@ShellDropTarget@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragEnter(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@ShellDropTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long DragLeave(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@ShellDropTarget@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragOver(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@ShellDropTarget@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Drop(IDragDropArgsPriv *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragViewTracker@ShellDropTarget@@UEAAJPEAPEAUIDragViewTracker@@@Z
    virtual long GetDragViewTracker(IDragViewTracker * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReentrancyModel@ShellDropTarget@@UEAAJPEAW4DROPTARGETREENTRANCYMODEL@@PEAI@Z
    virtual long GetReentrancyModel(int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShellDropTarget@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellDropTarget@@QEAA@XZ
    ShellDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@ShellDropTarget@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@ShellDropTarget@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellDropTarget@@UEAA@XZ
    virtual ~ShellDropTarget();
};
