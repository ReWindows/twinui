#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class KeyboardOcclusionMitigationTelemetry {
public:
    class Mitigated;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding_@KeyboardOcclusionMitigationTelemetry@@QEBAXPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    void InputHostHiding_(HWND__*, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing_@KeyboardOcclusionMitigationTelemetry@@QEBAXPEAUHWND__@@AEBUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    void InputHostShowing_(HWND__*, tagRECT const &, int, tagRECT const &, tagRECT const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@KeyboardOcclusionMitigationTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreAllWindows_Start@KeyboardOcclusionMitigationTelemetry@@SAXXZ
    static void RestoreAllWindows_Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestorePreviousWindowState_Start_@KeyboardOcclusionMitigationTelemetry@@QEBAXPEAUHWND__@@@Z
    void RestorePreviousWindowState_Start_(HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestorePreviousWindowState_Stop_@KeyboardOcclusionMitigationTelemetry@@QEBAXPEAUHWND__@@_N@Z
    void RestorePreviousWindowState_Stop_(HWND__*, bool) const;
};
