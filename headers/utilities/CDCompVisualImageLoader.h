#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace ImageLoaders {
class CDCompVisualImageLoader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVisualFromBitmap@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1Bitmap1@@AEBUtagSIZE@@PEAPEAUIDCompositionVisual@@@Z
    long CreateVisualFromBitmap(ID2D1Bitmap1*, tagSIZE const &, IDCompositionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEAUID2D1DeviceContext@@PEAUIDCompositionDevice@@@Z
    long Initialize(ID2D1DeviceContext *, IDCompositionDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadBitmapByPath@CDCompVisualImageLoader@ImageLoaders@@QEAAJPEBGPEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z
    long LoadBitmapByPath(unsigned short const *, tagSIZE *, ID2D1Bitmap1* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompVisualImageLoader@ImageLoaders@@QEAA@XZ
    ~CDCompVisualImageLoader();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadBitmapHelper@CDCompVisualImageLoader@ImageLoaders@@AEAAJPEAUIWICBitmapDecoder@@PEAUtagSIZE@@PEAPEAUID2D1Bitmap1@@@Z
    long LoadBitmapHelper(IWICBitmapDecoder *, tagSIZE *, ID2D1Bitmap1* *);
};
} // namespace ImageLoaders
