#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace shell {
class TaskScheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@KKPEAPEAV12@@Z
    static long CreateInstance(_GUID const &, unsigned long, unsigned long, ::shell::TaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TaskScheduler@shell@@SAJAEBU_GUID@@PEAPEAV12@@Z
    static long CreateInstance(_GUID const &, ::shell::TaskScheduler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTasks@TaskScheduler@shell@@QEAAJH@Z
    long RemoveTasks(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TaskScheduler@shell@@QEAA@PEAUIShellTaskScheduler@@AEBU_GUID@@@Z
    TaskScheduler(IShellTaskScheduler *, _GUID const &);
};
} // namespace shell
