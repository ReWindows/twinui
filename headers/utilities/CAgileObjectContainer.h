#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CAgileObjectContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AutoQueryInterface@CAgileObjectContainer@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long AutoQueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAgileObjectContainer@@QEAAKXZ
    unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAgileObjectContainer@@IEAA@PEAUIUnknown@@K@Z
    CAgileObjectContainer(IUnknown *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetCurrentApartmentId@CAgileObjectContainer@@KAJPEAK@Z
    static long s_GetCurrentApartmentId(unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAgileObjectContainer@@IEAA@XZ
    ~CAgileObjectContainer();
};
