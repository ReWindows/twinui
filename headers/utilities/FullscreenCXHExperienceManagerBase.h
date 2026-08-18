#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 31 member(s).
class FullscreenCXHExperienceManagerBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FullscreenCXHExperienceManagerBase@@QEAA@XZ
    FullscreenCXHExperienceManagerBase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellHostWindow@FullscreenCXHExperienceManagerBase@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetShellHostWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@FullscreenCXHExperienceManagerBase@@QEAAJAEBU_GUID@@PEBG@Z
    long Initialize(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForNotification@FullscreenCXHExperienceManagerBase@@UEAAJPEAUIFullscreenCloudExperienceManagerNotification@@@Z
    virtual long RegisterForNotification(IFullscreenCloudExperienceManagerNotification *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterShellHostComponent@FullscreenCXHExperienceManagerBase@@UEAAJPEAUIFullscreenShellHostManagerNotification@@PEBG@Z
    virtual long RegisterShellHostComponent(IFullscreenShellHostManagerNotification *, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetActive@FullscreenCXHExperienceManagerBase@@UEAAJXZ
    virtual long SetActive();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShellHostActive@FullscreenCXHExperienceManagerBase@@UEAAJXZ
    virtual long SetShellHostActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShellHostExperienceReady@FullscreenCXHExperienceManagerBase@@UEAAJPEAUHWND__@@@Z
    virtual long ShellHostExperienceReady(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@FullscreenCXHExperienceManagerBase@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterNotification@FullscreenCXHExperienceManagerBase@@UEAAJXZ
    virtual long UnRegisterNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnRegisterShellHostComponent@FullscreenCXHExperienceManagerBase@@UEAAJXZ
    virtual long UnRegisterShellHostComponent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@FullscreenCXHExperienceManagerBase@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@FullscreenCXHExperienceManagerBase@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateShellHostWindowBand@FullscreenCXHExperienceManagerBase@@IEAAJPEAUHWND__@@@Z
    long _UpdateShellHostWindowBand(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWindowPositionAndBand@FullscreenCXHExperienceManagerBase@@IEAAJPEAUHWND__@@@Z
    long _UpdateWindowPositionAndBand(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnSubscribeToServices@FullscreenCXHExperienceManagerBase@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnSubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnUnsubscribeFromServices@FullscreenCXHExperienceManagerBase@@MEAAJPEAUIServiceProvider@@@Z
    virtual long v_OnUnsubscribeFromServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnViewCreated@FullscreenCXHExperienceManagerBase@@MEAAJXZ
    virtual long v_OnViewCreated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnViewDestroyed@FullscreenCXHExperienceManagerBase@@MEAAXXZ
    virtual void v_OnViewDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_SetActive@FullscreenCXHExperienceManagerBase@@MEAAJXZ
    virtual long v_SetActive();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FullscreenCXHExperienceManagerBase@@MEAA@XZ
    virtual ~FullscreenCXHExperienceManagerBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAltTabProxyWindow@FullscreenCXHExperienceManagerBase@@AEAAXPEAUHWND__@@@Z
    void CreateAltTabProxyWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HICONFromBitmap@FullscreenCXHExperienceManagerBase@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z
    static HICON__* HICONFromBitmap(HBITMAP__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultIconForProxyWindowThumbnail@FullscreenCXHExperienceManagerBase@@CAJPEAUHWND__@@@Z
    static long SetDefaultIconForProxyWindowThumbnail(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLayoutManager@FullscreenCXHExperienceManagerBase@@AEAAJPEAPEAUIImmersiveLayout@@@Z
    long _GetLayoutManager(IImmersiveLayout * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnClientWindowReadyForPresentationChanged@FullscreenCXHExperienceManagerBase@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z
    long _OnClientWindowReadyForPresentationChanged(::Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, ::Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnViewEvent@FullscreenCXHExperienceManagerBase@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z
    long _OnViewEvent(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_AltTabProxyWndProc@FullscreenCXHExperienceManagerBase@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_AltTabProxyWndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
