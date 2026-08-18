#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace SingleViewExperienceTelemetry {
class OnClientWindowReadinessProcessed {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z
    void StartActivity(unsigned short const *, unsigned short const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXI@Z
    void Stop(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAA@XZ
    ~OnClientWindowReadinessProcessed();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SingleViewExperienceTelemetry
