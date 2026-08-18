#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CSwitchThumbnailFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginUpdates@CSwitchThumbnailFactory@@UEAAXAEBU_GUID@@@Z
    virtual void BeginUpdates(_GUID const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSwitchThumbnailFactory@@QEAA@XZ
    CSwitchThumbnailFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommitIfNotBatched@CSwitchThumbnailFactory@@UEAAX_N@Z
    virtual void CommitIfNotBatched(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCustomPaintThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@UtagSIZE@@W4CustomPaintThumbnailFlags@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateCustomPaintThumbnail(IDCompThumbnail *, tagSIZE, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@PEAUtagSIZE@@UtagRECT@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateDesktopThumbnail(IDCompThumbnail *, tagSIZE *, tagRECT, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDesktopThumbnailFromVisual@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@PEAUIDCompositionVisual@@UtagSIZE@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateDesktopThumbnailFromVisual(IDCompThumbnail *, IDCompositionVisual *, tagSIZE, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEmptyThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@UtagSIZE@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateEmptyThumbnail(IDCompThumbnail *, tagSIZE, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSolidColorThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@KUtagSIZE@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateSolidColorThumbnail(IDCompThumbnail *, unsigned long, tagSIZE, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTaskGroupThumbnail_Legacy@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@PEBUtagSIZE@@UtagRECT@@PEAPEAUHWND__@@IPEAPEAU2@@Z
    virtual long CreateTaskGroupThumbnail_Legacy(IDCompThumbnail *, tagSIZE const *, tagRECT, HWND__* *, unsigned int, IDCompThumbnail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@PEAUHWND__@@KPEBUtagSIZE@@PEAUtagRECT@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateThumbnail(IDCompThumbnail *, HWND__*, unsigned long, tagSIZE const *, tagRECT *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateVirtualDesktopThumbnail@CSwitchThumbnailFactory@@UEAAJPEAUIDCompThumbnail@@PEBUtagSIZE@@UtagRECT@@PEAPEAU2@@Z
    virtual long CreateVirtualDesktopThumbnail(IDCompThumbnail *, tagSIZE const *, tagRECT, IDCompThumbnail * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndUpdates@CSwitchThumbnailFactory@@UEAAX_N@Z
    virtual void EndUpdates(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBorderData@CSwitchThumbnailFactory@@UEAAXPEAHPEAKPEAE@Z
    virtual void GetBorderData(int *, unsigned long *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@CSwitchThumbnailFactory@@UEAAJPEAPEAUIDCompThumbnailParent@@@Z
    virtual long GetRootVisual(IDCompThumbnailParent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSwitchThumbnailFactory@@QEAAJPEAUHWND__@@W4DCOMPOSITION_BITMAP_INTERPOLATION_MODE@@PEAUISwitchThumbnailDeviceManager@@@Z
    long RuntimeClassInitialize(HWND__*, int, ISwitchThumbnailDeviceManager *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBorderData@CSwitchThumbnailFactory@@UEAAXHKE@Z
    virtual void SetBorderData(int, unsigned long, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForCommitCompletion@CSwitchThumbnailFactory@@UEAAJXZ
    virtual long WaitForCommitCompletion();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSwitchThumbnailFactory@@UEAA@XZ
    virtual ~CSwitchThumbnailFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetParentVisual@CSwitchThumbnailFactory@@AEAAJPEAUIDCompThumbnail@@PEAPEAUIDCompThumbnailParent@@@Z
    long _GetParentVisual(IDCompThumbnail *, IDCompThumbnailParent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadThemeData@CSwitchThumbnailFactory@@AEAAJXZ
    long _LoadThemeData();
};
