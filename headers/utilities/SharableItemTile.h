#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
// Base evidence: AnimatedTouchButton (likely; classinfo-template-instantiation).
class SharableItemTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInsert@SharableItemTile@@SAJKPEAUIDataTransferBroker@@PEAUIShellTaskScheduler@@PEAVElement@DirectUI@@@Z
    static long CreateAndInsert(unsigned long, IDataTransferBroker *, IShellTaskScheduler *, ::DirectUI::Element *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@SharableItemTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@SharableItemTile@@UEAAXPEAVElement@DirectUI@@@Z
    virtual void OnHosted(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SharableItemTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@SharableItemTile@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitUI@SharableItemTile@@AEAAJPEAUSHARABLE_ITEM_DISPLAY_INFO@@PEAUIShellTaskScheduler@@@Z
    long _InitUI(SHARABLE_ITEM_DISPLAY_INFO *, IShellTaskScheduler *);
};
