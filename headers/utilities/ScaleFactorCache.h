#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class ScaleFactorCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScaleFactorUpdate@ScaleFactorCache@@SAXXZ
    static void ScheduleScaleFactorUpdate();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveScaleFactors@ScaleFactorCache@@IEAAXXZ
    void SaveScaleFactors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactorForMonitor@ScaleFactorCache@@KAHPEAUHMONITOR__@@PEAUHDC__@@PEAUtagRECT@@_J@Z
    static int UpdateScaleFactorForMonitor(HMONITOR__*, HDC__*, tagRECT *, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactorTimerCallback@ScaleFactorCache@@KAXPEAXE@Z
    static void UpdateScaleFactorTimerCallback(void *, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScaleFactors@ScaleFactorCache@@IEAAXXZ
    void UpdateScaleFactors();
};
