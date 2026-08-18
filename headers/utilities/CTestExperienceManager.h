#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CTestExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTestExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTestExperienceManager@@QEAA@XZ
    CTestExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CTestExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTestExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTestExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTestExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTestExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTestExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CTestExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTestExperienceManager@@UEAA@XZ
    virtual ~CTestExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewPropertiesChanging@CTestExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewPropertiesChanging(CSingleViewShellExperience *);
};
