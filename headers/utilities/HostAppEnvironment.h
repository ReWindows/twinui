#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class HostAppEnvironment {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@HostAppEnvironment@@QEAAX_N@Z
    void Cleanup(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstance@HostAppEnvironment@@SAAEAV1@XZ
    static HostAppEnvironment & GetInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Setup@HostAppEnvironment@@QEAAJXZ
    long Setup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_LowLevelKeyboardProc@HostAppEnvironment@@SA_JH_K_J@Z
    static int64_t s_LowLevelKeyboardProc(int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HostAppEnvironment@@QEAA@XZ
    ~HostAppEnvironment();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsHotKeyFiltered@HostAppEnvironment@@AEAA_NK@Z
    bool _IsHotKeyFiltered(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LowLevelKeyboardProc@HostAppEnvironment@@AEAA_JH_K_J@Z
    int64_t _LowLevelKeyboardProc(int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupInputSwitchServer@HostAppEnvironment@@AEAAJPEAX@Z
    long _SetupInputSwitchServer(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetupVolumeControlServer@HostAppEnvironment@@AEAAJPEAX@Z
    long _SetupVolumeControlServer(void *);
};
