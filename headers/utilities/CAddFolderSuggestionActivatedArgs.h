#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 74 member(s).
class CAddFolderSuggestionActivatedArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAddFolderSuggestionActivatedArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAddFolderSuggestionActivatedArgs@@QEAA@XZ
    CAddFolderSuggestionActivatedArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CAddFolderSuggestionActivatedArgs@@UEAAJW4AddFolderSuggestionCompleteType@AddFolderSuggestion@Internal@Windows@@@Z
    virtual long Complete(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAddFolderSuggestionActivatedArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAddFolderSuggestionActivatedArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAddFolderSuggestionActivatedArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAddFolderSuggestionActivatedArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CAddFolderSuggestionActivatedArgs@@QEAAJPEAU?$IVectorView@PEAUIStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@W4AddFolderSuggestionLibraryType@AddFolderSuggestion@Internal@5@PEAXPEAUHSTRING__@@@Z
    long RuntimeClassInitialize(WindissectOpaque *, int, void *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Arguments@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Arguments(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallingAppPackageFullName@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallingAppPackageFullName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CompleteAction@CAddFolderSuggestionActivatedArgs@@UEAAJPEAW4AddFolderSuggestionCompleteType@AddFolderSuggestion@Internal@Windows@@@Z
    virtual long get_CompleteAction(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FolderSuggestions@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAU?$IVectorView@PEAUIStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_FolderSuggestions(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LibraryType@CAddFolderSuggestionActivatedArgs@@UEAAJPEAW4AddFolderSuggestionLibraryType@AddFolderSuggestion@Internal@Windows@@@Z
    virtual long get_LibraryType(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedFolders@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAU?$IVector@PEAUIStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_SelectedFolders(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TileId@CAddFolderSuggestionActivatedArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_TileId(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAddFolderSuggestionActivatedArgs@@UEAA@XZ
    virtual ~CAddFolderSuggestionActivatedArgs();
};
