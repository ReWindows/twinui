#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CCortanaExperienceFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@CCortanaExperienceFlow@@UEAAJXZ
    virtual long Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExperience@CCortanaExperienceFlow@@UEAAJPEBG@Z
    virtual long StartExperience(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleExperience@CCortanaExperienceFlow@@UEAAJPEBG@Z
    virtual long ToggleExperience(unsigned short const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceManager@CCortanaExperienceFlow@@AEAAJPEAPEAUIImmersiveLauncherCortana@@@Z
    long GetExperienceManager(IImmersiveLauncherCortana * *);
};
