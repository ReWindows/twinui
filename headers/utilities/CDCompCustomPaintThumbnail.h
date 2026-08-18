#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CDCompCustomPaintThumbnail {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomPaint@CDCompCustomPaintThumbnail@@UEAAJP6AXPEAUHDC__@@AEBUtagSIZE@@_J@Z2@Z
    virtual long CustomPaint(void ( *)(HDC__*, tagSIZE const &, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomPaint@CDCompCustomPaintThumbnail@@UEAAJP6AXPEAUID2D1DeviceContext@@AEBUtagSIZE@@_J@Z2@Z
    virtual long CustomPaint(void ( *)(ID2D1DeviceContext *, tagSIZE const &, int64_t), int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CDCompCustomPaintThumbnail@@UEAAJXZ
    virtual long Freeze();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnable3D@CDCompCustomPaintThumbnail@@UEAAJ_N@Z
    virtual long SetEnable3D(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompCustomPaintThumbnail@@UEAA@XZ
    virtual ~CDCompCustomPaintThumbnail();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVisual@CDCompCustomPaintThumbnail@@AEAAJPEAUIDCompositionDesktopDevice@@AEBUtagSIZE@@_N@Z
    long _CreateVisual(IDCompositionDesktopDevice *, tagSIZE const &, bool);
};
