#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CAppListTileRearrangeBehavior {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@CAppListTileRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@CAppListTileRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayNodeCallback@CAppListTileRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@PEAUEventMsg@@@Z
    virtual long OnDisplayNodeCallback(::DirectUI::Element *, EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@CAppListTileRearrangeBehavior@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelRearrange@CAppListTileRearrangeBehavior@@MEAAXXZ
    virtual void CancelRearrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteRearrange@CAppListTileRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@_N@Z
    virtual void CompleteRearrange(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveRearrange@CAppListTileRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@_N@Z
    virtual void MoveRearrange(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartRearrange@CAppListTileRearrangeBehavior@@MEAAXAEBUCPoint@Geometry@@IW4RearrangeFlags@@@Z
    virtual void StartRearrange(WindissectOpaque const &, unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AdjustElementPositionForBoundsAndRails@CAppListTileRearrangeBehavior@@AEAA?AUtagPOINT@@AEBUCPoint@Geometry@@@Z
    tagPOINT _AdjustElementPositionForBoundsAndRails(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CalculateRearrangePoint@CAppListTileRearrangeBehavior@@AEAA?AUtagPOINT@@AEBUCPoint@Geometry@@@Z
    tagPOINT _CalculateRearrangePoint(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DoKeyboardRearrange@CAppListTileRearrangeBehavior@@AEAAXI@Z
    void _DoKeyboardRearrange(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReplaceElementWithPlaceholder@CAppListTileRearrangeBehavior@@AEAAJPEAVElement@DirectUI@@@Z
    long _ReplaceElementWithPlaceholder(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RestoreElementFromPlaceholder@CAppListTileRearrangeBehavior@@AEAAXPEAVElement@DirectUI@@@Z
    void _RestoreElementFromPlaceholder(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetElementLayered@CAppListTileRearrangeBehavior@@AEAAXPEAVElement@DirectUI@@_N@Z
    void _SetElementLayered(::DirectUI::Element *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePlaceholderPosition@CAppListTileRearrangeBehavior@@AEAAXAEBUCPoint@Geometry@@@Z
    void _UpdatePlaceholderPosition(WindissectOpaque const &);
};
