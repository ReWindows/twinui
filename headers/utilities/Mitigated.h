#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace KeyboardOcclusionMitigationTelemetry {
class Mitigated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Mitigated@KeyboardOcclusionMitigationTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@Mitigated@KeyboardOcclusionMitigationTelemetry@@QEAAXUtagRECT@@0000PEBGW4IHM_DISPLAY_MODE@@_N33333@Z
    void Stop(tagRECT, tagRECT, tagRECT, tagRECT, tagRECT, unsigned short const *, int, bool, bool, bool, bool, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Mitigated@KeyboardOcclusionMitigationTelemetry@@QEAA@XZ
    ~Mitigated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Mitigated@KeyboardOcclusionMitigationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Mitigated@KeyboardOcclusionMitigationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace KeyboardOcclusionMitigationTelemetry
