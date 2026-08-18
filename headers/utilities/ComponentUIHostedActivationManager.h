#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 37 member(s).
class ComponentUIHostedActivationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateHostedApplication@ComponentUIHostedActivationManager@@UEAAJW4ACTIVATEOPTIONSINTERNAL@@PEBUtagRECT@@PEBG2PEAUIUnknown@@@Z
    virtual long ActivateHostedApplication(int, tagRECT const *, unsigned short const *, unsigned short const *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppNameLoaded@ComponentUIHostedActivationManager@@UEAAJPEBGH@Z
    virtual long AppNameLoaded(unsigned short const *, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentUIHostedActivationManager@@QEAA@XZ
    ComponentUIHostedActivationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@ComponentUIHostedActivationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentImageLocationInScreenCoordinates@ComponentUIHostedActivationManager@@UEAAJPEAUtagRECT@@@Z
    virtual long GetCurrentImageLocationInScreenCoordinates(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrientationPreference@ComponentUIHostedActivationManager@@UEAAJPEAW4SPLASHSCREEN_ORIENTATION_PREFERENCE@@@Z
    virtual long GetOrientationPreference(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@ComponentUIHostedActivationManager@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageLoaded@ComponentUIHostedActivationManager@@UEAAJW4SPLASHSCREEN_IMAGE_TYPE@@PEAUISharedBitmap@@@Z
    virtual long ImageLoaded(int, ISharedBitmap *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComponentUIHostedActivationManager@@UEAAJPEAUIDCompositionDesktopDevice@@PEAUHWND__@@W4SPLASHSCREEN_IMAGE_TYPE@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@PEAUIDXGIDevice1@@PEAPEAUIHostedApplicationFrameWindow@@@Z
    virtual long Initialize(IDCompositionDesktopDevice *, HWND__*, int, int, IDXGIDevice1*, IHostedApplicationFrameWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ComponentUIHostedActivationManager@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadImageW@ComponentUIHostedActivationManager@@UEAAJXZ
    virtual long LoadImageW();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@ComponentUIHostedActivationManager@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationEnd@ComponentUIHostedActivationManager@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComponentTerminated@ComponentUIHostedActivationManager@@UEAAXXZ
    virtual void OnComponentTerminated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewSizeChange@ComponentUIHostedActivationManager@@UEAAJUtagRECT@@@Z
    virtual long OnViewSizeChange(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@ComponentUIHostedActivationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActivationResult@ComponentUIHostedActivationManager@@UEAAJJ@Z
    virtual long SetActivationResult(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@ComponentUIHostedActivationManager@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@ComponentUIHostedActivationManager@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetImageSize@ComponentUIHostedActivationManager@@UEAAJW4SPLASHSCREEN_IMAGE_TYPE@@@Z
    virtual long SetImageSize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@ComponentUIHostedActivationManager@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@ComponentUIHostedActivationManager@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@ComponentUIHostedActivationManager@@UEAAJXZ
    virtual long TransitionToApp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@ComponentUIHostedActivationManager@@AEAAJPEAUIInspectable@@@Z
    long ActivateApplication(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAddComponentSite@ComponentUIHostedActivationManager@@AEAAJXZ
    long CreateAndAddComponentSite();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWindowFactory@ComponentUIHostedActivationManager@@AEAAJPEAPEAUIInspectable@@@Z
    long CreateWindowFactory(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DuplicateVisualHandles@ComponentUIHostedActivationManager@@AEAAJXZ
    long DuplicateVisualHandles();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureApplicationActivated@ComponentUIHostedActivationManager@@AEAAJXZ
    long EnsureApplicationActivated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitHostTargetAndRootVisual@ComponentUIHostedActivationManager@@AEAAJXZ
    long InitHostTargetAndRootVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeActivationPropertySetAndSerialize@ComponentUIHostedActivationManager@@AEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    long InitializeActivationPropertySetAndSerialize(::Windows::Storage::Streams::IBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeFireAppReady@ComponentUIHostedActivationManager@@AEAAXXZ
    void MaybeFireAppReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResizeSplashScreen@ComponentUIHostedActivationManager@@AEAAJUtagRECT@@@Z
    long ResizeSplashScreen(tagRECT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@ComponentUIHostedActivationManager@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentUIHostedActivationManager@@EEAA@XZ
    virtual ~ComponentUIHostedActivationManager();
};
