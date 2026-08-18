#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CDuiRefThread {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDuiRefThread@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepDuiInitializedForThread@CDuiRefThread@@UEAAJI@Z
    virtual long KeepDuiInitializedForThread(unsigned int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDuiRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDuiRefThread@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDuiRefThread@@MEAA@XZ
    virtual ~CDuiRefThread();
};
