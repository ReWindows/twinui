#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class CAccountItemWidget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAccount@CAccountItemWidget@@SAJPEAVAppInfo@@PEAVCIconCache@@IPEBG22W4tagACCOUNTSTATE@@W4ACCOUNT_ACTION@@PEAPEAVCSettingsWidget@@@Z
    static long CreateAccount(AppInfo *, CIconCache *, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, int, int, CSettingsWidget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAccountProvider@CAccountItemWidget@@SAJPEAVAppInfo@@PEAVCIconCache@@IPEBG2PEAPEAVCSettingsWidget@@@Z
    static long CreateAccountProvider(AppInfo *, CIconCache *, unsigned int, unsigned short const *, unsigned short const *, CSettingsWidget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCredential@CAccountItemWidget@@SAJPEAVAppInfo@@PEAVCIconCache@@IW4ACCOUNT_CMD_TYPE@@PEBG3PEAPEAVCSettingsWidget@@@Z
    static long CreateCredential(AppInfo *, CIconCache *, unsigned int, int, unsigned short const *, unsigned short const *, CSettingsWidget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CAccountItemWidget@@UEAAXXZ
    virtual void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAccountItemWidget@@IEAAJPEAVAppInfo@@PEAVCIconCache@@W4ACCOUNT_CMD_TYPE@@IPEBG33W4tagACCOUNTSTATE@@W4ACCOUNT_ACTION@@@Z
    long Initialize(AppInfo *, CIconCache *, int, unsigned int, unsigned short const *, unsigned short const *, unsigned short const *, int, int);
};
