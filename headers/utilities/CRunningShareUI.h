#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CRunningShareUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRunningShareUI@@QEAA@XZ
    CRunningShareUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleErrorOrCrash@CRunningShareUI@@UEAAJAEBURUNNING_SHARE_INFO@@@Z
    virtual long HandleErrorOrCrash(RUNNING_SHARE_INFO const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRunningShareUI@@UEAA@XZ
    virtual ~CRunningShareUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureToastInfo@CRunningShareUI@@AEAAJW4__MIDL___MIDL_itf_sharinganddevicesprivate_0000_0000_0001@@@Z
    long _EnsureToastInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowToast@CRunningShareUI@@AEAAJW4__MIDL___MIDL_itf_sharinganddevicesprivate_0000_0000_0001@@@Z
    long _ShowToast(int);
};
