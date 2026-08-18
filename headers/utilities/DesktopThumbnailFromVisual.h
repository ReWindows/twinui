#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class DesktopThumbnailFromVisual {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@DesktopThumbnailFromVisual@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@DesktopThumbnailFromVisual@@QEAAJAEBUtagSIZE@@PEAUIDCompThumbnailParent@@PEAUIDCompositionVisual@@PEAUISwitchThumbnailDeviceManager@@PEAUISwitchThumbnailFactory@@@Z
    long RuntimeClassInitialize(tagSIZE const &, IDCompThumbnailParent *, IDCompositionVisual *, ISwitchThumbnailDeviceManager *, ISwitchThumbnailFactory *);
};
