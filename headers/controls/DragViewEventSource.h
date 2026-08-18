#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class DragViewEventSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@DragViewEventSource@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Cancel(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@DragViewEventSource@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragEnter(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@DragViewEventSource@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long DragLeave(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@DragViewEventSource@@UEAAJPEAUIDragDropArgsPriv@@PEAPEAUIDragUIOverridePriv@@@Z
    virtual long DragOver(IDragDropArgsPriv *, IDragUIOverridePriv * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DragViewEventSource@@QEAA@XZ
    DragViewEventSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@DragViewEventSource@@UEAAJPEAUIDragDropArgsPriv@@@Z
    virtual long Drop(IDragDropArgsPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@DragViewEventSource@@UEAAJPEAUIDragViewEventHandler@@@Z
    virtual long Initialize(IDragViewEventHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@DragViewEventSource@@UEAAJXZ
    virtual long Uninitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragViewEventSource@@UEAA@XZ
    virtual ~DragViewEventSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DropWorker@DragViewEventSource@@AEAAJPEAUIDragDropArgsPriv@@_N@Z
    long DropWorker(IDragDropArgsPriv *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationType@DragViewEventSource@@AEBA?AW4OperationType@1@PEAUIDragDropArgsPriv@@@Z
    int GetOperationType(IDragDropArgsPriv *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOperationId@DragViewEventSource@@AEBAJPEAUIDragDropArgsPriv@@PEAU_GUID@@@Z
    long _GetOperationId(IDragDropArgsPriv *, _GUID *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSourceAppId@DragViewEventSource@@AEBAJPEAUIDragDropArgsPriv@@PEAPEAG@Z
    long _GetSourceAppId(IDragDropArgsPriv *, unsigned short * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestDataForOperation@DragViewEventSource@@AEAAJPEAUIDragDropArgsPriv@@AEBU_GUID@@AEAUtagPOINT@@@Z
    long _RequestDataForOperation(IDragDropArgsPriv *, _GUID const &, tagPOINT &);
};
