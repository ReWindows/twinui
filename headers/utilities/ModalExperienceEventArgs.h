#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class ModalExperienceEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModalExperienceEventArgs@@QEAA@XZ
    ModalExperienceEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceID@ModalExperienceEventArgs@@UEAAJPEAUEventRegistrationToken@@@Z
    virtual long get_ExperienceID(EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExperienceOwnerWindowId@ModalExperienceEventArgs@@UEAAJPEAI@Z
    virtual long get_ExperienceOwnerWindowId(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@ModalExperienceEventArgs@@UEAAJPEAW4ModalExperienceViewState@ModalExperience@Shell@Internal@Windows@@@Z
    virtual long get_State(int *);
};
