#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 12 member(s).
class CPlayToReceiverManager {
public:
    class CRegistryChangeHandler;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPlayToReceiverManager@@QEAA@XZ
    CPlayToReceiverManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyRegKeyChange@CPlayToReceiverManager@@MEAAJXZ
    virtual long NotifyRegKeyChange();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlayToReceiverManager@@MEAA@XZ
    virtual ~CPlayToReceiverManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDefaultAutoValue@CPlayToReceiverManager@@AEAAKXZ
    unsigned long _GetDefaultAutoValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeRegistryMonitor@CPlayToReceiverManager@@AEAAXXZ
    void _InitializeRegistryMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnShellRunning@CPlayToReceiverManager@@AEAAJAEBV?$ComPtr@UIWeakReference@@@WRL@Microsoft@@@Z
    long _OnShellRunning(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestartRegistryMonitor@CPlayToReceiverManager@@AEAAXXZ
    void _RestartRegistryMonitor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Run@CPlayToReceiverManager@@AEAAJXZ
    long _Run();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartLauncher@CPlayToReceiverManager@@AEAAXXZ
    void _StartLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopLauncher@CPlayToReceiverManager@@AEAAXXZ
    void _StopLauncher();
};
