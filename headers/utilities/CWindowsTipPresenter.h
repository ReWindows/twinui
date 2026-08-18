#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 30 member(s).
namespace Windows::Internal::UI::WindowsTip {
class CWindowsTipPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@QEAAJXZ
    long Activate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@QEAA@XZ
    CWindowsTipPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChangedEvent@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAAJPEAUIUIAutomationElement@@HUtagVARIANT@@@Z
    virtual long HandlePropertyChangedEvent(IUIAutomationElement *, int, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleStructureChangedEvent@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAAJPEAUIUIAutomationElement@@W4StructureChangeType@@PEAUtagSAFEARRAY@@@Z
    virtual long HandleStructureChangedEvent(IUIAutomationElement *, int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIInspectable@@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIToastDismissedEventArgs@735@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastDismissedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIToastFailedEventArgs@735@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastFailedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@QEAAJPEBG000@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Withdraw@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@QEAAJXZ
    long Withdraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Withdraw@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@SAJPEAUHSTRING__@@@Z
    static long Withdraw(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@UEAA@XZ
    virtual ~CWindowsTipPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupNotification@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJXZ
    long CleanupNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dismiss@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJW4ToastDismissalReason@Notifications@35@@Z
    long Dismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Failure@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUIToastFailedEventArgs@Notifications@35@@Z
    long Failure(::Windows::UI::Notifications::IToastFailedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCreativeWithdrawn@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAA_NXZ
    bool IsCreativeWithdrawn();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAA_NXZ
    bool IsVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PresentCreative@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJXZ
    long PresentCreative();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEventHandlers@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUIToastNotification@Notifications@35@@Z
    long RegisterEventHandlers(::Windows::UI::Notifications::IToastNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForAutomationPropertyChanges@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@W4TreeScope@@@Z
    long RegisterForAutomationPropertyChanges(IUIAutomation *, IUIAutomationElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUIAElement@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUHWND__@@PEAUIUIAutomation@@PEAUIUIAutomationElement@@@Z
    long RegisterUIAElement(HWND__*, IUIAutomation *, IUIAutomationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReportInteraction@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJW4TargetedContentInteraction@TargetedContent@Services@5@@Z
    long ReportInteraction(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorRect@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAA_NAEBUtagRECT@@@Z
    bool SetAnchorRect(tagRECT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJW4ItemState@SoftLanding@345@@Z
    long SetState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowNotificationCenterMessage@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJXZ
    long ShowNotificationCenterMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEventHandlers@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJXZ
    long UnregisterEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForAutomationPropertyChanges@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@@Z
    long UnregisterForAutomationPropertyChanges(IUIAutomation *, IUIAutomationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterUIAElement@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJXZ
    long UnregisterUIAElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionForUIAutomationChange@CWindowsTipPresenter@WindowsTip@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@@Z
    long UpdatePositionForUIAutomationChange(IUIAutomation *);
};
} // namespace Windows::Internal::UI::WindowsTip
