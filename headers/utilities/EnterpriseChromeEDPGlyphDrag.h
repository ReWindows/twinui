#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
namespace EnterpriseChrome::EnterpriseChromeTelemetry {
class EnterpriseChromeEDPGlyphDrag {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@QEAAXW4BadgeState@@W4InputMode@23@@Z
    void StartActivity(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@QEAA?AV123@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@QEAA?AV123@XZ
    WindissectOpaque TransferToMember();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@QEAA@XZ
    ~EnterpriseChromeEDPGlyphDrag();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EnterpriseChromeEDPGlyphDrag@EnterpriseChromeTelemetry@EnterpriseChrome@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace EnterpriseChrome::EnterpriseChromeTelemetry
