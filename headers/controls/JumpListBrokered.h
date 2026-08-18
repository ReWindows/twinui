#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
namespace Windows::Internal::UI::StartScreen {
class JumpListBrokered {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@JumpListBrokered@StartScreen@UI@Internal@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@JumpListBrokered@StartScreen@UI@Internal@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0JumpListBrokered@StartScreen@UI@Internal@Windows@@QEAA@XZ
    JumpListBrokered();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@JumpListBrokered@StartScreen@UI@Internal@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long Save(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1JumpListBrokered@StartScreen@UI@Internal@Windows@@UEAA@XZ
    virtual ~JumpListBrokered();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateJumpListItemForShellObject@JumpListBrokered@StartScreen@UI@Internal@Windows@@AEAAJPEAUIUnknown@@PEAPEAUIJumpListItem@235@@Z
    long CreateJumpListItemForShellObject(IUnknown *, ::Windows::UI::StartScreen::IJumpListItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShellLinkFromArgumentsJumpListItem@JumpListBrokered@StartScreen@UI@Internal@Windows@@AEAAJPEAUIJumpListItem@235@PEAPEAUIShellLinkW@@@Z
    long CreateShellLinkFromArgumentsJumpListItem(::Windows::UI::StartScreen::IJumpListItem *, IShellLinkW * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShellLinkSeparator@JumpListBrokered@StartScreen@UI@Internal@Windows@@AEAAJPEAUIJumpListItem@235@PEAPEAUIShellLinkW@@@Z
    long CreateShellLinkSeparator(::Windows::UI::StartScreen::IJumpListItem *, IShellLinkW * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShellObjectFromJumpListItem@JumpListBrokered@StartScreen@UI@Internal@Windows@@AEAAJPEAUIJumpListItem@235@PEAPEAUIUnknown@@@Z
    long CreateShellObjectFromJumpListItem(::Windows::UI::StartScreen::IJumpListItem *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadJumpList@JumpListBrokered@StartScreen@UI@Internal@Windows@@AEAAJXZ
    long LoadJumpList();
};
} // namespace Windows::Internal::UI::StartScreen
