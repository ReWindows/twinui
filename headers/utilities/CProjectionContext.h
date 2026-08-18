#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class CProjectionContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CProjectionContext@@QEAA@XZ
    CProjectionContext();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorHWND@CProjectionContext@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetAnchorHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorViewPosition@CProjectionContext@@UEAAJPEAPEAUIApplicationViewPosition@@@Z
    virtual long GetAnchorViewPosition(IApplicationViewPosition * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisconnectOnStop@CProjectionContext@@UEAAPEBGXZ
    virtual unsigned short const * GetDisconnectOnStop();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInitialTargetMonitor@CProjectionContext@@UEAAPEAUHMONITOR__@@XZ
    virtual HMONITOR__* GetInitialTargetMonitor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetHWND@CProjectionContext@@UEAAPEAUHWND__@@XZ
    virtual HWND__* GetTargetHWND();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetViewApplication@CProjectionContext@@UEAAJPEAPEAUIImmersiveApplication@@@Z
    virtual long GetTargetViewApplication(IImmersiveApplication * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorHWND@CProjectionContext@@UEAAXPEAUHWND__@@@Z
    virtual void SetAnchorHWND(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorViewPosition@CProjectionContext@@UEAAXPEAUIApplicationViewPosition@@@Z
    virtual void SetAnchorViewPosition(IApplicationViewPosition *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisconnectOnStop@CProjectionContext@@UEAAJPEBG@Z
    virtual long SetDisconnectOnStop(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialTargetMonitor@CProjectionContext@@UEAAXPEAUHMONITOR__@@@Z
    virtual void SetInitialTargetMonitor(HMONITOR__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetHWND@CProjectionContext@@UEAAXPEAUHWND__@@@Z
    virtual void SetTargetHWND(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetViewApplication@CProjectionContext@@UEAAXPEAUIImmersiveApplication@@@Z
    virtual void SetTargetViewApplication(IImmersiveApplication *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CProjectionContext@@UEAA@XZ
    virtual ~CProjectionContext();
};
