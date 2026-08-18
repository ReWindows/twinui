#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CExtensionStateManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendToPinnedList@CExtensionStateManager@@UEAAJPEAUIExtensionListItem@@PEAUEXTENSION_STATE@@@Z
    virtual long AppendToPinnedList(IExtensionListItem *, EXTENSION_STATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CExtensionStateManager@@SAJPEBGPEAUHSTRING__@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, HSTRING__*, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionState@CExtensionStateManager@@UEAAJPEAUIExtensionListItem@@PEAUEXTENSION_STATE@@@Z
    virtual long GetExtensionState(IExtensionListItem *, EXTENSION_STATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertToPinnedList@CExtensionStateManager@@UEAAJPEAUIExtensionListItem@@0PEAUEXTENSION_STATE@@@Z
    virtual long InsertToPinnedList(IExtensionListItem *, IExtensionListItem *, EXTENSION_STATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromPinnedList@CExtensionStateManager@@UEAAJPEAUIExtensionListItem@@PEAUEXTENSION_STATE@@@Z
    virtual long RemoveFromPinnedList(IExtensionListItem *, EXTENSION_STATE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHiddenState@CExtensionStateManager@@UEAAJPEAUIExtensionListItem@@HPEAUEXTENSION_STATE@@@Z
    virtual long SetHiddenState(IExtensionListItem *, int, EXTENSION_STATE *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CExtensionStateManager@@AEAAJPEBGPEAUHSTRING__@@@Z
    long _Initialize(unsigned short const *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadExtensionState@CExtensionStateManager@@AEAAJPEBGPEAUEXTENSION_STATE@@@Z
    long _LoadExtensionState(unsigned short const *, EXTENSION_STATE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LoadSortedPinnedList@CExtensionStateManager@@AEAAJPEAV?$CCoSimpleArray@UEXTENSION_STATE@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UEXTENSION_STATE@@@@@@PEAUIExtensionListItem@@@Z
    long _LoadSortedPinnedList(WindissectOpaque *, IExtensionListItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SaveExtensionState@CExtensionStateManager@@AEAAJPEBUEXTENSION_STATE@@@Z
    long _SaveExtensionState(EXTENSION_STATE const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExtensionStateManager@@EEAA@XZ
    virtual ~CExtensionStateManager();
};
