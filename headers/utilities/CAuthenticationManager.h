#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CAuthenticationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Authenticate@CAuthenticationManager@@QEAAJXZ
    long Authenticate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CAuthenticationManager@@QEAAJXZ
    long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAuthenticationManager@@QEAAJPEAVCConnectedSearchTransport@@K@Z
    long RuntimeClassInitialize(CConnectedSearchTransport *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnAuthenticate@CAuthenticationManager@@QEAAJXZ
    long UnAuthenticate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAuthContext@CAuthenticationManager@@AEAAJPEAPEAG@Z
    long _GetAuthContext(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetTicketFromUserId@CAuthenticationManager@@AEAAJV?$ComPtr@UIUserIdentity@OnlineId@Authentication@Security@Windows@@@WRL@Microsoft@@PEAPEAG@Z
    long _GetTicketFromUserId(WindissectOpaque, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadRequest@CAuthenticationManager@@AEAAJXZ
    long _LoadRequest();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAuthenticationManager@@EEAA@XZ
    virtual ~CAuthenticationManager();
};
