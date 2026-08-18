#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 35 member(s).
class CShellExperienceManagerFactory {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperienceManagerFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellExperienceManagerFactory@@QEAA@XZ
    CShellExperienceManagerFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExperienceManager@CShellExperienceManagerFactory@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetExperienceManager(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperienceManagerFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperienceManagerFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperienceManagerFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CShellExperienceManagerFactory@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperienceManagerFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperienceManagerFactory@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CShellExperienceManagerFactory@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CShellExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_PublishServices@CShellExperienceManagerFactory@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long v_PublishServices(IServiceProvider *, IProfferService *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CShellExperienceManagerFactory@@UEAA@XZ
    virtual ~CShellExperienceManagerFactory();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetReady@CShellExperienceManagerFactory@@AEAAX_N@Z
    void SetReady(bool);
};
