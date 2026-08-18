#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CExtensionListContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryContextMenu@CExtensionListContextMenu@@UEAAJPEAUIExtensionListItem@@W4tagEXTENSION_LIST_CONTEXT_MENU_COMMANDS@@PEAUIPopupMenu@Popups@UI@Windows@@@Z
    virtual long QueryContextMenu(IExtensionListItem *, int, ::Windows::UI::Popups::IPopupMenu *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddHideUnhideVerb@CExtensionListContextMenu@@AEAAJPEAUIExtensionListItem@@V?$ComPtr@U?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long _AddHideUnhideVerb(IExtensionListItem *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddPinUnpinVerb@CExtensionListContextMenu@@AEAAJPEAUIExtensionListItem@@V?$ComPtr@U?$IVector@PEAUIUICommand@Popups@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z
    long _AddPinUnpinVerb(IExtensionListItem *, WindissectOpaque);
};
