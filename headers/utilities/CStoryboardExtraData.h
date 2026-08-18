#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
namespace CDCompAbstractThumbnail {
class CStoryboardExtraData {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationTelemetryGuid@CStoryboardExtraData@CDCompAbstractThumbnail@@UEAA?AU_GUID@@XZ
    virtual _GUID GetAnimationTelemetryGuid();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimationType@CStoryboardExtraData@CDCompAbstractThumbnail@@UEAA?AW4DCompThumbnailAnimation@@XZ
    virtual int GetAnimationType();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasAnimatedTransitions@CStoryboardExtraData@CDCompAbstractThumbnail@@UEAA_NXZ
    virtual bool HasAnimatedTransitions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHasAnimatedTransitions@CStoryboardExtraData@CDCompAbstractThumbnail@@UEAAXXZ
    virtual void SetHasAnimatedTransitions();
};
} // namespace CDCompAbstractThumbnail
