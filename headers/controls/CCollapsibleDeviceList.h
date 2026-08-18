#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CCollapsibleDeviceList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTile@CCollapsibleDeviceList@@QEAAJPEBGPEAPEAVElement@DirectUI@@@Z
    long FindTile(unsigned short const *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCollapsibleDeviceList@@QEAAJPEAVElement@DirectUI@@PEAUIUnknown@@@Z
    long Initialize(::DirectUI::Element *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CCollapsibleDeviceList@@QEAAJPEAVElement@DirectUI@@PEAUIUnknown@@PEAUIDeviceElementNotify@@_NPEAUIDeviceElementSource@@PEAK@Z
    long Initialize(::DirectUI::Element *, IUnknown *, IDeviceElementNotify *, bool, IDeviceElementSource *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsButtonFromList@CCollapsibleDeviceList@@QEAA_NPEAVElement@DirectUI@@PEAI@Z
    bool IsButtonFromList(::DirectUI::Element *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEnumerationComplete@CCollapsibleDeviceList@@QEAAXXZ
    void NotifyEnumerationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTile@CCollapsibleDeviceList@@QEAAJPEBG@Z
    long RemoveTile(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@CCollapsibleDeviceList@@QEAAJPEBG0_N@Z
    long SetStatus(unsigned short const *, unsigned short const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCollapsibleDeviceList@@QEAA@XZ
    ~CCollapsibleDeviceList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddTileToHost@CCollapsibleDeviceList@@IEAAJPEAVElement@DirectUI@@I_N@Z
    long _AddTileToHost(::DirectUI::Element *, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDeviceTileID@CCollapsibleDeviceList@@KAJPEAVElement@DirectUI@@PEAPEAG@Z
    static long _GetDeviceTileID(::DirectUI::Element *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MatchId@CCollapsibleDeviceList@@KA_NPEBGPEAVElement@DirectUI@@@Z
    static bool _MatchId(unsigned short const *, ::DirectUI::Element *);
};
