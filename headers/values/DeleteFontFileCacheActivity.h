#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InputDial::InputDialTelemetry {
class DeleteFontFileCacheActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@DeleteFontFileCacheActivity@InputDialTelemetry@InputDial@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeleteFontFileCacheActivity@InputDialTelemetry@InputDial@@QEAA@XZ
    ~DeleteFontFileCacheActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@DeleteFontFileCacheActivity@InputDialTelemetry@InputDial@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@DeleteFontFileCacheActivity@InputDialTelemetry@InputDial@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InputDial::InputDialTelemetry
