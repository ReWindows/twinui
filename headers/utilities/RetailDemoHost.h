#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
class RetailDemoHost {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeRetailDemoUserAgent@RetailDemoHost@@UEAAJXZ
    virtual long CreateAndInitializeRetailDemoUserAgent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRetailDemoUserAgent@RetailDemoHost@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetRetailDemoUserAgent(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@RetailDemoHost@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RetailDemoHost@@QEAA@XZ
    RetailDemoHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@RetailDemoHost@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RetailDemoHost@@UEAA@XZ
    virtual ~RetailDemoHost();
};
