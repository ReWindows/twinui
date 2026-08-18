#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 16 member(s).
class EDPNotificationHost {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EDPNotificationHost@@QEAA@XZ
    EDPNotificationHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@EDPNotificationHost@@UEAAJPEAUIPopupWindow@@PEAUIPopupCommand@@@Z
    virtual long Invoke(IPopupWindow *, IPopupCommand *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListenedEvent@EDPNotificationHost@@UEAAXPEAVElement@DirectUI@@PEAUEvent@3@@Z
    virtual void OnListenedEvent(::DirectUI::Element *, ::DirectUI::Event *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@EDPNotificationHost@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEntepriseIdChanged@EDPNotificationHost@@UEAAJK@Z
    virtual long ProcessEntepriseIdChanged(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@EDPNotificationHost@@UEAAJPEAUIEnterpriseIdChangeNotification@@PEAK@Z
    virtual long Register(IEnterpriseIdChangeNotification *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowOverrideDialog@EDPNotificationHost@@UEAAJPEAUHWND__@@W4EDP_POLICY_RESULT@@PEBGPEAUIAsyncCallback@@@Z
    virtual long ShowOverrideDialog(HWND__*, int, unsigned short const *, IAsyncCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@EDPNotificationHost@@UEAAJK@Z
    virtual long Unregister(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowEnterpriseIdChanged@EDPNotificationHost@@UEAAJPEAUHWND__@@@Z
    virtual long WindowEnterpriseIdChanged(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowShowEnterpriseIndicatorChanged@EDPNotificationHost@@UEAAJPEAUHWND__@@@Z
    virtual long WindowShowEnterpriseIndicatorChanged(HWND__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EDPNotificationHost@@UEAA@XZ
    virtual ~EDPNotificationHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateDialog@EDPNotificationHost@@AEAAJW4EDP_POLICY_RESULT@@PEBG@Z
    long _CreateDialog(int, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowOverrideDialog@EDPNotificationHost@@AEAAJPEAUHWND__@@W4EDP_POLICY_RESULT@@PEBG@Z
    long _ShowOverrideDialog(HWND__*, int, unsigned short const *);
};
