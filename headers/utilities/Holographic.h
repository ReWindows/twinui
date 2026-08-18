#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace Windows::Internal::Shell {
class Holographic {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z
    long GetUserDisplayContext(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z
    long GetUserInputContext(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z
    long GetWindowDisplayContext(HWND__*, int, int *);
};
} // namespace Windows::Internal::Shell
