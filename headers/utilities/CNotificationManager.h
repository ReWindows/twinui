#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class CNotificationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSystemHandlerInExplorerProcess@CNotificationManager@@UEAAJPEBG0U_GUID@@HPEBQEBG2K@Z
    virtual long ActivateSystemHandlerInExplorerProcess(unsigned short const *, unsigned short const *, _GUID, int, unsigned short const * const *, unsigned short const * const *, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CNotificationManager@@QEAA@XZ
    CNotificationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CNotificationManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwitchToShellWindowInExplorerProcess@CNotificationManager@@UEAAJXZ
    virtual long SwitchToShellWindowInExplorerProcess();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNotificationManager@@UEAA@XZ
    virtual ~CNotificationManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_QueryService@CNotificationManager@@MEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long v_QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CNotificationManager@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOrInitializeNotificationPlatform@CNotificationManager@@AEAAJPEAPEAUIWpnPlatform@@@Z
    long _GetOrInitializeNotificationPlatform(IWpnPlatform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeNotificationPlatform@CNotificationManager@@AEAAJPEAPEAUIWpnPlatform@@@Z
    long _InitializeNotificationPlatform(IWpnPlatform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetNotificationPlatform@CNotificationManager@@AEAAJPEAPEAUIWpnPlatform@@@Z
    long _ResetNotificationPlatform(IWpnPlatform * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchToShellWindow@CNotificationManager@@CAJXZ
    static long _SwitchToShellWindow();
};
