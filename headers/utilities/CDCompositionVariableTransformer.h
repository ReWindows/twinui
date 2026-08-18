#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CDCompositionVariableTransformer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCubic@CDCompositionVariableTransformer@@UEAAJNMMMM@Z
    virtual long AddCubic(double, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRepeat@CDCompositionVariableTransformer@@UEAAJNN@Z
    virtual long AddRepeat(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSinusoidal@CDCompositionVariableTransformer@@UEAAJNMMMM@Z
    virtual long AddSinusoidal(double, float, float, float, float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDCompositionVariableTransformer@@QEAA@PEAUIDCompositionAnimation@@MM@Z
    CDCompositionVariableTransformer(IDCompositionAnimation *, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CDCompositionVariableTransformer@@UEAAJNM@Z
    virtual long End(double, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CDCompositionVariableTransformer@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAbsoluteBeginTime@CDCompositionVariableTransformer@@UEAAJT_LARGE_INTEGER@@@Z
    virtual long SetAbsoluteBeginTime(_LARGE_INTEGER);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompositionVariableTransformer@@UEAA@XZ
    virtual ~CDCompositionVariableTransformer();
};
