#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 52 member(s).
class StubImmersiveApplication {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBehaviorFlags@StubImmersiveApplication@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0003@@@Z
    virtual long AddBehaviorFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGhostStatusFlag@StubImmersiveApplication@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0004@@@Z
    virtual long AddGhostStatusFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BelongsToPackage@StubImmersiveApplication@@UEAAJPEBGPEAH@Z
    virtual long BelongsToPackage(unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsStronglyNamedWindow@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long ContainsStronglyNamedWindow(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@StubImmersiveApplication@@UEAAJPEAPEAG@Z
    virtual long GetApplicationId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBehaviorFlags@StubImmersiveApplication@@UEAAJPEAW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0003@@@Z
    virtual long GetBehaviorFlags(int*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCanHandleCloseRequest@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long GetCanHandleCloseRequest(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDestinationInformation@StubImmersiveApplication@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z
    virtual long GetDestinationInformation(IImmersiveApplicationWindow * *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayName@StubImmersiveApplication@@UEAAJPEAPEAG@Z
    virtual long GetDisplayName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsOccluded@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long GetIsOccluded(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManifestedOrientationPreference@StubImmersiveApplication@@UEAA?AW4SPLASHSCREEN_ORIENTATION_PREFERENCE@@XZ
    virtual int GetManifestedOrientationPreference();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMonitor@StubImmersiveApplication@@UEAAJPEAPEAUIImmersiveMonitor@@@Z
    virtual long GetMonitor(IImmersiveMonitor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackageId@StubImmersiveApplication@@UEAAJHPEAPEAG@Z
    virtual long GetPackageId(int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPersistingStateName@StubImmersiveApplication@@UEAAJPEAPEAG@Z
    virtual long GetPersistingStateName(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRect@StubImmersiveApplication@@UEAAJPEAUtagRECT@@@Z
    virtual long GetRect(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimestamps@StubImmersiveApplication@@UEAAJPEAUtagIMMAPPTIMESTAMPS@@@Z
    virtual long GetTimestamps(tagIMMAPPTIMESTAMPS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTitle@StubImmersiveApplication@@UEAAJPEAPEAG@Z
    virtual long GetTitle(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUniqueId@StubImmersiveApplication@@UEAAJPEAPEAG@Z
    virtual long GetUniqueId(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewData@StubImmersiveApplication@@UEAAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z
    virtual long GetViewData(IMMAPP_APPLICATION_VIEW_DATA *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindows@StubImmersiveApplication@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetWindows(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementGhostAnimationWaitCount@StubImmersiveApplication@@UEAAJI@Z
    virtual long IncrementGhostAnimationWaitCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCharms@StubImmersiveApplication@@UEAAJXZ
    virtual long InvokeCharms();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationWindowStronglyNamed@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsApplicationWindowStronglyNamed(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualByApp@StubImmersiveApplication@@UEAAJPEAUIImmersiveApplication@@PEAH@Z
    virtual long IsEqualByApp(IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualByAppId@StubImmersiveApplication@@UEAAJPEBGPEAH@Z
    virtual long IsEqualByAppId(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEqualByHwnd@StubImmersiveApplication@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsEqualByHwnd(HWND__*, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsForeground@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsForeground(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractive@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsInteractive(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQuirkEnabled@StubImmersiveApplication@@UEAAHW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0005@@@Z
    virtual int IsQuirkEnabled(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsRunning(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsServiceAvailable@StubImmersiveApplication@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@AEBU_GUID@@PEAH@Z
    virtual long IsServiceAvailable(int, _GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSplashScreenPresented@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsSplashScreenPresented(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTitleBarDrawnByApp@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsTitleBarDrawnByApp(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsViewForSameApp@StubImmersiveApplication@@UEAAJPEAUIImmersiveApplication@@PEAH@Z
    virtual long IsViewForSameApp(IImmersiveApplication *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVisible@StubImmersiveApplication@@UEAAJPEAH@Z
    virtual long IsVisible(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyApplicationWindows@StubImmersiveApplication@@UEAAJI_K_JW4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_OPTION@@W4NOTIFY_IMMERSIVE_APPLICATION_WINDOWS_DELIVERY_TYPE@@@Z
    virtual long NotifyApplicationWindows(unsigned int, uint64_t, int64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMinSizePreferencesUpdated@StubImmersiveApplication@@UEAAJPEAUHWND__@@@Z
    virtual long OnMinSizePreferencesUpdated(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPropertyStore@StubImmersiveApplication@@UEAAJW4IMMAPPPROPERTYSTOREFLAGS@@AEBU_GUID@@PEAPEAX@Z
    virtual long OpenPropertyStore(int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@StubImmersiveApplication@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z
    virtual long QueryService(int, unsigned long, _GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBehaviorFlags@StubImmersiveApplication@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0003@@@Z
    virtual long RemoveBehaviorFlags(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveGhostStatusFlag@StubImmersiveApplication@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0004@@@Z
    virtual long RemoveGhostStatusFlag(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCloseAsync@StubImmersiveApplication@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long RequestCloseAsync(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGhostVisualStyle@StubImmersiveApplication@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0333_0001@@@Z
    virtual long SetGhostVisualStyle(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOccluded@StubImmersiveApplication@@UEAAJH@Z
    virtual long SetIsOccluded(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMonitor@StubImmersiveApplication@@UEAAJPEAUIImmersiveMonitor@@W4__MIDL___MIDL_itf_shpriv_core_0000_0333_0002@@@Z
    virtual long SetMonitor(IImmersiveMonitor *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPositionerMonitor@StubImmersiveApplication@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long SetPositionerMonitor(IImmersiveMonitor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailPreviewState@StubImmersiveApplication@@UEAAJW4IMMAPP_SETTHUMBNAIL_PREVIEW_STATE@@@Z
    virtual long SetThumbnailPreviewState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindowingEnvironmentConfig@StubImmersiveApplication@@UEAAJPEAUIUnknown@@@Z
    virtual long SetWindowingEnvironmentConfig(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInvokeBack@StubImmersiveApplication@@UEAAJPEAUIAsyncCallback@@@Z
    virtual long TryInvokeBack(IAsyncCallback *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StubImmersiveApplication@@UEAA@XZ
    virtual ~StubImmersiveApplication();
};
