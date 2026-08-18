#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CExtensionListItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendToPinnedList@CExtensionListItem@@UEAAJXZ
    virtual long AppendToPinnedList();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExtensionListItem@@QEAA@XZ
    CExtensionListItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CExtensionListItem@@SAJPEAUIExtensionRegistration@Foundation@Windows@@PEAUIExtensionStateManager@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(WindissectOpaque *, IExtensionStateManager *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionRegistration@CExtensionListItem@@UEAAJPEAPEAUIExtensionRegistration@Foundation@Windows@@@Z
    virtual long GetExtensionRegistration(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHiddenState@CExtensionListItem@@UEAAJPEAH@Z
    virtual long GetHiddenState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPinnedState@CExtensionListItem@@UEAAJPEAH@Z
    virtual long GetPinnedState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyStore@CExtensionListItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetPropertyStore(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertToPinnedList@CExtensionListItem@@UEAAJPEAUIExtensionListItem@@@Z
    virtual long InsertToPinnedList(IExtensionListItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshUsageData@CExtensionListItem@@UEAAJXZ
    virtual long RefreshUsageData();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPinnedList@CExtensionListItem@@UEAAJXZ
    virtual long RemoveFromPinnedList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHiddenState@CExtensionListItem@@UEAAJH@Z
    virtual long SetHiddenState(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExtensionListItem@@UEAA@XZ
    virtual ~CExtensionListItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsurePropertyStore@CExtensionListItem@@AEAAJXZ
    long _EnsurePropertyStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCustomStringProperty@CExtensionListItem@@AEAAJPEBGPEAPEAG@Z
    long _GetCustomStringProperty(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetMFURank@CExtensionListItem@@AEAAJPEAN@Z
    long _GetMFURank(double *);
};
