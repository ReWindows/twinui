#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 34 member(s).
class CInputHostLayout {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputHostLayout@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputHostLayout@@QEAA@XZ
    CInputHostLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIHMPosition@CInputHostLayout@@UEAAJPEAUtagRECT@@PEAW4IHM_DISPLAY_MODE@@@Z
    virtual long GetIHMPosition(tagRECT *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostHiding@CInputHostLayout@@UEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    virtual long InputHostHiding(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InputHostShowing@CInputHostLayout@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z
    virtual long InputHostShowing(HWND__*, tagRECT *, int, tagRECT *, tagRECT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputHostLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForIHMChanges@CInputHostLayout@@UEAAJPEAUIInputHostLayoutChanges@@PEAK@Z
    virtual long RegisterForIHMChanges(IInputHostLayoutChanges *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputHostLayout@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForIHMChanges@CInputHostLayout@@UEAAJK@Z
    virtual long UnregisterForIHMChanges(unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_ShutdownServices@CInputHostLayout@@MEAAJPEAUIProfferService@@@Z
    virtual long v_ShutdownServices(IProfferService *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputHostLayout@@MEAA@XZ
    virtual ~CInputHostLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureTaskScheduler@CInputHostLayout@@AEAAJXZ
    long _EnsureTaskScheduler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ProcessNextNotification@CInputHostLayout@@AEAAJXZ
    long _ProcessNextNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueNotification@CInputHostLayout@@AEAAJPEBUIHM_NOTIFICATION_DATA@@@Z
    long _QueueNotification(IHM_NOTIFICATION_DATA const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendWindowNotifications@CInputHostLayout@@AEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z
    long _SendWindowNotifications(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_s_ProcessNotificationQueue@CInputHostLayout@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void _s_ProcessNotificationQueue(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
};
