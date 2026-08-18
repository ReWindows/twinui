#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CSolidColorThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CSolidColorThumbnail@@UEAAJXZ
    virtual long Freeze();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSolidColorThumbnail@@QEAAJKAEBUtagSIZE@@PEAUIDCompThumbnailParent@@PEAUISwitchThumbnailDeviceManager@@PEAUISwitchThumbnailFactory@@@Z
    long RuntimeClassInitialize(unsigned long, tagSIZE const &, IDCompThumbnailParent *, ISwitchThumbnailDeviceManager *, ISwitchThumbnailFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnable3D@CSolidColorThumbnail@@UEAAJ_N@Z
    virtual long SetEnable3D(bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVisual@CSolidColorThumbnail@@AEAAJKAEBUtagSIZE@@@Z
    long _CreateVisual(unsigned long, tagSIZE const &);
};
