#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class RemoteAppBrokerFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@RemoteAppBrokerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockServer@RemoteAppBrokerFactory@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RemoteAppBrokerFactory@@QEAA@XZ
    RemoteAppBrokerFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RemoteAppBrokerFactory@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@RemoteAppBrokerFactory@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RemoteAppBrokerFactory@@UEAA@XZ
    virtual ~RemoteAppBrokerFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCallerIsImmersiveBroker@RemoteAppBrokerFactory@@AEAAJXZ
    long VerifyCallerIsImmersiveBroker();
};
