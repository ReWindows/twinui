#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
class CExtensionListContextMenuBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@CExtensionListContextMenuBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CExtensionListContextMenuBehavior@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CExtensionListContextMenuBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CExtensionListContextMenuBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CExtensionListContextMenuBehavior@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleContextMenuEvent@CExtensionListContextMenuBehavior@@AEAAXAEBUTileContextMenuEvent@@@Z
    void _HandleContextMenuEvent(TileContextMenuEvent const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PinElement@CExtensionListContextMenuBehavior@@AEAAXPEAVElement@DirectUI@@@Z
    void _PinElement(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowMenu@CExtensionListContextMenuBehavior@@AEAAJPEAUIPopupMenu@Popups@UI@Windows@@AEBUtagRECT@@@Z
    long _ShowMenu(::Windows::UI::Popups::IPopupMenu *, tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnpinElement@CExtensionListContextMenuBehavior@@AEAAXPEAVElement@DirectUI@@@Z
    void _UnpinElement(::DirectUI::Element *);
};
