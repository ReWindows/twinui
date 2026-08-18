#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
class CFilePickerInvoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFilePickerInvoker@@QEAA@AEAVCPickerParameters@@AEAVCCallerInformation@@H@Z
    CFilePickerInvoker(CPickerParameters &, CCallerInformation &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAndPickSingle@CFilePickerInvoker@@QEAAJPEAUHWND__@@W4ITEM_TYPE@@PEAPEAUIShellItem@@PEAPEAUIStreamedFileDataRequestedCallback@@@Z
    long ShowAndPickSingle(HWND__*, int, IShellItem * *, IStreamedFileDataRequestedCallback * *);
};
