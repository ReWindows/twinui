#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace Microsoft::WRL::Wrappers::Details {
class SyncLockExclusive {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~SyncLockExclusive();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ
    void InternalUnlock();
};
} // namespace Microsoft::WRL::Wrappers::Details
