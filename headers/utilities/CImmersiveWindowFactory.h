#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 28 member(s).
class CImmersiveWindowFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImmersiveWindowFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveWindowFactory@@QEAA@XZ
    CImmersiveWindowFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CImmersiveWindowFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CImmersiveWindowFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImmersiveWindowFactory@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_CreateSplashScreen@CImmersiveWindowFactory@@EEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z
    virtual long v_CreateSplashScreen(int, ISplashScreen * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z
    virtual long v_Initialize(IImmersiveMonitor *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnAfterSetAppWindow@CImmersiveWindowFactory@@EEAAXXZ
    virtual void v_OnAfterSetAppWindow();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveWindowFactory@@EEAA@XZ
    virtual ~CImmersiveWindowFactory();
};
