#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace InkWorkspaceHostedAppsManagerTelemetry {
class GetThumbnailForInkWorkspaceActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetThumbnailForInkWorkspaceActivity@InkWorkspaceHostedAppsManagerTelemetry@@QEAAXPEBG@Z
    void StartActivity(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetThumbnailForInkWorkspaceActivity@InkWorkspaceHostedAppsManagerTelemetry@@QEAA@XZ
    ~GetThumbnailForInkWorkspaceActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetThumbnailForInkWorkspaceActivity@InkWorkspaceHostedAppsManagerTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetThumbnailForInkWorkspaceActivity@InkWorkspaceHostedAppsManagerTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace InkWorkspaceHostedAppsManagerTelemetry
