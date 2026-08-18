#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class BadgeWindowUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBadgeOffsetForView@BadgeWindowUtils@@YAJPEAUIApplicationView@@AEBUBadgeWindowMetrics@@AEBUCRect@Geometry@@W4BadgeState@@W4BadgeExpansionType@@PEAI@Z
    long ComputeBadgeOffsetForView(IApplicationView *, BadgeWindowMetrics const &, WindissectOpaque const &, int, int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedEnterpriseId@BadgeWindowUtils@@YAJPEBGPEAPEAG@Z
    long GetFormattedEnterpriseId(unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNearestSupportedScaleFactor@BadgeWindowUtils@@YA?AW4DEVICE_SCALE_FACTOR@@W42@@Z
    int GetNearestSupportedScaleFactor(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewPosition@BadgeWindowUtils@@YAJPEAUIApplicationView@@PEAUWindowPosition@1@@Z
    long GetTargetViewPosition(IApplicationView *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapExpandedRectToCollapsedRect@BadgeWindowUtils@@YA?AUCRect@Geometry@@I_NW4BadgeExpansionType@@AEBUBadgeWindowMetrics@@AEBU23@@Z
    WindissectOpaque MapExpandedRectToCollapsedRect(unsigned int, bool, int, BadgeWindowMetrics const &, WindissectOpaque const &);
};
