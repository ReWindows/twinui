#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 18 member(s).
class CShellChromeControls {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellChromeControls@@QEAA@XZ
    CShellChromeControls();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAnnotate@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeAnnotate(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAppBar@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeAppBar(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBack@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeBack(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCharms@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeCharms(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCloseCommand@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@K@Z
    virtual long InvokeCloseCommand(IImmersiveApplication *, int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeExitFullScreen@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeExitFullScreen(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFullScreen@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeFullScreen(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeMinimizeCommand@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeMinimizeCommand(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokePrint@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokePrint(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSearch@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeSearch(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSettings@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeSettings(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeShare@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeShare(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeTapAndSend@CShellChromeControls@@UEAAJPEAUIImmersiveApplication@@W4CHROME_CONTROLS_SOURCE@@@Z
    virtual long InvokeTapAndSend(IImmersiveApplication *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanUpTitleBarState@CShellChromeControls@@AEAAJPEAUIImmersiveApplication@@@Z
    long _CleanUpTitleBarState(IImmersiveApplication *);
};
