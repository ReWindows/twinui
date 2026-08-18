#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace DisplayTelemetry {
class TopologyChangeActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@TopologyChangeActivity@DisplayTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopologyChange@TopologyChangeActivity@DisplayTelemetry@@QEAAXJW4DISPLAY_TOPOLOGY@@0W4TOPOLOGY_CHANGE_SOURCE@@@Z
    void TopologyChange(long, int, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TopologyChangeActivity@DisplayTelemetry@@QEAA@XZ
    ~TopologyChangeActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@TopologyChangeActivity@DisplayTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@TopologyChangeActivity@DisplayTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace DisplayTelemetry
