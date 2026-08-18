#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
namespace Windows::Internal {
class Feedback {
public:
    class InternalFeedbackBroker;
    class InternalFeedbackItem;
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFeedbackLogCollectionCapability@Feedback@Internal@Windows@@YAJXZ
    long HasFeedbackLogCollectionCapability();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPackageQueryCapability@Feedback@Internal@Windows@@YAJXZ
    long HasPackageQueryCapability();
};
} // namespace Windows::Internal
