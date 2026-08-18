#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CAgileEnumerableObjectCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFromArray@CAgileEnumerableObjectCollection@@UEAAJPEAUIObjectArray@@@Z
    virtual long AddFromArray(IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddObject@CAgileEnumerableObjectCollection@@UEAAJPEAUIUnknown@@@Z
    virtual long AddObject(IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAgileEnumerableObjectCollection@@QEAA@XZ
    CAgileEnumerableObjectCollection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CAgileEnumerableObjectCollection@@UEAAJXZ
    virtual long Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CAgileEnumerableObjectCollection@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CAgileEnumerableObjectCollection@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveObjectAt@CAgileEnumerableObjectCollection@@UEAAJI@Z
    virtual long RemoveObjectAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAgileEnumerableObjectCollection@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAgileEnumerableObjectCollection@@UEAA@XZ
    virtual ~CAgileEnumerableObjectCollection();
};
