#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CRudeWindowManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRudeWindowManager@@QEAA@XZ
    CRudeWindowManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRudeWindow@CRudeWindowManager@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetRudeWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMonitorRude@CRudeWindowManager@@UEAAJPEAH@Z
    virtual long IsMonitorRude(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CRudeWindowManager@@UEAAJPEAUIRudeWindowManagerEvents@@PEAK@Z
    virtual long Register(IRudeWindowManagerEvents *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RudeWindowStateChanged@CRudeWindowManager@@UEAAX_NPEAUHWND__@@@Z
    virtual void RudeWindowStateChanged(bool, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CRudeWindowManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@CRudeWindowManager@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRudeWindowManager@@UEAA@XZ
    virtual ~CRudeWindowManager();
};
