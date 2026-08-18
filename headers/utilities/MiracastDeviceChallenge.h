#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class MiracastDeviceChallenge {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChallengeState@MiracastDeviceChallenge@@UEAA?AW4MiracastDeviceChallengeState@@XZ
    virtual int GetChallengeState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceInterfaceID@MiracastDeviceChallenge@@UEAAPEBGXZ
    virtual unsigned short const * GetDeviceInterfaceID();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MiracastDeviceChallenge@@QEAA@XZ
    MiracastDeviceChallenge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@MiracastDeviceChallenge@@UEAAXXZ
    virtual void Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartChallenge@MiracastDeviceChallenge@@UEAAJXZ
    virtual long StartChallenge();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MiracastDeviceChallenge@@UEAA@XZ
    virtual ~MiracastDeviceChallenge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DafChallengeCallback@MiracastDeviceChallenge@@CAXPEAXJ@Z
    static void DafChallengeCallback(void *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDafChallengeComplete@MiracastDeviceChallenge@@AEAAXJ@Z
    void OnDafChallengeComplete(long);
};
