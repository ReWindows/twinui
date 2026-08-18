#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class ScaleFactorInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStaleScaleFactors@ScaleFactorInfo@@QEAAXXZ
    void RemoveStaleScaleFactors();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScaleFactorInfo@@QEAA@PEBG@Z
    ScaleFactorInfo(unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SqmScaleFactorChanged@ScaleFactorInfo@@KAXW4ContextOperation@1@I@Z
    static void SqmScaleFactorChanged(int, unsigned int);
};
