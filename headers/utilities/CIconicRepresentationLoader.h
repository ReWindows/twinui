#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 17 member(s).
class CIconicRepresentationLoader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CIconicRepresentationLoader@@QEAA@XZ
    CIconicRepresentationLoader();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppRemovedFromBackstack@CIconicRepresentationLoader@@UEAAJPEAUIImmersiveApplication@@W4SWITCHER_REMOVAL_REASON@@@Z
    virtual long OnAppRemovedFromBackstack(IImmersiveApplication *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessage@CIconicRepresentationLoader@@UEAAJI_K_J@Z
    virtual long OnMessage(unsigned int, uint64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PublishServices@CIconicRepresentationLoader@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z
    virtual long PublishServices(IServiceProvider *, IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryService@CIconicRepresentationLoader@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultColor@CIconicRepresentationLoader@@UEAAJPEAUHWND__@@@Z
    virtual long SetDefaultColor(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownServices@CIconicRepresentationLoader@@UEAAJPEAUIProfferService@@@Z
    virtual long ShutdownServices(IProfferService *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SubscribeToServices@CIconicRepresentationLoader@@UEAAJPEAUIServiceProvider@@@Z
    virtual long SubscribeToServices(IServiceProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsubscribeFromServices@CIconicRepresentationLoader@@UEAAJPEAUIServiceProvider@@@Z
    virtual long UnsubscribeFromServices(IServiceProvider *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetColor@CIconicRepresentationLoader@@CAJPEAUIShellItem@@PEAK@Z
    static long _GetColor(IShellItem *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetShellItemFromAppId@CIconicRepresentationLoader@@CAJPEAUHWND__@@PEAPEAUIShellItem@@@Z
    static long _GetShellItemFromAppId(HWND__*, IShellItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestFromThumbnailCache@CIconicRepresentationLoader@@CAJPEAUHWND__@@H@Z
    static long _RequestFromThumbnailCache(HWND__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RequestImmersiveWindowIconic@CIconicRepresentationLoader@@AEAAXPEAUHWND__@@AEBUtagSIZE@@@Z
    void _RequestImmersiveWindowIconic(HWND__*, tagSIZE const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIconicRepresentationLoader@@EEAA@XZ
    virtual ~CIconicRepresentationLoader();
};
