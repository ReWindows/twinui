#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 40 member(s).
class CHostExperienceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CHostExperienceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllowSuspension@CHostExperienceManager@@UEAAJE@Z
    virtual long AllowSuspension(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostPriority@CHostExperienceManager@@UEAAJXZ
    virtual long BoostPriority();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostExperienceManager@@QEAA@XZ
    CHostExperienceManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CHostExperienceManager@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CHostExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CHostExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CHostExperienceManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CHostExperienceManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CHostExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CHostExperienceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CHostExperienceManager@@QEAAJPEAUIServiceProvider@@@Z
    long RuntimeClassInitialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnboostPriority@CHostExperienceManager@@UEAAJXZ
    virtual long UnboostPriority();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostExperienceManager@@UEAA@XZ
    virtual ~CHostExperienceManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewCreated@CHostExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z
    virtual long OnViewCreated(CSingleViewShellExperience *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoostPriorityHelper@CHostExperienceManager@@AEAAJXZ
    long BoostPriorityHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetActivationTimeoutPolicy@CHostExperienceManager@@AEAAXXZ
    void ResetActivationTimeoutPolicy();
};
