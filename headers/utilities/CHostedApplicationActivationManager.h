#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 34 member(s).
class CHostedApplicationActivationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateHostedApplicationByAppID@CHostedApplicationActivationManager@@UEAAJPEBUtagRECT@@PEBG1PEAUIUnknown@@PEAPEAUIHostedApplicationFrameWindow@@@Z
    virtual long ActivateHostedApplicationByAppID(tagRECT const *, unsigned short const *, unsigned short const *, IUnknown *, IHostedApplicationFrameWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateHostedApplicationByAppIDWithOptions@CHostedApplicationActivationManager@@UEAAJW4ACTIVATEOPTIONSINTERNAL@@PEBUtagRECT@@PEBG2PEAUIUnknown@@PEAPEAUIHostedApplicationFrameWindow@@@Z
    virtual long ActivateHostedApplicationByAppIDWithOptions(int, tagRECT const *, unsigned short const *, unsigned short const *, IUnknown *, IHostedApplicationFrameWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppWindowReadyForPresentation@CHostedApplicationActivationManager@@UEAAJXZ
    virtual long AppWindowReadyForPresentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssociateActivationContext@CHostedApplicationActivationManager@@UEAAJI@Z
    virtual long AssociateActivationContext(unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostedApplicationActivationManager@@QEAA@XZ
    CHostedApplicationActivationManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSplashScreenEvents@CHostedApplicationActivationManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long CreateSplashScreenEvents(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindow@CHostedApplicationActivationManager@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHostedApplicationActivationManager@@UEAAJAEBU_GUID@@PEAUHWND__@@W4SPLASHSCREEN_IMAGE_TYPE@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long Initialize(_GUID const &, HWND__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CHostedApplicationActivationManager@@UEAAJPEBGPEBUtagRECT@@@Z
    virtual long Initialize(unsigned short const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForShellExperience@CHostedApplicationActivationManager@@UEAAJAEBU_GUID@@PEAUHWND__@@W4SPLASHSCREEN_IMAGE_TYPE@@W4PLM_TASKCOMPLETION_CATEGORY_FLAGS@@@Z
    virtual long InitializeForShellExperience(_GUID const &, HWND__*, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShellExperience@CHostedApplicationActivationManager@@UEAAJPEAH@Z
    virtual long IsShellExperience(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationBegin@CHostedApplicationActivationManager@@UEAAJPEBGW4SPLASHSCREEN_FLAGS@@PEAPEAUHWND__@@@Z
    virtual long OnActivationBegin(unsigned short const *, int, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnActivationEnd@CHostedApplicationActivationManager@@UEAAJJ_K@Z
    virtual long OnActivationEnd(long, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CHostedApplicationActivationManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeActivationTimeoutPolicy@CHostedApplicationActivationManager@@UEAAJXZ
    virtual long RevokeActivationTimeoutPolicy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindow@CHostedApplicationActivationManager@@UEAAJJ@Z
    virtual long SetAppWindow(long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAppWindowAndGetHostProcess@CHostedApplicationActivationManager@@UEAAJJPEA_K@Z
    virtual long SetAppWindowAndGetHostProcess(long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBehaviors@CHostedApplicationActivationManager@@UEAAJW4HOSTED_APPLICATION_ACTIVATION_MANAGER_BEHAVIORS@@@Z
    virtual long SetBehaviors(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedApp@CHostedApplicationActivationManager@@UEAAJPEAUIHostedApplication@@@Z
    virtual long SetHostedApp(IHostedApplication *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHostedAppWindow@CHostedApplicationActivationManager@@UEAAJPEAUHWND__@@@Z
    virtual long SetHostedAppWindow(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWindow@CHostedApplicationActivationManager@@UEAAJPEAUHWND__@@@Z
    virtual long SetWindow(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldActivateWithTimeoutsDisabled@CHostedApplicationActivationManager@@UEAAJPEAH@Z
    virtual long ShouldActivateWithTimeoutsDisabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowSplashScreen@CHostedApplicationActivationManager@@UEAAJXZ
    virtual long ShowSplashScreen();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionToApp@CHostedApplicationActivationManager@@UEAAJXZ
    virtual long TransitionToApp();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateWindowFactory@CHostedApplicationActivationManager@@AEAAJPEAPEAUIInspectable@@@Z
    long _CreateWindowFactory(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureApplicationActivated@CHostedApplicationActivationManager@@AEAAJPEBG0PEAUIInspectable@@@Z
    long _EnsureApplicationActivated(unsigned short const *, unsigned short const *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaybeFireAppReady@CHostedApplicationActivationManager@@AEAAXXZ
    void _MaybeFireAppReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnConnectedStandbyChanged@CHostedApplicationActivationManager@@AEAAX_N@Z
    void _OnConnectedStandbyChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateCachedConnectedStandbyState@CHostedApplicationActivationManager@@AEAAX_N@Z
    void _UpdateCachedConnectedStandbyState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CHostedApplicationActivationManager@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedApplicationActivationManager@@EEAA@XZ
    virtual ~CHostedApplicationActivationManager();
};
