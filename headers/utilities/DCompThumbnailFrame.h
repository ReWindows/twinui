#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class DCompThumbnailFrame {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToVisual@DCompThumbnailFrame@@QEAAJPEAUIDCompositionDesktopDevice@@PEAUIDCompositionVisual@@@Z
    long AddToVisual(IDCompositionDesktopDevice *, IDCompositionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromVisual@DCompThumbnailFrame@@QEAAJPEAUIDCompositionVisual@@@Z
    long RemoveFromVisual(IDCompositionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColor@DCompThumbnailFrame@@QEAAXKM@Z
    void SetColor(unsigned long, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@DCompThumbnailFrame@@QEAAXUCSize@Geometry@@PEAUIUIAnimationVariable2@@@Z
    void SetSize(WindissectOpaque, IUIAnimationVariable2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThickness@DCompThumbnailFrame@@QEAAXH@Z
    void SetThickness(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCompThumbnailFrame@@QEAA@XZ
    ~DCompThumbnailFrame();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEdgeTransform@DCompThumbnailFrame@@AEAAJPEAUIDCompositionDesktopDevice@@PEAPEAUIDCompositionScaleTransform@@PEAPEAUIDCompositionTransform@@@Z
    long _CreateEdgeTransform(IDCompositionDesktopDevice *, IDCompositionScaleTransform * *, IDCompositionTransform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateEdgeVisual@DCompThumbnailFrame@@AEAAJPEAUIDCompositionDesktopDevice@@PEAUIDCompositionVisual2@@PEAUIDCompositionSurface@@PEAPEAU3@@Z
    long _CreateEdgeVisual(IDCompositionDesktopDevice *, IDCompositionVisual2*, IDCompositionSurface *, IDCompositionVisual2* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFrameVisuals@DCompThumbnailFrame@@AEAAJPEAUIDCompositionDesktopDevice@@@Z
    long _CreateFrameVisuals(IDCompositionDesktopDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DestroyFrameVisuals@DCompThumbnailFrame@@AEAAXXZ
    void _DestroyFrameVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionFrameVisuals@DCompThumbnailFrame@@AEAAXXZ
    void _PositionFrameVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionFrameVisualsAnimated@DCompThumbnailFrame@@AEAAXXZ
    void _PositionFrameVisualsAnimated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PositionFrameVisualsStatic@DCompThumbnailFrame@@AEAAXXZ
    void _PositionFrameVisualsStatic();
};
