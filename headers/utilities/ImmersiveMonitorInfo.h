#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class ImmersiveMonitorInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareMonitorInfo@ImmersiveMonitorInfo@@QEAA?AW4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@PEAU1@@Z
    int CompareMonitorInfo(ImmersiveMonitorInfo *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ImmersiveMonitorInfo@@QEAA@PEBGK_NQEBUtagRECT@@K1W4IMMERSIVE_MONITOR_FILTER_FLAGS@@@Z
    ImmersiveMonitorInfo(unsigned short const *, unsigned long, bool, tagRECT const * const, unsigned long, bool, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ImmersiveMonitorInfo@@QEAA@XZ
    ~ImmersiveMonitorInfo();
};
