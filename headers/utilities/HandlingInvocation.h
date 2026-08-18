#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 24 member(s).
namespace BackTelemetry {
class HandlingInvocation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptingDismissBackContractHandler@HandlingInvocation@BackTelemetry@@QEAAXW4SHELL_TARGET_IDENTIFIER@@@Z
    void AttemptingDismissBackContractHandler(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptingInAppBack@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void AttemptingInAppBack(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptingSystemBack@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void AttemptingSystemBack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DesktopModeInAppNotHandled@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void DesktopModeInAppNotHandled(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissBackContractHandlerOverridden@HandlingInvocation@BackTelemetry@@QEAAXW4SHELL_TARGET_IDENTIFIER@@W4OverrideAction@@@Z
    void DismissBackContractHandlerOverridden(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissedBackContractHandler@HandlingInvocation@BackTelemetry@@QEAAXW4SHELL_TARGET_IDENTIFIER@@@Z
    void DismissedBackContractHandler(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreDueToActiveRequest@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void IgnoreDueToActiveRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoreInAppResponse@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void IgnoreInAppResponse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InAppBack@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void InAppBack(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoActionDueToStartVisibleOnEmptyBackstack@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void NoActionDueToStartVisibleOnEmptyBackstack();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@HandlingInvocation@BackTelemetry@@QEAAXW4SHELL_TARGET_IDENTIFIER@@PEAUIApplicationView@@W4BACK_INVOKE_FLAGS@@@Z
    void StartActivity(int, IApplicationView *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SytemBackResultAppLayout@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void SytemBackResultAppLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SytemBackResultDismissLauncher@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void SytemBackResultDismissLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SytemBackResultShowLauncher@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void SytemBackResultShowLauncher();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SytemBackResultShowLauncherNoop@HandlingInvocation@BackTelemetry@@QEAAXXZ
    void SytemBackResultShowLauncherNoop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabletModeInAppNotHandled@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void TabletModeInAppNotHandled(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToCurrentThread@HandlingInvocation@BackTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToCurrentThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransferToMember@HandlingInvocation@BackTelemetry@@QEAA?AV12@XZ
    WindissectOpaque TransferToMember();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInAppFailed@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void TryInAppFailed(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnexpectedAppResponse@HandlingInvocation@BackTelemetry@@QEAAXPEAUIApplicationView@@@Z
    void UnexpectedAppResponse(IApplicationView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HandlingInvocation@BackTelemetry@@QEAA@XZ
    ~HandlingInvocation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@HandlingInvocation@BackTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@HandlingInvocation@BackTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace BackTelemetry
