#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace SoftLandingTelemetry {
class ParseXML {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ParseXML@SoftLandingTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ParseXML@SoftLandingTelemetry@@QEAA@XZ
    ~ParseXML();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ParseXML@SoftLandingTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ParseXML@SoftLandingTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SoftLandingTelemetry
