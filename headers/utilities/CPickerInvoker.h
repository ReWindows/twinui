#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CPickerInvoker {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CPickerInvoker@@QEAAJPEAUHWND__@@PEAUPICKER_RESULTS@@@Z
    long Show(HWND__*, PICKER_RESULTS *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPickerInvoker@@UEAA@XZ
    virtual ~CPickerInvoker();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreatePickerController@CPickerInvoker@@IEAAJPEAUHWND__@@PEAPEAUIPickerController@@@Z
    long _CreatePickerController(HWND__*, IPickerController * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetPickerController@CPickerInvoker@@IEAAJPEAPEAUIPickerController@@@Z
    long _GetPickerController(IPickerController * *);
};
