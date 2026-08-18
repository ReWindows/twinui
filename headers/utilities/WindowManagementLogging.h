#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class WindowManagementLogging {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@WindowManagementLogging@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@WindowManagementLogging@@KAPEAV1@XZ
    static WindowManagementLogging * Instance();
};
