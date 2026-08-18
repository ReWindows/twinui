#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class DevicesFlowExperienceFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@DevicesFlowExperienceFlow@@UEAAJXZ
    virtual long Execute();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceManager@DevicesFlowExperienceFlow@@AEAAJPEBGPEAPEAUIDeviceDiscoveryExperienceManager@Experience@Shell@Internal@Windows@@@Z
    long GetExperienceManager(unsigned short const *, ::Windows::Internal::Shell::Experience::IDeviceDiscoveryExperienceManager * *);
};
