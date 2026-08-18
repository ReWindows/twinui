#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class BackstackHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBackstackTimestampForApp@BackstackHelpers@@YAJPEAUIImmersiveApplication@@PEAU_FILETIME@@@Z
    long GetBackstackTimestampForApp(IImmersiveApplication *, _FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBackstackTimestampForApp@BackstackHelpers@@YA_NPEAUIImmersiveApplication@@PEBU_FILETIME@@@Z
    bool IsBackstackTimestampForApp(IImmersiveApplication *, _FILETIME const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBackstackTimestampForApp@BackstackHelpers@@YAJPEAUIImmersiveApplication@@AEBU_FILETIME@@@Z
    long SetBackstackTimestampForApp(IImmersiveApplication *, _FILETIME const &);
};
