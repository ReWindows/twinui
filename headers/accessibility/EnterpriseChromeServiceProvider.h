#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class EnterpriseChromeServiceProvider {
public:
    class INIT_THREAD_DATA;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EnterpriseChromeServiceProvider@@QEAA@XZ
    EnterpriseChromeServiceProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@EnterpriseChromeServiceProvider@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@EnterpriseChromeServiceProvider@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChromeManagerReference@EnterpriseChromeServiceProvider@@UEAAJPEAUIEnterpriseChromeManager@@@Z
    virtual long SetChromeManagerReference(IEnterpriseChromeManager *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@EnterpriseChromeServiceProvider@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveForegroundToBadgeWindow@EnterpriseChromeServiceProvider@@UEAAJXZ
    virtual long TryMoveForegroundToBadgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@EnterpriseChromeServiceProvider@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnterpriseChromeServiceProvider@@UEAA@XZ
    virtual ~EnterpriseChromeServiceProvider();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEnterpriseChromeManagerThreadState@EnterpriseChromeServiceProvider@@AEAAJXZ
    long EnsureEnterpriseChromeManagerThreadState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartEnterpriseChromeManagerThread@EnterpriseChromeServiceProvider@@AEAAJXZ
    long StartEnterpriseChromeManagerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopEnterpriseChromeManagerThread@EnterpriseChromeServiceProvider@@AEAAXXZ
    void StopEnterpriseChromeManagerThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateEnterpriseChromeManager@EnterpriseChromeServiceProvider@@CAJPEAUINIT_THREAD_DATA@1@@Z
    static long s_CreateEnterpriseChromeManager(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnterpriseChromeManagerThreadProc@EnterpriseChromeServiceProvider@@CAKPEAX@Z
    static unsigned long s_EnterpriseChromeManagerThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RunMessageLoop@EnterpriseChromeServiceProvider@@CAXPEAX@Z
    static void s_RunMessageLoop(void *);
};
