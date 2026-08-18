#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class PenSignalSourceAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDocked@PenSignalSourceAdapter@@QEAAJPEAUIPenDockListener@Input@Devices@Windows@ABI@@PEAUIPenDockedEventArgs@3456@@Z
    long OnDocked(::ABI::Windows::Devices::Input::IPenDockListener *, ::ABI::Windows::Devices::Input::IPenDockedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUndocked@PenSignalSourceAdapter@@QEAAJPEAUIPenDockListener@Input@Devices@Windows@ABI@@PEAUIPenUndockedEventArgs@3456@@Z
    long OnUndocked(::ABI::Windows::Devices::Input::IPenDockListener *, ::ABI::Windows::Devices::Input::IPenUndockedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@PenSignalSourceAdapter@@QEAAJPEAUIPenSignalManager@@@Z
    long RuntimeClassInitialize(IPenSignalManager *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PenSignalSourceAdapter@@UEAA@XZ
    virtual ~PenSignalSourceAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowForeground@PenSignalSourceAdapter@@CAXXZ
    static void AllowForeground();
};
