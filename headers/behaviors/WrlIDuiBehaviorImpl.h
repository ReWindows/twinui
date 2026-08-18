#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class WrlIDuiBehaviorImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@WrlIDuiBehaviorImpl@@UEAAJPEAVValue@DirectUI@@@Z
    virtual long Init(::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAttach@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnAttach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDetach@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@@Z
    virtual long OnDetach(::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayNodeCallback@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEAUEventMsg@@@Z
    virtual long OnDisplayNodeCallback(::DirectUI::Element *, EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDoLayout@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@HH@Z
    virtual long OnDoLayout(::DirectUI::Element *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEvent@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual long OnEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetAdjacent@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@HPEBUNavReference@3@KPEAPEAV23@@Z
    virtual long OnGetAdjacent(::DirectUI::Element *, int, ::DirectUI::NavReference const *, unsigned long, ::DirectUI::Element * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHosted@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInput@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEAUInputEvent@3@@Z
    virtual long OnInput(::DirectUI::Element *, ::DirectUI::InputEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyFocusMoved@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@00@Z
    virtual long OnKeyFocusMoved(::DirectUI::Element *, ::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaint@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEAUHDC__@@PEBUtagRECT@@2@Z
    virtual long OnPaint(::DirectUI::Element *, HDC__*, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2@Z
    virtual long OnPropertyChanged(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanging@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@PEBUPropertyInfo@3@HPEAVValue@3@2PEAH@Z
    virtual long OnPropertyChanging(::DirectUI::Element *, ::DirectUI::PropertyInfo const *, int, ::DirectUI::Value *, ::DirectUI::Value *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnHosted@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@0@Z
    virtual long OnUnHosted(::DirectUI::Element *, ::DirectUI::Element *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateDesiredSize@WrlIDuiBehaviorImpl@@UEAAJPEAVElement@DirectUI@@HHPEAVSurface@3@PEAUtagSIZE@@@Z
    virtual long OnUpdateDesiredSize(::DirectUI::Element *, int, int, ::DirectUI::Surface *, tagSIZE *);
};
