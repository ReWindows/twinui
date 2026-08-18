#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ShellExperienceDispatcherTelemetry {
class Invoke {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@Invoke@ShellExperienceDispatcherTelemetry@@QEAAXW4ViewEventType@ViewManagerInterop@Shell@Internal@Windows@@IPEBG@Z
    void StartActivity(int, unsigned int, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Invoke@ShellExperienceDispatcherTelemetry@@QEAA@XZ
    ~Invoke();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@Invoke@ShellExperienceDispatcherTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@Invoke@ShellExperienceDispatcherTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ShellExperienceDispatcherTelemetry
