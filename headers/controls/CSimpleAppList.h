#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
// Base evidence: DirectUI::ItemList (likely; classinfo-template-instantiation).
class CSimpleAppList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassInfoW@CSimpleAppList@@UEAAPEAUIClassInfo@DirectUI@@XZ
    virtual ::DirectUI::IClassInfo * GetClassInfoW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeElement@CSimpleAppList@@QEAAJPEAVElement@DirectUI@@PEAPEAUREGISTERED_NCB_ENTRY@@IW4SIMPLE_APPLIST_FLAGS@@@Z
    long InitializeElement(::DirectUI::Element *, REGISTERED_NCB_ENTRY * *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeElement@CSimpleAppList@@QEAAJW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEAVElement@DirectUI@@W4SIMPLE_APPLIST_FLAGS@@@Z
    long InitializeElement(int, ::DirectUI::Element *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@CSimpleAppList@@SAJXZ
    static long Register();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WndProc@CSimpleAppList@@QEAA_NI_K_J@Z
    bool WndProc(unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSimpleAppList@@UEAA@XZ
    virtual ~CSimpleAppList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePackageElement@CSimpleAppList@@AEAAJPEBGPEAVCSimpleUserDefaultLocaleCaseInsensitiveStringArray@@PEAPEAVElement@DirectUI@@@Z
    long _CreatePackageElement(unsigned short const *, CSimpleUserDefaultLocaleCaseInsensitiveStringArray *, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeElementInternal@CSimpleAppList@@AEAAJPEAVElement@DirectUI@@@Z
    long _InitializeElementInternal(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnChange@CSimpleAppList@@AEAAXJPEBU_ITEMIDLIST_ABSOLUTE@@0@Z
    void _OnChange(long, _ITEMIDLIST_ABSOLUTE const *, _ITEMIDLIST_ABSOLUTE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetEmptyListMessage@CSimpleAppList@@AEAAX_N@Z
    void _SetEmptyListMessage(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_SortItemsProc@CSimpleAppList@@CAHPEBX0@Z
    static int _s_SortItemsProc(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitializeList@CSimpleAppList@@CAKPEAX@Z
    static unsigned long s_InitializeList(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitializeListWithEntries@CSimpleAppList@@CAKPEAX@Z
    static unsigned long s_InitializeListWithEntries(void *);
};
