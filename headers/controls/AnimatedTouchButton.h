#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
// Base evidence: DirectUI::TouchButton (likely; classinfo-template-instantiation).
class AnimatedTouchButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClickDone@AnimatedTouchButton@@SA?AVUID@@XZ
    static UID ClickDone();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@AnimatedTouchButton@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@AnimatedTouchButton@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AnimatedTouchButton@@UEAAXPEBUPropertyInfo@DirectUI@@HPEAVValue@3@1@Z
    virtual void OnPropertyChanged(::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@AnimatedTouchButton@@SAJXZ
    static long Register();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireClickDone@AnimatedTouchButton@@AEAAXXZ
    void _FireClickDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetThemedIcon@AnimatedTouchButton@@AEAAJXZ
    long _SetThemedIcon();
};
