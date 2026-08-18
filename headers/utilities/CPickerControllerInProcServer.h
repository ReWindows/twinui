#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
class CPickerControllerInProcServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CPickerControllerInProcServer@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterModalLoopAndGetResults@CPickerControllerInProcServer@@UEAAJPEAUHWND__@@PEBUPICKER_PARAMETERS@@PEBUPICKER_CALLER_INFORMATION@@PEAUPICKER_RESULTS@@@Z
    virtual long EnterModalLoopAndGetResults(HWND__*, PICKER_PARAMETERS const *, PICKER_CALLER_INFORMATION const *, PICKER_RESULTS *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerControllerInProcServer@@UEAA@XZ
    virtual ~CPickerControllerInProcServer();
};
