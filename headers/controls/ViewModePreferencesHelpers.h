#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class ViewModePreferencesHelpers {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCompactOverlaySizeConstraints@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4CompactOverlaySizeConstraints@1@@Z
    long GetCompactOverlaySizeConstraints(WindissectOpaque *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeHintHeight@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAM@Z
    long GetSizeHintHeight(WindissectOpaque *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeHintWidth@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAM@Z
    long GetSizeHintWidth(WindissectOpaque *, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewMode@ViewModePreferencesHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4ApplicationViewMode@ViewManagement@UI@5@PEA_N@Z
    long GetTargetViewMode(WindissectOpaque *, int *, bool *);
};
