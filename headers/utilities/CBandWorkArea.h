#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 21 member(s).
class CBandWorkArea {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBandDependency@CBandWorkArea@@UEAAJW4ZBID@@@Z
    virtual long AddBandDependency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddClient@CBandWorkArea@@UEAAJPEAUIImmersiveLayoutClient@@PEAK@Z
    virtual long AddClient(IImmersiveLayoutClient *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddListener@CBandWorkArea@@UEAAJPEAUIImmersiveLayoutChanges@@PEAK@Z
    virtual long AddListener(IImmersiveLayoutChanges *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSyncListener@CBandWorkArea@@UEAAJPEAUIImmersiveLayoutChanges@@PEAK@Z
    virtual long AddSyncListener(IImmersiveLayoutChanges *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandDependencyArray@CBandWorkArea@@UEAAJPEAPEAUIBandIDArray@@@Z
    virtual long GetBandDependencyArray(IBandIDArray * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandID@CBandWorkArea@@UEBA?AW4ZBID@@XZ
    virtual int GetBandID() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerWorkArea@CBandWorkArea@@UEAAXPEAUtagRECT@@@Z
    virtual void GetInnerWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterWorkArea@CBandWorkArea@@UEAAXPEAUtagRECT@@@Z
    virtual void GetOuterWorkArea(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyListeners@CBandWorkArea@@UEAAXXZ
    virtual void NotifyListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshSyncListeners@CBandWorkArea@@UEAAXXZ
    virtual void RefreshSyncListeners();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBandDependency@CBandWorkArea@@UEAAJW4ZBID@@@Z
    virtual long RemoveBandDependency(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveClient@CBandWorkArea@@UEAAJK@Z
    virtual long RemoveClient(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveListener@CBandWorkArea@@UEAAJK@Z
    virtual long RemoveListener(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSyncListener@CBandWorkArea@@UEAAJK@Z
    virtual long RemoveSyncListener(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetWorkArea@CBandWorkArea@@UEAAXPEBUtagRECT@@@Z
    virtual void ResetWorkArea(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOuterWorkArea@CBandWorkArea@@UEAA_NPEBUtagRECT@@_N@Z
    virtual bool SetOuterWorkArea(tagRECT const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CBandWorkArea@@UEAAXXZ
    virtual void Shutdown();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MakeCalloutsToListeners@CBandWorkArea@@IEAAXPEBUtagRECT@@PEAVCGITRegistrationList@@@Z
    void _MakeCalloutsToListeners(tagRECT const *, CGITRegistrationList *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CBandWorkArea@@MEAA@XZ
    virtual ~CBandWorkArea();
};
