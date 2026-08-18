#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
// Base evidence: AnimatedTouchButton (likely; classinfo-template-instantiation).
class ProgressTile {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitialize@ProgressTile@@SAJPEAVElement@DirectUI@@AEBURUNNING_SHARE_INFO@@HPEAUIShellTaskScheduler@@PEAPEAV23@@Z
    static long CreateAndInitialize(::DirectUI::Element *, RUNNING_SHARE_INFO const &, int, IShellTaskScheduler *, ::DirectUI::Element * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@ProgressTile@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@ProgressTile@@UEAAXPEAUEvent@DirectUI@@@Z
    virtual void OnEvent(::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@ProgressTile@@SAJXZ
    static long Register();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTextToDone@ProgressTile@@QEAAJXZ
    long SetTextToDone();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowError@ProgressTile@@QEAAJXZ
    long ShowError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartDelayedAction@ProgressTile@@QEAAJXZ
    long StartDelayedAction();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitUI@ProgressTile@@AEAAJPEAUIShellTaskScheduler@@@Z
    long _InitUI(IShellTaskScheduler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetInfo@ProgressTile@@AEAAJXZ
    long _SetInfo();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgressTile@@EEAA@XZ
    virtual ~ProgressTile();
};
