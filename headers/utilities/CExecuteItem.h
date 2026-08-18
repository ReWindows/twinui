#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class CExecuteItem {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExecuteItem@@QEAA@PEAUIShellItem@@@Z
    CExecuteItem(IShellItem *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CExecuteItem@@QEAAJXZ
    long Execute();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInvokePointFromHWND@CExecuteItem@@QEAAXPEAUHWND__@@@Z
    void SetInvokePointFromHWND(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CExecuteItem@@QEAA@XZ
    ~CExecuteItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetContextMenu@CExecuteItem@@AEAAJPEAPEAUIContextMenu@@@Z
    long _GetContextMenu(IContextMenu * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitMembers@CExecuteItem@@AEAAXXZ
    void _InitMembers();
};
