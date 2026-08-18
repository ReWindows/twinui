#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CShellFeedbackService {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAumidFromAppListEntry@CShellFeedbackService@@UEAAJPEAUIUnknown@@PEAPEAG@Z
    virtual long GetAumidFromAppListEntry(IUnknown *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstalledLegacyApps@CShellFeedbackService@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetInstalledLegacyApps(IObjectArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRunningApps@CShellFeedbackService@@UEAAJPEAPEAUIObjectArray@@@Z
    virtual long GetRunningApps(IObjectArray * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CShellFeedbackService@@QEAAJXZ
    long RuntimeClassInitialize();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellFeedbackService@@MEAA@XZ
    virtual ~CShellFeedbackService();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddClassicAppEntry@CShellFeedbackService@@AEAAJPEAUHWND__@@PEAUIObjectCollection@@@Z
    long _AddClassicAppEntry(HWND__*, IObjectCollection *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddImmersiveAppEntry@CShellFeedbackService@@AEAAJPEAUIImmersiveApplication@@PEAUIObjectCollection@@@Z
    long _AddImmersiveAppEntry(IImmersiveApplication *, IObjectCollection *);
};
