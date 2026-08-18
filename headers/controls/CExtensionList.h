#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CExtensionList {
public:
    class ExtensionCompare;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExtensionList@@QEAA@XZ
    CExtensionList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CExtensionList@@SAJPEBG0AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, unsigned short const *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CExtensionList@@UEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CExtensionList@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFilteredAndSortedExtensionList@CExtensionList@@UEAAJPEAUICondition@@PEAUSORTCOLUMN@@IIPEAUIObjectArray@@PEAPEAUIExtensionList@@@Z
    virtual long GetFilteredAndSortedExtensionList(ICondition *, SORTCOLUMN *, unsigned int, unsigned int, IObjectArray *, IExtensionList * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateLastWrite@CExtensionList@@UEAAJW4ExtensionListStalenessFlags@@@Z
    virtual long InvalidateLastWrite(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStale@CExtensionList@@UEAAJW4ExtensionListStalenessFlags@@PEAH@Z
    virtual long IsStale(int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshUsageData@CExtensionList@@UEAAJXZ
    virtual long RefreshUsageData();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExtensionList@@UEAA@XZ
    virtual ~CExtensionList();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLastExtensionCatalogWriteTime@CExtensionList@@AEAAJPEAU_FILETIME@@@Z
    long _GetLastExtensionCatalogWriteTime(_FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CExtensionList@@AEAAJPEBG0@Z
    long _Initialize(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeWithFilterAndSortOptions@CExtensionList@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIExtensionListItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIExtensionListItem@@@WRL@Microsoft@@@@@@PEAUICondition@@PEAUSORTCOLUMN@@IIPEAUIObjectArray@@@Z
    long _InitializeWithFilterAndSortOptions(WindissectOpaque &, ICondition *, SORTCOLUMN *, unsigned int, unsigned int, IObjectArray *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RecordUsageDataLastWriteTime@CExtensionList@@AEAAJXZ
    long _RecordUsageDataLastWriteTime();
};
