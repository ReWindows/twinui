#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class COverrideScaling {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COverrideScaling@@QEAA@XZ
    COverrideScaling();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceCompatPolicy@COverrideScaling@@UEAAJPEAUHWND__@@PEAUIApplicationView@@W4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z
    virtual long ForceCompatPolicy(HWND__*, IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewCompatibilityChanged@COverrideScaling@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_COMPATIBILITY_POLICY@@@Z
    virtual long OnApplicationViewCompatibilityChanged(IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@COverrideScaling@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@COverrideScaling@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@COverrideScaling@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COverrideScaling@@UEAA@XZ
    virtual ~COverrideScaling();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOverrideForHighScaleFactor@COverrideScaling@@AEAAJPEAUIApplicationView@@PEAI@Z
    long _GetOverrideForHighScaleFactor(IApplicationView *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOverrideForPolicy@COverrideScaling@@AEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_COMPATIBILITY_POLICY@@PEAI@Z
    long _GetOverrideForPolicy(IApplicationView *, int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PublishOverrideScaleFactor@COverrideScaling@@AEAAJPEAUIApplicationView@@I@Z
    long _PublishOverrideScaleFactor(IApplicationView *, unsigned int);
};
