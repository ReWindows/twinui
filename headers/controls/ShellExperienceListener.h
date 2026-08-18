#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class ShellExperienceListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShellExperienceListener@@QEAAJPEAUHSTRING__@@PEAV?$CRefCountedObject@VShellExperienceAppidRegistration@@@@UEventRegistrationToken@@PEAU?$ITypedEventHandler@PEAVShellExperienceDispatcher@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewStateChangedEventArgs@2345@@Foundation@Windows@@@Z
    long Initialize(HSTRING__*, WindissectOpaque *, EventRegistrationToken, WindissectOpaque *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellExperienceListener@@QEAA@$$QEAU0@@Z
    ShellExperienceListener(ShellExperienceListener &&);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellExperienceListener@@QEAA@XZ
    ~ShellExperienceListener();
};
