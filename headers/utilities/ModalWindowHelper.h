#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ShellExperienceHelpers {
class ModalWindowHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartModal@ModalWindowHelper@ShellExperienceHelpers@@QEAAJPEAUHWND__@@0W4StartModalFlags@12@PEAUIPrivilegedWindowOwnershipOperations@@PEAUIPrivilegedForegroundOperations@@@Z
    long StartModal(HWND__*, HWND__*, int, IPrivilegedWindowOwnershipOperations *, IPrivilegedForegroundOperations *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopModal@ModalWindowHelper@ShellExperienceHelpers@@QEAAXW4StopModalFlags@12@PEAUIPrivilegedForegroundOperations@@@Z
    void StopModal(int, IPrivilegedForegroundOperations *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModalWindowHelper@ShellExperienceHelpers@@QEAA@XZ
    ~ModalWindowHelper();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetForegroundWindowWithPrivilegedOperation@ModalWindowHelper@ShellExperienceHelpers@@AEAA_NPEAUIPrivilegedForegroundOperations@@PEAUHWND__@@@Z
    bool SetForegroundWindowWithPrivilegedOperation(IPrivilegedForegroundOperations *, HWND__*);
};
} // namespace ShellExperienceHelpers
