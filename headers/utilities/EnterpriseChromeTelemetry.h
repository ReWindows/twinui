#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace EnterpriseChrome {
class EnterpriseChromeTelemetry {
public:
    class EnterpriseChromeEDPGlyphDrag;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterpriseChromeEDPGlyphStateChange_@EnterpriseChromeTelemetry@EnterpriseChrome@@QEBAXW4BadgeState@@_N@Z
    void EnterpriseChromeEDPGlyphStateChange_(int, bool) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabled@EnterpriseChromeTelemetry@EnterpriseChrome@@SA_NE_K@Z
    static bool IsEnabled(unsigned char, uint64_t);
};
} // namespace EnterpriseChrome
