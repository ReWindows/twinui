#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class MiracastConnectionEventHwndForwarder {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttach@MiracastConnectionEventHwndForwarder@@SAJPEAUIMiracastConnection@@PEAUHWND__@@PEAPEAUIMiracastConnectionEventHwndForwarder@@@Z
    static long CreateAndAttach(IMiracastConnection *, HWND__*, IMiracastConnectionEventHwndForwarder * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MiracastConnectionEventHwndForwarder@@QEAA@XZ
    MiracastConnectionEventHwndForwarder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMiracastConnectionStateChanged@MiracastConnectionEventHwndForwarder@@UEAAJXZ
    virtual long OnMiracastConnectionStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@MiracastConnectionEventHwndForwarder@@UEAAXXZ
    virtual void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MiracastConnectionEventHwndForwarder@@UEAA@XZ
    virtual ~MiracastConnectionEventHwndForwarder();
};
