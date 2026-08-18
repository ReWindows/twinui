#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CBackstackApp {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBackstackApp@@QEAA@PEAUIImmersiveApplication@@@Z
    CBackstackApp(IImmersiveApplication *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTimestamp@CBackstackApp@@UEAAXXZ
    virtual void ClearTimestamp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CBackstackApp@@SAJPEAUIImmersiveApplication@@_NAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(IImmersiveApplication *, bool, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveApp@CBackstackApp@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetImmersiveApp(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimestamp@CBackstackApp@@UEAAXPEAU_FILETIME@@@Z
    virtual void GetTimestamp(_FILETIME *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExemptApp@CBackstackApp@@UEAA_NXZ
    virtual bool IsExemptApp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@CBackstackApp@@UEAA_NXZ
    virtual bool IsRunning();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBackstackApp@@EEAA@XZ
    virtual ~CBackstackApp();
};
