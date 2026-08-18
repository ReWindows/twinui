#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class InputHostManagerTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    void InputHostHiding_(HWND__*, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@AEBUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    void InputHostShowing_(HWND__*, tagRECT const &, int, tagRECT const &, tagRECT const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPaneAppNotification_Hiding_Start_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@@Z
    void InputPaneAppNotification_Hiding_Start_(HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPaneAppNotification_Hiding_Stop_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@@Z
    void InputPaneAppNotification_Hiding_Stop_(HWND__*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPaneAppNotification_Showing_Start_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@AEBUtagRECT@@@Z
    void InputPaneAppNotification_Showing_Start_(HWND__*, tagRECT const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputPaneAppNotification_Showing_Stop_@InputHostManagerTelemetry@@QEBAXPEAUHWND__@@@Z
    void InputPaneAppNotification_Showing_Stop_(HWND__*) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@InputHostManagerTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
