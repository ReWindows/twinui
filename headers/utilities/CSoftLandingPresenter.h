#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 30 member(s).
namespace Windows::Internal::UI::SoftLanding {
class CSoftLandingPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@QEAAJXZ
    long Activate();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@QEAA@XZ
    CSoftLandingPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandlePropertyChangedEvent@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIUIAutomationElement@@HUtagVARIANT@@@Z
    virtual long HandlePropertyChangedEvent(IUIAutomationElement *, int, tagVARIANT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleStructureChangedEvent@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIUIAutomationElement@@W4StructureChangeType@@PEAUtagSAFEARRAY@@@Z
    virtual long HandleStructureChangedEvent(IUIAutomationElement *, int, tagSAFEARRAY *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIInspectable@@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIToastDismissedEventArgs@735@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastDismissedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAAJPEAUIToastNotification@Notifications@35@PEAUIToastFailedEventArgs@735@@Z
    virtual long Invoke(::Windows::UI::Notifications::IToastNotification *, ::Windows::UI::Notifications::IToastFailedEventArgs *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPersistentCampaign@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@QEAA_NXZ
    bool IsPersistentCampaign();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@QEAAJPEAUSOFTLANDING_CREATIVE@2345@PEAUICourtesyEngine@2345@I@Z
    long RuntimeClassInitialize(::Windows::Internal::UI::SoftLanding::SOFTLANDING_CREATIVE *, ::Windows::Internal::UI::SoftLanding::ICourtesyEngine *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Withdraw@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@QEAAJXZ
    long Withdraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Withdraw@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@SAJPEAUHSTRING__@@@Z
    static long Withdraw(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@UEAA@XZ
    virtual ~CSoftLandingPresenter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAA_NXZ
    bool IsVisible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnchorRect@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAA_NAEBUtagRECT@@@Z
    bool SetAnchorRect(tagRECT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CleanupNotification@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _CleanupNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Dismiss@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJW4ToastDismissalReason@Notifications@35@@Z
    long _Dismiss(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Failure@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIToastFailedEventArgs@Notifications@35@@Z
    long _Failure(::Windows::UI::Notifications::IToastFailedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsCreativeWithdrawn@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAA_NXZ
    bool _IsCreativeWithdrawn();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PresentCreative@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _PresentCreative();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterForAutomationPropertyChanges@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@W4TreeScope@@@Z
    long _RegisterForAutomationPropertyChanges(IUIAutomation *, IUIAutomationElement *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterToastEventHandlers@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIToastNotification@Notifications@35@@Z
    long _RegisterToastEventHandlers(::Windows::UI::Notifications::IToastNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RegisterUIAElement@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUHWND__@@PEAUIUIAutomation@@PEAUIUIAutomationElement@@@Z
    long _RegisterUIAElement(HWND__*, IUIAutomation *, IUIAutomationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetState@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJW4ItemState@2345@@Z
    long _SetState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowNotificationCenterMessage@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _ShowNotificationCenterMessage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterForAutomationPropertyChanges@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@PEAUIUIAutomationElement@@@Z
    long _UnregisterForAutomationPropertyChanges(IUIAutomation *, IUIAutomationElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterToastEventHandlers@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _UnregisterToastEventHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UnregisterUIAElement@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJXZ
    long _UnregisterUIAElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdatePositionForUIAutomationChange@CSoftLandingPresenter@SoftLanding@UI@Internal@Windows@@AEAAJPEAUIUIAutomation@@@Z
    long _UpdatePositionForUIAutomationChange(IUIAutomation *);
};
} // namespace Windows::Internal::UI::SoftLanding
