#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 39 member(s).
class BadgeWindowController {
public:
    class ThreadSafeData;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BadgeWindowController@@QEAA@XZ
    BadgeWindowController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCollapsedBadgePositionForView@BadgeWindowController@@UEAAJPEAUIApplicationView@@PEAUBadgePosition@@@Z
    virtual long ComputeCollapsedBadgePositionForView(IApplicationView *, BadgePosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeExpandedBadgePositionForView@BadgeWindowController@@UEAAJPEAUIApplicationView@@PEAUBadgePosition@@@Z
    virtual long ComputeExpandedBadgePositionForView(IApplicationView *, BadgePosition *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BadgeWindowController@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccessibleObject@BadgeWindowController@@UEAAJPEAUHWND__@@PEAPEAUIRawElementProviderSimple@@@Z
    virtual long GetAccessibleObject(HWND__*, IRawElementProviderSimple * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetView@BadgeWindowController@@UEAAJPEAPEAUIApplicationView@@@Z
    virtual long GetTargetView(IApplicationView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveAppPresentedWindowChanged@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ImmersiveAppPresentedWindowChanged(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSizeEnd@BadgeWindowController@@UEAAXXZ
    virtual void MoveSizeEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSizeStart@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void MoveSizeStart(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDragEnd@BadgeWindowController@@UEAAJAEBUCRect@Geometry@@@Z
    virtual long OnDragEnd(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundLost@BadgeWindowController@@UEAAXXZ
    virtual void OnForegroundLost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvoked@BadgeWindowController@@UEAAJXZ
    virtual long OnInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@BadgeWindowController@@UEAAJI@Z
    virtual long OnKeyDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMoving@BadgeWindowController@@UEAAJAEBUCRect@Geometry@@PEAU23@@Z
    virtual long OnMoving(WindissectOpaque const &, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PersistBadgeOffsetForView@BadgeWindowController@@UEAAJPEAUIApplicationView@@IW4PersistPositionFlags@@@Z
    virtual long PersistBadgeOffsetForView(IApplicationView *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@BadgeWindowController@@QEAAJPEAUIEnterpriseChromeManagerInternal@@PEAUIBadgeWindow@@@Z
    long RuntimeClassInitialize(IEnterpriseChromeManagerInternal *, IBadgeWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryMoveForegroundToBadgeWindow@BadgeWindowController@@UEAAXXZ
    virtual void TryMoveForegroundToBadgeWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewEnterpriseChromePreferenceChanged@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ViewEnterpriseChromePreferenceChanged(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewEnterpriseStatusChanged@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ViewEnterpriseStatusChanged(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewForgotten@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ViewForgotten(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewGainedForeground@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ViewGainedForeground(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewLostForeground@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void ViewLostForeground(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowPositionChanged@BadgeWindowController@@UEAAXPEAUIApplicationView@@@Z
    virtual void WindowPositionChanged(IApplicationView *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BadgeWindowController@@UEAA@XZ
    virtual ~BadgeWindowController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToView@BadgeWindowController@@AEAAJPEAUIApplicationView@@@Z
    long AttachToView(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromTargetView@BadgeWindowController@@AEAAJXZ
    long DetachFromTargetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureValidBadgeRect@BadgeWindowController@@AEAAJPEAUIApplicationView@@UCRect@Geometry@@PEAU34@@Z
    long EnsureValidBadgeRect(IApplicationView *, WindissectOpaque, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsForegroundViewOwnedToView@BadgeWindowController@@AEAA_NPEAUIApplicationView@@@Z
    bool IsForegroundViewOwnedToView(IApplicationView *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTargetView@BadgeWindowController@@AEAA_NPEAUIApplicationView@@@Z
    bool IsTargetView(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateTargetView@BadgeWindowController@@AEAAXXZ
    void ReevaluateTargetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshViewAttachment@BadgeWindowController@@AEAAJPEAUIApplicationView@@_N@Z
    long RefreshViewAttachment(IApplicationView *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldAttachToView@BadgeWindowController@@AEAA_NPEAUIApplicationView@@@Z
    bool ShouldAttachToView(IApplicationView *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDetachFromTargetView@BadgeWindowController@@AEAA_NXZ
    bool ShouldDetachFromTargetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCollapseTimer@BadgeWindowController@@AEAAJXZ
    long StartCollapseTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ToggleBadgeState@BadgeWindowController@@AEAAJ_N@Z
    long ToggleBadgeState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgePositionAndShowCollapsed@BadgeWindowController@@AEAAJXZ
    long UpdateBadgePositionAndShowCollapsed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBadgeState@BadgeWindowController@@AEAAJW4BadgeState@@@Z
    long UpdateBadgeState(int);
};
