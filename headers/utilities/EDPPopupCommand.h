#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 7 member(s).
class EDPPopupCommand {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EDPPopupCommand@@QEAA@IPEAUIPopupCommandHandler@@@Z
    EDPPopupCommand(unsigned int, IPopupCommandHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handler@EDPPopupCommand@@UEAAJPEAPEAUIPopupCommandHandler@@@Z
    virtual long get_Handler(IPopupCommandHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ID@EDPPopupCommand@@UEAAJPEAI@Z
    virtual long get_ID(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@EDPPopupCommand@@UEAAJPEAPEAG@Z
    virtual long get_Label(unsigned short * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EDPPopupCommand@@UEAA@XZ
    virtual ~EDPPopupCommand();
};
