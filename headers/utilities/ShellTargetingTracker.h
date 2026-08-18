#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class ShellTargetingTracker {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTarget@ShellTargetingTracker@@UEAAJPEAW4SHELL_TARGET_IDENTIFIER@@PEAPEAUIApplicationView@@@Z
    virtual long GetTarget(int *, IApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackContract@ShellTargetingTracker@@UEAAJW4SHELL_TARGET_IDENTIFIER@@@Z
    virtual long InvokeBackContract(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplicationViewChanged@ShellTargetingTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z
    virtual long OnApplicationViewChanged(IApplicationView *, int, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterContract@ShellTargetingTracker@@UEAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@PEAK@Z
    virtual long RegisterContract(int, int, IShellTargetingContractNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForTargetingChanges@ShellTargetingTracker@@UEAAJPEAUIShellTargetingChangeNotification@@PEAK@Z
    virtual long RegisterForTargetingChanges(IShellTargetingChangeNotification *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShellTargetingTracker@@QEAA@XZ
    ShellTargetingTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@ShellTargetingTracker@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@ShellTargetingTracker@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterContract@ShellTargetingTracker@@UEAAJK@Z
    virtual long UnregisterContract(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForTargetingChanges@ShellTargetingTracker@@UEAAJK@Z
    virtual long UnregisterForTargetingChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@ShellTargetingTracker@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellTargetingTracker@@UEAA@XZ
    virtual ~ShellTargetingTracker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueTargetChangeNotifications@ShellTargetingTracker@@AEAAXXZ
    void QueueTargetChangeNotifications();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTarget@ShellTargetingTracker@@AEAAXW4SHELL_TARGET_IDENTIFIER@@PEAUIApplicationView@@@Z
    void UpdateTarget(int, IApplicationView *);
};
