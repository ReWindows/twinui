#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace Microsoft::WRL::Wrappers::Details {
class SyncLockCriticalSection {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~SyncLockCriticalSection();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ
    void InternalUnlock();
};
} // namespace Microsoft::WRL::Wrappers::Details
