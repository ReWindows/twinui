#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 20 member(s).
class CSplashScreenTimer {
public:
    class ThreadSafeData;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppReady@CSplashScreenTimer@@UEAAJXZ
    virtual long AppReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplaunchAnimationCompleted@CSplashScreenTimer@@UEAAJXZ
    virtual long ApplaunchAnimationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplaunchStarted@CSplashScreenTimer@@UEAAJW4SPLASHSCREEN_FLAGS@@@Z
    virtual long ApplaunchStarted(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSplashScreenTimer@@QEAA@XZ
    CSplashScreenTimer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelTimers@CSplashScreenTimer@@UEAAJXZ
    virtual long CancelTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceShow@CSplashScreenTimer@@UEAAJXZ
    virtual long ForceShow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSplashScreenTimer@@UEAAJPEAUISplashScreen@@PEAUISplashScreenUI@@@Z
    virtual long Initialize(ISplashScreen *, ISplashScreenUI *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSynchronizationName@CSplashScreenTimer@@UEAAJPEBG@Z
    virtual long SetSynchronizationName(unsigned short const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Dismiss@CSplashScreenTimer@@AEAAJXZ
    long _Dismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MaxLifetimeTimerFired@CSplashScreenTimer@@AEAAJXZ
    long _MaxLifetimeTimerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MinLifetimeTimerFired@CSplashScreenTimer@@AEAAJXZ
    long _MinLifetimeTimerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowImage@CSplashScreenTimer@@AEAAJXZ
    long _ShowImage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowTimerFired@CSplashScreenTimer@@AEAAJXZ
    long _ShowTimerFired();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_TryToDismiss@CSplashScreenTimer@@AEAAJXZ
    long _TryToDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WndProc@CSplashScreenTimer@@AEAA_JPEAUHWND__@@I_K_J@Z
    int64_t _WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_WndProc@CSplashScreenTimer@@CA_JPEAUHWND__@@I_K_J@Z
    static int64_t s_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSplashScreenTimer@@EEAA@XZ
    virtual ~CSplashScreenTimer();
};
