#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 27 member(s).
class CLayoutManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CLayoutManager@@QEAA@XZ
    CLayoutManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisplaySettingsChange@CLayoutManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z
    virtual long DisplaySettingsChange(IImmersiveMonitor *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandWorkAreaAt@CLayoutManager@@UEAAJ_KPEAPEAUIBandWorkArea@@@Z
    virtual long GetBandWorkAreaAt(uint64_t, IBandWorkArea * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBandWorkAreaCount@CLayoutManager@@UEAA_KXZ
    virtual uint64_t GetBandWorkAreaCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImmersiveShellWorkArea@CLayoutManager@@UEAAJPEAUtagRECT@@@Z
    virtual long GetImmersiveShellWorkArea(tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerWorkAreaForBand@CLayoutManager@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetInnerWorkAreaForBand(unsigned long, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOuterWorkAreaForBand@CLayoutManager@@UEAAJKPEAUtagRECT@@@Z
    virtual long GetOuterWorkAreaForBand(unsigned long, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateWorkArea@CLayoutManager@@UEAAJK@Z
    virtual long InvalidateWorkArea(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MonitorAdded@CLayoutManager@@UEAAJPEAUIImmersiveMonitor@@@Z
    virtual long MonitorAdded(IImmersiveMonitor *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDelayedInitialization@CLayoutManager@@UEAAJXZ
    virtual long PerformDelayedInitialization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CLayoutManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CLayoutManager@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForLayoutChanges@CLayoutManager@@UEAAJKPEAUIImmersiveLayoutChanges@@PEAK@Z
    virtual long RegisterForLayoutChanges(unsigned long, IImmersiveLayoutChanges *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForSyncLayoutChanges@CLayoutManager@@UEAAJKPEAUIImmersiveLayoutChanges@@PEAK@Z
    virtual long RegisterForSyncLayoutChanges(unsigned long, IImmersiveLayoutChanges *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterLayoutClient@CLayoutManager@@UEAAJKPEAUIImmersiveLayoutClient@@PEAK@Z
    virtual long RegisterLayoutClient(unsigned long, IImmersiveLayoutClient *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CLayoutManager@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CLayoutManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForLayoutChanges@CLayoutManager@@UEAAJK@Z
    virtual long UnregisterForLayoutChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterForSyncLayoutChanges@CLayoutManager@@UEAAJK@Z
    virtual long UnregisterForSyncLayoutChanges(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterLayoutClient@CLayoutManager@@UEAAJK@Z
    virtual long UnregisterLayoutClient(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CLayoutManager@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetBandWorkArea@CLayoutManager@@AEAAJW4ZBID@@PEAPEAUIBandWorkArea@@@Z
    long _GetBandWorkArea(int, IBandWorkArea * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CLayoutManager@@AEAAJPEAUIServiceProvider@@@Z
    long _Initialize(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateWorkArea@CLayoutManager@@AEAAJW4ZBID@@@Z
    long _UpdateWorkArea(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLayoutManager@@EEAA@XZ
    virtual ~CLayoutManager();
};
