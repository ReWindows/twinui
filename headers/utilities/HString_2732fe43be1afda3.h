#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
namespace Microsoft::WRL::Wrappers {
class HString {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HString@Wrappers@WRL@Microsoft@@QEAA@XZ
    HString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJPEBGI@Z
    long Set(unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z
    long Set(HSTRING__* const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ
    ~HString();
};
} // namespace Microsoft::WRL::Wrappers
