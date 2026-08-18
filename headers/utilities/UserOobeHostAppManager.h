#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class UserOobeHostAppManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDebuggingModeChanged@UserOobeHostAppManager@@UEAAJH@Z
    virtual long OnDebuggingModeChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@UserOobeHostAppManager@@QEAAJPEBG_NAEBU_GUID@@0@Z
    long RuntimeClassInitialize(unsigned short const *, bool, _GUID const &, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserOobeHostAppManager@@QEAA@XZ
    UserOobeHostAppManager();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserOobeHostAppManager@@UEAA@XZ
    virtual ~UserOobeHostAppManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnActivation@UserOobeHostAppManager@@MEAAXJ@Z
    virtual void v_OnActivation(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnExperienceExit@UserOobeHostAppManager@@MEAAJXZ
    virtual long v_OnExperienceExit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnLaunch@UserOobeHostAppManager@@MEAAXJ@Z
    virtual void v_OnLaunch(long);
};
