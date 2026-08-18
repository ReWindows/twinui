#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Windows::Internal {
class DeviceCapabilitiesW {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCapabilityPresent@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z
    bool IsCapabilityPresent(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenPresentMatchingSizeCondition@DeviceCapabilitiesW@Internal@Windows@@YA_NMW4tagCONDITION_OPERATION@@@Z
    bool IsScreenPresentMatchingSizeCondition(float, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScreenSizeRequirementMet@DeviceCapabilitiesW@Internal@Windows@@YA_NW4Capability@123@@Z
    bool IsScreenSizeRequirementMet(int);
};
} // namespace Windows::Internal
