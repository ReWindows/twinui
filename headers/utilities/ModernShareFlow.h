#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ModernShareTelemetry {
class ModernShareFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?PickerUIRendered@ModernShareFlow@ModernShareTelemetry@@QEAAXXZ
    void PickerUIRendered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreLinkActivated@ModernShareFlow@ModernShareTelemetry@@QEAAXXZ
    void StoreLinkActivated();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModernShareFlow@ModernShareTelemetry@@QEAA@XZ
    ~ModernShareFlow();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ModernShareFlow@ModernShareTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ModernShareFlow@ModernShareTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ModernShareTelemetry
