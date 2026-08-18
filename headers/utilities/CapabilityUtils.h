#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CapabilityUtils {
public:
    class CapabilityDisplayData;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForPackageInPrivilegedList@CapabilityUtils@@YAJPEBG0PEA_N@Z
    long CheckForPackageInPrivilegedList(unsigned short const *, unsigned short const *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrderedCapabilityDisplayList@CapabilityUtils@@YAJPEBGPEAU_SID_AND_ATTRIBUTES@@KPEAV?$CCoSimpleArray@PEAUCapabilityDisplayData@CapabilityUtils@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUCapabilityDisplayData@CapabilityUtils@@@@@@@Z
    long CreateOrderedCapabilityDisplayList(unsigned short const *, _SID_AND_ATTRIBUTES *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeviceInterfaceClassGuidFromCapabilitySid@CapabilityUtils@@YAJPEAXPEAPEAG@Z
    long DeviceInterfaceClassGuidFromCapabilitySid(void *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesClassHaveProperty@CapabilityUtils@@YAJPEBGKPEA_N@Z
    long DoesClassHaveProperty(unsigned short const *, unsigned long, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilityDisplayInfoForCapabilitySid@CapabilityUtils@@YAJPEAXPEAPEAU_CAPABILITY_DISPLAY_INFO@1@@Z
    long GetCapabilityDisplayInfoForCapabilitySid(void *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCustomDeviceClassFriendlyName@CapabilityUtils@@YAJPEBG0KPEAPEAG@Z
    long GetCustomDeviceClassFriendlyName(unsigned short const *, unsigned short const *, unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceObjectBooleanValue@CapabilityUtils@@YAJPEBGAEBU_DEVPROPKEY@@PEA_N@Z
    long GetDeviceObjectBooleanValue(unsigned short const *, _DEVPROPKEY const &, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownDeviceClassFriendlyName@CapabilityUtils@@YAJPEBGPEAPEAG@Z
    long GetKnownDeviceClassFriendlyName(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDeviceCapabilitySid@CapabilityUtils@@YAHPEAX@Z
    int IsDeviceCapabilitySid(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompareCapabilityDisplayInfo@CapabilityUtils@@YAHPEAXPEBX1@Z
    int _CompareCapabilityDisplayInfo(void *, void const *, void const *);
};
