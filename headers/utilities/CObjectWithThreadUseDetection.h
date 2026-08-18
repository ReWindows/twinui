#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CObjectWithThreadUseDetection {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z
    CObjectWithThreadUseDetection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ
    long InitApartmentId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectWithThreadUseDetection@@QEAA@XZ
    ~CObjectWithThreadUseDetection();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z
    long TryEnterOnCurrentThread(int);
};
