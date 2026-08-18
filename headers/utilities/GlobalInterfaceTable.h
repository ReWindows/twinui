#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
class GlobalInterfaceTable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Marshal@GlobalInterfaceTable@@SAJPEAUIUnknown@@AEBU_GUID@@PEAK@Z
    static long Marshal(IUnknown *, _GUID const &, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revoke@GlobalInterfaceTable@@SAXK@Z
    static void Revoke(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_Retrieve@GlobalInterfaceTable@@CAJXZ
    static long s_Retrieve();
};
