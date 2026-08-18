#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 34 member(s).
class CQuietHoursManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CQuietHoursManager@@QEAA@XZ
    CQuietHoursManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterExitQuietHoursTimeWindow@CQuietHoursManager@@UEAAJW4QuietHoursTimerId@@@Z
    virtual long EnterExitQuietHoursTimeWindow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CQuietHoursManager@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CQuietHoursManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCallsAllowed@CQuietHoursManager@@UEAAJPEAH@Z
    virtual long QueryCallsAllowed(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryEntryTime@CQuietHoursManager@@UEAAJPEAG@Z
    virtual long QueryEntryTime(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryExitTime@CQuietHoursManager@@UEAAJPEAG@Z
    virtual long QueryExitTime(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryIsPolicyControlled@CQuietHoursManager@@UEAAJPEAH@Z
    virtual long QueryIsPolicyControlled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryPreExitLeadTime@CQuietHoursManager@@UEAAJPEAG@Z
    virtual long QueryPreExitLeadTime(unsigned short *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryQuietHoursEnabled@CQuietHoursManager@@UEAAJPEAH@Z
    virtual long QueryQuietHoursEnabled(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CQuietHoursManager@@UEAAJXZ
    virtual long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CQuietHoursManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallsAllowed@CQuietHoursManager@@UEAAJH@Z
    virtual long SetCallsAllowed(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEntryTime@CQuietHoursManager@@UEAAJG@Z
    virtual long SetEntryTime(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExitTime@CQuietHoursManager@@UEAAJG@Z
    virtual long SetExitTime(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreExitLeadTime@CQuietHoursManager@@UEAAJG@Z
    virtual long SetPreExitLeadTime(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQuietHoursEnabled@CQuietHoursManager@@UEAAJH@Z
    virtual long SetQuietHoursEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CQuietHoursManager@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CQuietHoursManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CQuietHoursManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CancelTimers@CQuietHoursManager@@AEAAXXZ
    void _CancelTimers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EvaluatePolicy@CQuietHoursManager@@AEAAXXZ
    void _EvaluatePolicy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEffectiveUserPresence@CQuietHoursManager@@AEAA_NXZ
    bool _GetEffectiveUserPresence();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleUserPresenceChange@CQuietHoursManager@@AEAAX_N@Z
    void _HandleUserPresenceChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PersistSetting@CQuietHoursManager@@AEAAJW4QuietHoursSettingType@@@Z
    long _PersistSetting(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadRegistryValues@CQuietHoursManager@@AEAAXXZ
    void _ReadRegistryValues();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RefreshInternal@CQuietHoursManager@@AEAAX_N@Z
    void _RefreshInternal(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateQuietHoursWindow@CQuietHoursManager@@AEAAXXZ
    void _UpdateQuietHoursWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateTimers@CQuietHoursManager@@AEAAXW4QuietHoursTimerId@@@Z
    void _UpdateTimers(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_QuietHoursTimerProc@CQuietHoursManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z
    static void s_QuietHoursTimerProc(_TP_CALLBACK_INSTANCE *, void *, _TP_TIMER *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CQuietHoursManager@@EEAA@XZ
    virtual ~CQuietHoursManager();
};
