#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace Windows::ApplicationModel {
class Actions {
public:
    class CActionActivationInfoBase;
    class CActionArgs;
    class CActionArgsImpl;
    class CHostedFlyoutActivationInfoImpl;
    class CMainWindowActivationInfo;
    class CMainWindowActivationInfoImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionToProtocolMapping@Actions@ApplicationModel@Windows@@YAJPEBGPEAPEAG@Z
    long ActionToProtocolMapping(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtocolToActionMapping@Actions@ApplicationModel@Windows@@YAJPEBGPEAPEAG@Z
    long ProtocolToActionMapping(unsigned short const *, unsigned short * *);
};
} // namespace Windows::ApplicationModel
