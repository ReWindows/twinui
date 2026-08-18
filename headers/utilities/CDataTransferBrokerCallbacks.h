#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 51 member(s).
class CDataTransferBrokerCallbacks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateSharingTarget@CDataTransferBrokerCallbacks@@UEAAJPEAU_GUID@@PEAUSHARING_ACTIVATION_INFO@@PEAUIInspectable@@@Z
    virtual long ActivateSharingTarget(_GUID *, SHARING_ACTIVATION_INFO *, IInspectable *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDataTransferBrokerCallbacks@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDataTransferBrokerCallbacks@@QEAA@XZ
    CDataTransferBrokerCallbacks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDesktopForProtectedContent@CDataTransferBrokerCallbacks@@UEAAJPEAJPEAPEAG@Z
    virtual long CheckDesktopForProtectedContent(long *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CDataTransferBrokerCallbacks@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuickLinkInfoAt@CDataTransferBrokerCallbacks@@UEAAJKPEAUQUICK_LINK_INFO_PRIV@@@Z
    virtual long GetQuickLinkInfoAt(unsigned long, QUICK_LINK_INFO_PRIV *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuickLinksCount@CDataTransferBrokerCallbacks@@UEAAJPEAK@Z
    virtual long GetQuickLinksCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CDataTransferBrokerCallbacks@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScreenshotDataPackage@CDataTransferBrokerCallbacks@@UEAAJPEAUIDataTransferBroker@@PEAPEAUIDataPackage@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long GetScreenshotDataPackage(IDataTransferBroker *, ::Windows::ApplicationModel::DataTransfer::IDataPackage * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetAppPID@CDataTransferBrokerCallbacks@@UEAAJPEAK@Z
    virtual long GetTargetAppPID(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CDataTransferBrokerCallbacks@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@CDataTransferBrokerCallbacks@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDataTransferBrokerCallbacks@@UEAAJPEAUHWND__@@KPEAPEAUISharePlatformHost@@@Z
    virtual long Initialize(HWND__*, unsigned long, ISharePlatformHost * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationReady@CDataTransferBrokerCallbacks@@UEAAXXZ
    virtual void OnHostedApplicationReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationTerminated@CDataTransferBrokerCallbacks@@UEAAXW4APP_TERMINATION_REASON@@@Z
    virtual void OnHostedApplicationTerminated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowHosted@CDataTransferBrokerCallbacks@@UEAAXPEAUHWND__@@@Z
    virtual void OnWindowHosted(HWND__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDataTransferBrokerCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CDataTransferBrokerCallbacks@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDataTransferBrokerCallbacks@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveQuickLink@CDataTransferBrokerCallbacks@@UEAAJPEBG000@Z
    virtual long RemoveQuickLink(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RetrieveQuickLinks@CDataTransferBrokerCallbacks@@UEAAJPEAUIDataTransferBroker@@@Z
    virtual long RetrieveQuickLinks(IDataTransferBroker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveQuickLink@CDataTransferBrokerCallbacks@@UEAAJPEBG000KPEAUIQuickLink@ShareTarget@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long SaveQuickLink(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned long, ::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleScreenshotAndInvokeTarget@CDataTransferBrokerCallbacks@@UEAAJPEAUIDataTransferBroker@@@Z
    virtual long ScheduleScreenshotAndInvokeTarget(IDataTransferBroker *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPopupWindow@CDataTransferBrokerCallbacks@@UEAAJPEAUIPopupBase@@@Z
    virtual long SetPopupWindow(IPopupBase *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@CDataTransferBrokerCallbacks@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@CDataTransferBrokerCallbacks@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AttachToBridgeWindow@CDataTransferBrokerCallbacks@@AEAAJPEAUIHostedApplicationFrameWindow@@PEAUIPopupWindow@@@Z
    long _AttachToBridgeWindow(IHostedApplicationFrameWindow *, IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFilterCondition@CDataTransferBrokerCallbacks@@AEAAJPEAUIDataTransferBroker@@PEAPEAUICondition@@@Z
    long _CreateFilterCondition(IDataTransferBroker *, ICondition * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFrameWindow@CDataTransferBrokerCallbacks@@AEAAJPEBGPEAPEAUHWND__@@PEAPEAUIPopupWindow@@@Z
    long _CreateFrameWindow(unsigned short const *, HWND__* *, IPopupWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TakeScreenshotAndInvokeTarget@CDataTransferBrokerCallbacks@@AEAAJPEAUIDataTransferBroker@@@Z
    long _TakeScreenshotAndInvokeTarget(IDataTransferBroker *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDataTransferBrokerCallbacks@@EEAA@XZ
    virtual ~CDataTransferBrokerCallbacks();
};
