#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CLockScreenCallBroker {
public:
    class ThumbnailVisualRecord;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationChanged@CLockScreenCallBroker@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z
    virtual long ApplicationChanged(IImmersiveApplication *, int, HWND__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLockScreenCallBroker@@QEAA@XZ
    CLockScreenCallBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CLockScreenCallBroker@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCall@CLockScreenCallBroker@@UEAAJAEBU_GUID@@U_FILETIME@@@Z
    virtual long EndCall(_GUID const &, _FILETIME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CLockScreenCallBroker@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CLockScreenCallBroker@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnlocking@CLockScreenCallBroker@@UEAAJPEBG0@Z
    virtual long OnUnlocking(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetCallState@CLockScreenCallBroker@@UEAAJAEBU_GUID@@@Z
    virtual long ResetCallState(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallTitle@CLockScreenCallBroker@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long SetCallTitle(_GUID const &, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCall@CLockScreenCallBroker@@UEAAJAEBU_GUID@@PEBG1@Z
    virtual long StartCall(_GUID const &, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WorkAreaChanged@CLockScreenCallBroker@@UEAAJKPEBUtagRECT@@@Z
    virtual long WorkAreaChanged(unsigned long, tagRECT const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLockScreenCallBroker@@UEAA@XZ
    virtual ~CLockScreenCallBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateLayoutService@CLockScreenCallBroker@@AEAAJXZ
    long _CreateLayoutService();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DisposeCallUI@CLockScreenCallBroker@@AEAAX_N@Z
    void _DisposeCallUI(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetCallState@CLockScreenCallBroker@@AEAAXW4ResetCallStateFlags@@@Z
    void _ResetCallState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDeferralTimer@CLockScreenCallBroker@@AEAAXU_FILETIME@@@Z
    void _SetDeferralTimer(_FILETIME);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ValidateConnectionGuid@CLockScreenCallBroker@@AEBA_NAEBU_GUID@@@Z
    bool _ValidateConnectionGuid(_GUID const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_DeferredCallUIDisconnectTimerCallback@CLockScreenCallBroker@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_DeferredCallUIDisconnectTimerCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_WndProc@CLockScreenCallBroker@@EEAA_JPEAUHWND__@@I_K_J@Z
    virtual int64_t v_WndProc(HWND__*, unsigned int, uint64_t, int64_t);
};
