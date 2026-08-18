#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class ObjectWithSrwLock {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertLockNotHeld@ObjectWithSrwLock@@IEAAXXZ
    void AssertLockNotHeld();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@ObjectWithSrwLock@@IEAA?AVCAutoSRWExclusiveLock@@XZ
    CAutoSRWExclusiveLock LockExclusive();
};
