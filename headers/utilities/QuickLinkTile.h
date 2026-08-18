#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
// Base evidence: AnimatedTouchButton (likely; classinfo-template-instantiation).
class QuickLinkTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitialize@QuickLinkTile@@SAJPEAVElement@DirectUI@@PEBUQUICK_LINK_INFO_PRIV@@PEBUSHARABLE_ITEM_DESCRIPTOR@@PEAUIShellTaskScheduler@@PEAPEAV23@@Z
    static long CreateAndInitialize(::DirectUI::Element *, QUICK_LINK_INFO_PRIV const *, SHARABLE_ITEM_DESCRIPTOR const *, IShellTaskScheduler *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@QuickLinkTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@QuickLinkTile@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@QuickLinkTile@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitUI@QuickLinkTile@@AEAAJPEBUQUICK_LINK_INFO_PRIV@@PEAUIShellTaskScheduler@@@Z
    long _InitUI(QUICK_LINK_INFO_PRIV const *, IShellTaskScheduler *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1QuickLinkTile@@EEAA@XZ
    virtual ~QuickLinkTile();
};
