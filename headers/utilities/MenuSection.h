#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class MenuSection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTool@MenuSection@@QEAAJAEBUInputDialMenuItem@@I@Z
    long AddTool(InputDialMenuItem const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemIndexFromId@MenuSection@@QEAAIAEBIPEA_N@Z
    unsigned int GetItemIndexFromId(unsigned int const &, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@MenuSection@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    long Initialize(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTool@MenuSection@@QEAAJAEBI@Z
    long RemoveTool(unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@MenuSection@@QEAAJUEventRegistrationToken@@@Z
    long Uninitialize(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuSection@@QEAA@XZ
    ~MenuSection();
};
