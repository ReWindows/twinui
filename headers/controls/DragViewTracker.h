#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class DragViewTracker {
public:
    class DragDropOperationInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginOperation@DragViewTracker@@UEAAJAEBU_GUID@@PEAUIImmersiveApplication@@@Z
    virtual long BeginOperation(_GUID const &, IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOperation@DragViewTracker@@UEAAJAEBU_GUID@@@Z
    virtual long CreateOperation(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationData@DragViewTracker@@UEAAJAEBU_GUID@@PEAPEAUIImmersiveApplication@@@Z
    virtual long GetOperationData(_GUID const &, IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationDropPoint@DragViewTracker@@UEAAJAEBU_GUID@@PEAUtagPOINT@@@Z
    virtual long GetOperationDropPoint(_GUID const &, tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOperationStates@DragViewTracker@@UEAAJAEBU_GUID@@PEAW4DRAG_VIEW_OPERATION_STATES@@@Z
    virtual long GetOperationStates(_GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasOperation@DragViewTracker@@UEAAJAEBU_GUID@@PEAH@Z
    virtual long HasOperation(_GUID const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ObliterateOperation@DragViewTracker@@UEAAJAEBU_GUID@@@Z
    virtual long ObliterateOperation(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOperationDropPoint@DragViewTracker@@UEAAJAEBU_GUID@@UtagPOINT@@@Z
    virtual long UpdateOperationDropPoint(_GUID const &, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOperationStates@DragViewTracker@@UEAAJAEBU_GUID@@W4DRAG_VIEW_OPERATION_STATES@@1@Z
    virtual long UpdateOperationStates(_GUID const &, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragViewTracker@@UEAA@XZ
    virtual ~DragViewTracker();
};
