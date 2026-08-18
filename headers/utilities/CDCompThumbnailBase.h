#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class CDCompThumbnailBase {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@CDCompThumbnailBase@@MEAAJPEAUIDCompThumbnailChild@@_N0@Z
    virtual long AddVisual(IDCompThumbnailChild *, bool, IDCompThumbnailChild *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisual@CDCompThumbnailBase@@MEAAJPEAUIDCompThumbnailChild@@@Z
    virtual long RemoveVisual(IDCompThumbnailChild *);
};
