#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CRefThread {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRefThread@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRefThread@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRefThread@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRefCountChangeEvent@CRefThread@@UEAAJPEAX@Z
    virtual long SetRefCountChangeEvent(void *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRefThread@@MEAA@XZ
    virtual ~CRefThread();
};
