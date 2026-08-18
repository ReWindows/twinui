#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class EnterpriseChromeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@EnterpriseChromeManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@EnterpriseChromeManager@@UEAAJXZ
    virtual long Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnterpriseChromeManager@@QEAA@XZ
    EnterpriseChromeManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForegroundView@EnterpriseChromeManager@@UEAAJPEAPEAUIApplicationView@@@Z
    virtual long GetForegroundView(IApplicationView * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormattedEnterpriseId@EnterpriseChromeManager@@UEAAJPEBGPEAPEAG@Z
    virtual long GetFormattedEnterpriseId(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@EnterpriseChromeManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EnterpriseChromeManager@@QEAAJPEAUIApplicationViewCollection@@PEAUIImmersiveApplicationNotificationService@@@Z
    long RuntimeClassInitialize(IApplicationViewCollection *, IImmersiveApplicationNotificationService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveForegroundToBadgeWindow@EnterpriseChromeManager@@UEAAJXZ
    virtual long TryMoveForegroundToBadgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinEventProc@EnterpriseChromeManager@@QEAAXPEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z
    void WinEventProc(HWINEVENTHOOK__*, unsigned long, HWND__*, long, long, unsigned long, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterpriseChromeManager@@UEAA@XZ
    virtual ~EnterpriseChromeManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyEventHooks@EnterpriseChromeManager@@AEAAXXZ
    void DestroyEventHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEventHooks@EnterpriseChromeManager@@AEAAJXZ
    long EnsureEventHooks();
};
