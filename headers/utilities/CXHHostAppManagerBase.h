#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CXHHostAppManagerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CXHHostAppManagerBase@@QEAA@XZ
    CXHHostAppManagerBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CXHHostAppManagerBase@@QEAAJAEBU_GUID@@_NPEBG2@Z
    long Initialize(_GUID const &, bool, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchHostApp@CXHHostAppManagerBase@@UEAAJPEBG@Z
    virtual long LaunchHostApp(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceExit@CXHHostAppManagerBase@@UEAAJXZ
    virtual long OnExperienceExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExperienceReady@CXHHostAppManagerBase@@UEAAJXZ
    virtual long OnExperienceReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartListeningForAppStateChanges@CXHHostAppManagerBase@@UEAAJXZ
    virtual long StartListeningForAppStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopListeningForAppStateChanges@CXHHostAppManagerBase@@UEAAJXZ
    virtual long StopListeningForAppStateChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForAppCompletion@CXHHostAppManagerBase@@UEAAJK@Z
    virtual long WaitForAppCompletion(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnActivation@CXHHostAppManagerBase@@MEAAXJ@Z
    virtual void v_OnActivation(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnExperienceExit@CXHHostAppManagerBase@@MEAAJXZ
    virtual long v_OnExperienceExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnExperienceReady@CXHHostAppManagerBase@@MEAAJXZ
    virtual long v_OnExperienceReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnLaunch@CXHHostAppManagerBase@@MEAAXJ@Z
    virtual void v_OnLaunch(long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CXHHostAppManagerBase@@MEAA@XZ
    virtual ~CXHHostAppManagerBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndExistingTaskCompletion@CXHHostAppManagerBase@@AEAAXXZ
    void _EndExistingTaskCompletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LaunchHostApp@CXHHostAppManagerBase@@AEAAJ_N@Z
    long _LaunchHostApp(bool);
};
