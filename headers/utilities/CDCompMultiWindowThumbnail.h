#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class CDCompMultiWindowThumbnail {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDCompMultiWindowThumbnail@@QEAA@XZ
    CDCompMultiWindowThumbnail();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CDCompMultiWindowThumbnail@@UEAAJPEAUtagSIZE@@@Z
    virtual long GetSize(tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CDCompMultiWindowThumbnail@@QEAAJPEBUtagSIZE@@AEBUtagRECT@@PEAUHWND__@@PEAUIDCompThumbnailParent@@PEAUISwitchThumbnailDeviceManager@@PEAUISwitchThumbnailFactory@@W4MultiWindowThumbnailOptions@@@Z
    long RuntimeClassInitialize(tagSIZE const *, tagRECT const &, HWND__*, IDCompThumbnailParent *, ISwitchThumbnailDeviceManager *, ISwitchThumbnailFactory *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForceCvi@CDCompMultiWindowThumbnail@@UEAAJ_N@Z
    virtual long SetForceCvi(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMultiWindowVisual@CDCompMultiWindowThumbnail@@UEAAJPEAPEAUHWND__@@I0IK@Z
    virtual long UpdateMultiWindowVisual(HWND__* *, unsigned int, HWND__* *, unsigned int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDCompMultiWindowThumbnail@@UEAA@XZ
    virtual ~CDCompMultiWindowThumbnail();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateVisual@CDCompMultiWindowThumbnail@@AEAAJAEBUtagSIZE@@@Z
    long _CreateVisual(tagSIZE const &);
};
