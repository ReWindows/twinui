#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 63 member(s).
class ComponentUIHostedAppFrame {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ComponentUIHostedAppFrame@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowIsReady@ComponentUIHostedAppFrame@@UEAAJXZ
    virtual long AppWindowIsReady();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComponentUIHostedAppFrame@@QEAA@XZ
    ComponentUIHostedAppFrame();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFrame@ComponentUIHostedAppFrame@@UEAAJPEBUtagRECT@@PEAUHWND__@@@Z
    virtual long CreateFrame(tagRECT const *, HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBridgeWindow@ComponentUIHostedAppFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetBridgeWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentPosition@ComponentUIHostedAppFrame@@UEAAJPEAUtagRECT@@@Z
    virtual long GetContentPosition(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameWindow@ComponentUIHostedAppFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetFrameWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@ComponentUIHostedAppFrame@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasFocusIO@ComponentUIHostedAppFrame@@UEAAJXZ
    virtual long HasFocusIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideApplication@ComponentUIHostedAppFrame@@UEAAJW4APP_TRANSITION_TYPE@@@Z
    virtual long HideApplication(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeBridge@ComponentUIHostedAppFrame@@UEAAJAEBU_GUID@@@Z
    virtual long InitializeBridge(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeBackNavigation@ComponentUIHostedAppFrame@@UEAAJPEAUIUnknown@@@Z
    virtual long InvokeBackNavigation(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationTerminated@ComponentUIHostedAppFrame@@UEAAHXZ
    virtual int IsApplicationTerminated();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationVisible@ComponentUIHostedAppFrame@@UEAAHXZ
    virtual int IsApplicationVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeepInputQueueDetached@ComponentUIHostedAppFrame@@UEAAJH@Z
    virtual long KeepInputQueueDetached(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationComplete@ComponentUIHostedAppFrame@@UEAAXJ@Z
    virtual void OnActivationComplete(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationCompleteWithSplashScreenCallback@ComponentUIHostedAppFrame@@UEAAXJPEAUISplashScreenPriv@@@Z
    virtual void OnActivationCompleteWithSplashScreenCallback(long, ISplashScreenPriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@ComponentUIHostedAppFrame@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ComponentUIHostedAppFrame@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RepositionComponentWindows@ComponentUIHostedAppFrame@@UEAAJPEBUtagRECT@@@Z
    virtual long RepositionComponentWindows(tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetComponentWindowSite@ComponentUIHostedAppFrame@@UEAAJPEAUICoreWindowSite@Core@UI@Windows@@@Z
    virtual long SetComponentWindowSite(::Windows::UI::Core::ICoreWindowSite *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContent@ComponentUIHostedAppFrame@@UEAAJPEAUIUnknown@@@Z
    virtual long SetContent(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEventSink@ComponentUIHostedAppFrame@@UEAAJPEAUIWeakReference@@@Z
    virtual long SetEventSink(IWeakReference *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApplication@ComponentUIHostedAppFrame@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApplication(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedWindow@ComponentUIHostedAppFrame@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTaskCompletionCategory@ComponentUIHostedAppFrame@@UEAAJW4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long SetTaskCompletionCategory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUseTopLevelWindow@ComponentUIHostedAppFrame@@UEAAJH@Z
    virtual long SetUseTopLevelWindow(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetViewWindow@ComponentUIHostedAppFrame@@UEAAJPEAUHWND__@@PEBUtagRECT@@@Z
    virtual long SetViewWindow(HWND__*, tagRECT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@ComponentUIHostedAppFrame@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowApplication@ComponentUIHostedAppFrame@@UEAAJW4APP_TRANSITION_TYPE@@PEAUHWND__@@@Z
    virtual long ShowApplication(int, HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeFocus@ComponentUIHostedAppFrame@@UEAAJXZ
    virtual long TakeFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateAcceleratorIO@ComponentUIHostedAppFrame@@UEAAJPEAUtagMSG@@@Z
    virtual long TranslateAcceleratorIO(tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UIActivateIO@ComponentUIHostedAppFrame@@UEAAJHPEAUtagMSG@@@Z
    virtual long UIActivateIO(int, tagMSG *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@ComponentUIHostedAppFrame@@UEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableAppCrashUI@ComponentUIHostedAppFrame@@AEAAJXZ
    long EnableAppCrashUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureRegisteredPLMExemption@ComponentUIHostedAppFrame@@AEAAJPEAUHWND__@@@Z
    long EnsureRegisteredPLMExemption(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideApplicationImpl@ComponentUIHostedAppFrame@@AEAAJ_N@Z
    long HideApplicationImpl(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaybeShowApp@ComponentUIHostedAppFrame@@AEAAJXZ
    long MaybeShowApp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackNavigated@ComponentUIHostedAppFrame@@AEAAJPEAUIInspectable@@_N@Z
    long OnBackNavigated(IInspectable *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTranslateAccleratorKey@ComponentUIHostedAppFrame@@AEAA_N_K_J@Z
    bool OnTranslateAccleratorKey(uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComponentUIHostedAppFrame@@EEAA@XZ
    virtual ~ComponentUIHostedAppFrame();
};
