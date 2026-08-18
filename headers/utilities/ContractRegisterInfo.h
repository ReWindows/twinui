#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class ContractRegisterInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContractRegisterInfo@@QEAA@XZ
    ContractRegisterInfo();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContractFlags@ContractRegisterInfo@@UEAA?AW4SHELL_TARGET_CONTRACT_FLAGS@@XZ
    virtual int GetContractFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@ContractRegisterInfo@@UEAAKXZ
    virtual unsigned long GetCookie();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@ContractRegisterInfo@@UEAA?AW4SHELL_TARGET_IDENTIFIER@@XZ
    virtual int GetIdentifier();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackContract@ContractRegisterInfo@@UEAAJXZ
    virtual long InvokeBackContract();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ContractRegisterInfo@@QEAAJW4SHELL_TARGET_IDENTIFIER@@W4SHELL_TARGET_CONTRACT_FLAGS@@PEAUIShellTargetingContractNotification@@K@Z
    long RuntimeClassInitialize(int, int, IShellTargetingContractNotification *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContractRegisterInfo@@UEAA@XZ
    virtual ~ContractRegisterInfo();
};
