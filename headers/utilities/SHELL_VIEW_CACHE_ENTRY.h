#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 3 member(s).
namespace CPickerController {
class SHELL_VIEW_CACHE_ENTRY {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SHELL_VIEW_CACHE_ENTRY@CPickerController@@QEAA@PEAUIShellItem@@PEAUIShellView@@@Z
    SHELL_VIEW_CACHE_ENTRY(IShellItem *, IShellView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SHELL_VIEW_CACHE_ENTRY@CPickerController@@QEAA@XZ
    ~SHELL_VIEW_CACHE_ENTRY();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Compare@SHELL_VIEW_CACHE_ENTRY@CPickerController@@AEBAHAEBU12@@Z
    int _Compare(WindissectOpaque const &) const;
};
} // namespace CPickerController
