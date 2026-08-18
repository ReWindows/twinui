#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 9 member(s).
namespace ShellExperienceHelpers::Internal {
class ProxyModalWindow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ProxyModalWindow@Internal@ShellExperienceHelpers@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableForegroundTransferring@ProxyModalWindow@Internal@ShellExperienceHelpers@@UEAAXXZ
    virtual void EnableForegroundTransferring();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProxyModalWindow@Internal@ShellExperienceHelpers@@QEAA@XZ
    ProxyModalWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ProxyModalWindow@Internal@ShellExperienceHelpers@@QEAAJPEAUHWND__@@0PEAUIPrivilegedForegroundOperations@@@Z
    long RuntimeClassInitialize(HWND__*, HWND__*, IPrivilegedForegroundOperations *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProxyModalWindow@Internal@ShellExperienceHelpers@@UEAA@XZ
    virtual ~ProxyModalWindow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@ProxyModalWindow@Internal@ShellExperienceHelpers@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
} // namespace ShellExperienceHelpers::Internal
