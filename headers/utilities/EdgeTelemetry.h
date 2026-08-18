#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class EdgeTelemetry {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeUiAutoHideImmuneWorkAreaUnavailable_@EdgeTelemetry@@QEBAXXZ
    void EdgeUiAutoHideImmuneWorkAreaUnavailable_() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeUiInvokeTaskbar_@EdgeTelemetry@@QEBAXI@Z
    void EdgeUiInvokeTaskbar_(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeUiInvokeTitleBar_@EdgeTelemetry@@QEBAXI@Z
    void EdgeUiInvokeTitleBar_(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeUiInvoked_@EdgeTelemetry@@QEBAXII@Z
    void EdgeUiInvoked_(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EdgeUiTouchInvoked_@EdgeTelemetry@@QEBAXI@Z
    void EdgeUiTouchInvoked_(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@EdgeTelemetry@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
