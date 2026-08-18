#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace Windows::Internal::Shell::Chaining {
class ChainLinkEventArgs {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@QEAA@W4ChainLinkEventType@1234@@Z
    ChainLinkEventArgs(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EventType@ChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAJPEAW4ChainLinkEventType@2345@@Z
    virtual long get_EventType(int *);
};
} // namespace Windows::Internal::Shell::Chaining
