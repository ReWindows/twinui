#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
namespace Windows::Internal::UI::StartScreen {
class JumpListBrokeredStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadCurrent@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@PEAPEAUIJumpListBrokered@2345@@Z
    virtual long LoadCurrent(HSTRING__* *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpListBrokeredStatics@StartScreen@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace Windows::Internal::UI::StartScreen
