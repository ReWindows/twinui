#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 10 member(s).
class CTileActivateBehavior {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCallbackFilters@CTileActivateBehavior@@UEAAJPEAW4Flags@DuiBehaviorFilters@@@Z
    virtual long GetCallbackFilters(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CTileActivateBehavior@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CTileActivateBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CTileActivateBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@CTileActivateBehavior@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CTileActivateBehavior@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FireTileActivatedEvent@CTileActivateBehavior@@AEAAXW4TILE_ACTIVATION_TYPE@@W4ClickDevice@TouchButton@DirectUI@@PEBUtagPOINT@@@Z
    void _FireTileActivatedEvent(int, int, tagPOINT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TileActivationTypeFromInputModifiers@CTileActivateBehavior@@AEAA?AW4TILE_ACTIVATION_TYPE@@I@Z
    int _TileActivationTypeFromInputModifiers(unsigned int);
};
