#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CDCompWindowThumbnail {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDCompWindowThumbnail@@QEAA@XZ
    CDCompWindowThumbnail();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Freeze@CDCompWindowThumbnail@@UEAAJXZ
    virtual long Freeze();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHThumbnail@CDCompWindowThumbnail@@UEAAPEAXXZ
    virtual void * GetHThumbnail();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDCompWindowThumbnail@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceWindow@CDCompWindowThumbnail@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetSourceWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MatchesHThumbnail@CDCompWindowThumbnail@@UEAAHPEAX@Z
    virtual int MatchesHThumbnail(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDCompWindowThumbnail@@QEAAJUDCompWindowThumbnailInfo@@PEBUtagSIZE@@PEAUtagRECT@@PEAUIDCompThumbnailParent@@PEAUISwitchThumbnailDeviceManager@@PEAUISwitchThumbnailFactory@@@Z
    long RuntimeClassInitialize(DCompWindowThumbnailInfo, tagSIZE const *, tagRECT *, IDCompThumbnailParent *, ISwitchThumbnailDeviceManager *, ISwitchThumbnailFactory *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnable3D@CDCompWindowThumbnail@@UEAAJ_N@Z
    virtual long SetEnable3D(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceCvi@CDCompWindowThumbnail@@UEAAJ_N@Z
    virtual long SetForceCvi(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceSizeChanged@CDCompWindowThumbnail@@UEAAJPEAXAEBUtagSIZE@@AEBUtagRECT@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z
    virtual long SourceSizeChanged(void *, tagSIZE const &, tagRECT const &, int, IUIAnimationStoryboardEventHandler2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowChanged@CDCompWindowThumbnail@@UEAAJPEAUHWND__@@PEAUtagSIZE@@PEAUtagRECT@@@Z
    virtual long WindowChanged(HWND__*, tagSIZE *, tagRECT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompWindowThumbnail@@UEAA@XZ
    virtual ~CDCompWindowThumbnail();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetInterpolationMode@CDCompWindowThumbnail@@MEAAJW4DCompThumbnailInterpolationMode@@@Z
    virtual long v_SetInterpolationMode(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateChildVisual@CDCompWindowThumbnail@@AEAAJAEBUtagSIZE@@PEAUtagRECT@@@Z
    long _CreateChildVisual(tagSIZE const &, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSize@CDCompWindowThumbnail@@AEAAJPEBUtagSIZE@@PEBUtagRECT@@PEAU2@@Z
    long _GetSize(tagSIZE const *, tagRECT const *, tagSIZE *);
};
