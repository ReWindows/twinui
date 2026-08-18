#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class StoreFrontHelperUtils {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppDisplayNameFromPackageFamilyName@StoreFrontHelperUtils@@YAJPEBGAEAVHString@Wrappers@WRL@Microsoft@@@Z
    long GetAppDisplayNameFromPackageFamilyName(unsigned short const *, ::Microsoft::WRL::Wrappers::HString &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeStringFromMinutes@StoreFrontHelperUtils@@YAJIAEAVHString@Wrappers@WRL@Microsoft@@@Z
    long GetTimeStringFromMinutes(unsigned int, ::Microsoft::WRL::Wrappers::HString &);
};
