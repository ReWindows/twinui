#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace PenSignalManagerTelemetry {
class PenSignalManager_FREApp_Launched {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@PenSignalManager_FREApp_Launched@PenSignalManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenSignalManager_FREApp_Launched@PenSignalManagerTelemetry@@QEAA@XZ
    ~PenSignalManager_FREApp_Launched();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@PenSignalManager_FREApp_Launched@PenSignalManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@PenSignalManager_FREApp_Launched@PenSignalManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace PenSignalManagerTelemetry
