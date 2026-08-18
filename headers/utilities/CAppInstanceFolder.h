#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 46 member(s).
class CAppInstanceFolder {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAppInstanceFolder@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToObject@CAppInstanceFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToObject(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BindToStorage@CAppInstanceFolder@@UEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    virtual long BindToStorage(_ITEMIDLIST_RELATIVE & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAppInstanceFolder@@QEAA@XZ
    CAppInstanceFolder();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareIDs@CAppInstanceFolder@@UEAAJ_JPEFBU_ITEMIDLIST_RELATIVE@@1@Z
    virtual long CompareIDs(int64_t, _ITEMIDLIST_RELATIVE & volatile *, _ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateViewObject@CAppInstanceFolder@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateViewObject(HWND__*, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumObjects@CAppInstanceFolder@@UEAAJPEAUHWND__@@KPEAPEAUIEnumIDList@@@Z
    virtual long EnumObjects(HWND__*, unsigned long, IEnumIDList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumSearches@CAppInstanceFolder@@UEAAJPEAPEAUIEnumExtraSearch@@@Z
    virtual long EnumSearches(IEnumExtraSearch * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributesOf@CAppInstanceFolder@@UEAAJIPEBQEFBU_ITEMID_CHILD@@PEAK@Z
    virtual long GetAttributesOf(unsigned int, _ITEMID_CHILD & volatile * const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CAppInstanceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurFolder@CAppInstanceFolder@@UEAAJPEAPEAU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumn@CAppInstanceFolder@@UEAAJKPEAK0@Z
    virtual long GetDefaultColumn(unsigned long, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultColumnState@CAppInstanceFolder@@UEAAJIPEAK@Z
    virtual long GetDefaultColumnState(unsigned int, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSearchGUID@CAppInstanceFolder@@UEAAJPEAU_GUID@@@Z
    virtual long GetDefaultSearchGUID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsEx@CAppInstanceFolder@@UEAAJPEFBU_ITEMID_CHILD@@PEBU_tagpropertykey@@PEAUtagVARIANT@@@Z
    virtual long GetDetailsEx(_ITEMID_CHILD & volatile *, _tagpropertykey const *, tagVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailsOf@CAppInstanceFolder@@UEAAJPEFBU_ITEMID_CHILD@@IPEAU_SHELLDETAILS@@@Z
    virtual long GetDetailsOf(_ITEMID_CHILD & volatile *, unsigned int, _SHELLDETAILS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayNameOf@CAppInstanceFolder@@UEAAJPEFBU_ITEMID_CHILD@@KPEAU_STRRET@@@Z
    virtual long GetDisplayNameOf(_ITEMID_CHILD & volatile *, unsigned long, _STRRET *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIObjectOf@CAppInstanceFolder@@UEAAJPEAUHWND__@@IPEBQEFBU_ITEMID_CHILD@@AEBU_GUID@@PEAIPEAPEAX@Z
    virtual long GetUIObjectOf(HWND__*, unsigned int, _ITEMID_CHILD & volatile * const *, _GUID const &, unsigned int *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CAppInstanceFolder@@UEAAJPEBU_ITEMIDLIST_ABSOLUTE@@@Z
    virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapColumnToSCID@CAppInstanceFolder@@UEAAJIPEAU_tagpropertykey@@@Z
    virtual long MapColumnToSCID(unsigned int, _tagpropertykey *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseDisplayName@CAppInstanceFolder@@UEAAJPEAUHWND__@@PEAUIBindCtx@@PEAGPEAKPEAPEAU_ITEMIDLIST_RELATIVE@@3@Z
    virtual long ParseDisplayName(HWND__*, IBindCtx *, unsigned short *, unsigned long *, _ITEMIDLIST_RELATIVE * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAppInstanceFolder@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAppInstanceFolder@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNameOf@CAppInstanceFolder@@UEAAJPEAUHWND__@@PEFBU_ITEMID_CHILD@@PEBGKPEAPEAU3@@Z
    virtual long SetNameOf(HWND__*, _ITEMID_CHILD & volatile *, unsigned short const *, unsigned long, _ITEMID_CHILD * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAppInstanceFolder@@UEAA@XZ
    virtual ~CAppInstanceFolder();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddContactProperties@CAppInstanceFolder@@AEAAJPEAUIPropertyStore@@PEBG@Z
    long _AddContactProperties(IPropertyStore *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BindToLocalCopy@CAppInstanceFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@_NAEBU_GUID@@PEAPEAX@Z
    long _BindToLocalCopy(_ITEMID_CHILD & volatile *, IBindCtx *, bool, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAppItemType@CAppInstanceFolder@@AEAA?AW4APPITEMTYPE@@PEFBU_ITEMIDLIST_RELATIVE@@@Z
    int _GetAppItemType(_ITEMIDLIST_RELATIVE & volatile *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDelegateItem@CAppInstanceFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@AEBU_GUID@@PEAPEAX@Z
    long _GetDelegateItem(_ITEMIDLIST_RELATIVE & volatile *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetDelegateParentAndItem@CAppInstanceFolder@@AEAAJPEFBU_ITEMIDLIST_RELATIVE@@PEAPEAUIShellFolder@@PEAPEAU_ITEMID_CHILD@@@Z
    long _GetDelegateParentAndItem(_ITEMIDLIST_RELATIVE & volatile *, IShellFolder * *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPropertyStore@CAppInstanceFolder@@AEAAJPEFBU_ITEMID_CHILD@@PEAUIBindCtx@@AEBU_GUID@@PEAPEAX@Z
    long _GetPropertyStore(_ITEMID_CHILD & volatile *, IBindCtx *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseAsBarricadePage@CAppInstanceFolder@@AEAAJPEBGPEAPEAU_ITEMID_CHILD@@@Z
    long _ParseAsBarricadePage(unsigned short const *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseAsContact@CAppInstanceFolder@@AEAAJPEBGPEAUIBindCtx@@PEAPEAU_ITEMID_CHILD@@@Z
    long _ParseAsContact(unsigned short const *, IBindCtx *, _ITEMID_CHILD * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ParseWithStorageItem@CAppInstanceFolder@@AEAAJPEBGPEAUIBindCtx@@PEAPEAU_ITEMID_CHILD@@@Z
    long _ParseWithStorageItem(unsigned short const *, IBindCtx *, _ITEMID_CHILD * *);
};
