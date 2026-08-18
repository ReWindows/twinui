#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CATUtils {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopOOBERunning@CATUtils@@SA_NXZ
    static bool IsDesktopOOBERunning();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDesktopOOBEUserSessionActive@CATUtils@@SA_NXZ
    static bool IsDesktopOOBEUserSessionActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractiveUser@CATUtils@@SAHXZ
    static int IsInteractiveUser();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMachineOOBERunning@CATUtils@@SA_NXZ
    static bool IsMachineOOBERunning();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessInATJob@CATUtils@@SAHPEAX@Z
    static int IsProcessInATJob(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SessionKeyString@CATUtils@@SA?AV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@XZ
    static WindissectOpaque SessionKeyString();
};
