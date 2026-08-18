#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 8 member(s).
class CAppListExtensionItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAppListExtensionItem@@SAJPEAUIExtensionListItem@@PEAUIShellItem@@PEAPEAUIAppListItem@@@Z
    static long CreateInstance(IExtensionListItem *, IShellItem *, IAppListItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayProperties@CAppListExtensionItem@@UEAAJPEAPEAUIPropertyStore@@@Z
    virtual long GetDisplayProperties(IPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionListItem@CAppListExtensionItem@@UEAAJPEAPEAUIExtensionListItem@@@Z
    virtual long GetExtensionListItem(IExtensionListItem * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItem@CAppListExtensionItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetShellItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSortKeyPtr@CAppListExtensionItem@@UEAAJPEAPEBEPEAK@Z
    virtual long GetSortKeyPtr(unsigned char const * *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppListExtensionItem@@UEAA@XZ
    virtual ~CAppListExtensionItem();
};
