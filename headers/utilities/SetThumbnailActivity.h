#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InkWorkspaceHostedAppsManagerTelemetry {
class SetThumbnailActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SetThumbnailActivity@InkWorkspaceHostedAppsManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SetThumbnailActivity@InkWorkspaceHostedAppsManagerTelemetry@@QEAA@XZ
    ~SetThumbnailActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SetThumbnailActivity@InkWorkspaceHostedAppsManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SetThumbnailActivity@InkWorkspaceHostedAppsManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InkWorkspaceHostedAppsManagerTelemetry
