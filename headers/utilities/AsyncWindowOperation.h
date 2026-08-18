#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 5 member(s).
namespace Windows::Internal {
class AsyncWindowOperation {
public:
    class CWindowData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncWindowOperation@Internal@Windows@@QEAA@AEBV012@@Z
    AsyncWindowOperation(::Windows::Internal::AsyncWindowOperation const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableWindowNow@AsyncWindowOperation@Internal@Windows@@QEAAJXZ
    long DisableWindowNow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOwner@AsyncWindowOperation@Internal@Windows@@QEAAJPEAPEAUHWND__@@@Z
    long GetOwner(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ManageStage@AsyncWindowOperation@Internal@Windows@@QEAAJW4AsyncStage@23@JAEBVCResultBase@23@@Z
    long ManageStage(int, long, ::Windows::Internal::CResultBase const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AsyncWindowOperation@Internal@Windows@@QEAA@XZ
    ~AsyncWindowOperation();
};
} // namespace Windows::Internal
