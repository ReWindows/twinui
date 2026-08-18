#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CDCompDesktopThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CDCompDesktopThumbnail@@UEAAJXZ
    virtual long Freeze();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceCvi@CDCompDesktopThumbnail@@UEAAJ_N@Z
    virtual long SetForceCvi(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompDesktopThumbnail@@UEAA@XZ
    virtual ~CDCompDesktopThumbnail();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVisual@CDCompDesktopThumbnail@@AEAAJPEAUIDCompositionDesktopDevice@@AEBUtagSIZE@@AEBUtagRECT@@@Z
    long _CreateVisual(IDCompositionDesktopDevice *, tagSIZE const &, tagRECT const &);
};
