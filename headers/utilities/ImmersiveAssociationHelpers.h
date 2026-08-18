#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class ImmersiveAssociationHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppProgIdForProtocol@ImmersiveAssociationHelpers@@YAJPEBG0PEAPEAG@Z
    long GetAppProgIdForProtocol(unsigned short const *, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelIdAndExtensionId@ImmersiveAssociationHelpers@@YAJPEAUHSTRING__@@00PEAPEAU2@1@Z
    long GetAppUserModelIdAndExtensionId(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewPreference@ImmersiveAssociationHelpers@@YAJPEBG0PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@@Z
    long GetTargetViewPreference(unsigned short const *, unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProgIdValid@ImmersiveAssociationHelpers@@YA_NPEBG0@Z
    bool IsProgIdValid(unsigned short const *, unsigned short const *);
};
