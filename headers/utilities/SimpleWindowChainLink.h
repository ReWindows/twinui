#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class SimpleWindowChainLink {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SimpleWindowChainLink@@QEAA@XZ
    SimpleWindowChainLink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Window@SimpleWindowChainLink@@UEAAJPEAI@Z
    virtual long get_Window(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetClassName@SimpleWindowChainLink@@MEBAPEBDXZ
    virtual char const * v_GetClassName() const;
};
