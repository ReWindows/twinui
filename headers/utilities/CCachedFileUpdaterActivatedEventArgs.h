#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 57 member(s).
class CCachedFileUpdaterActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedFileUpdaterActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedFileUpdaterActivatedEventArgs@@QEAA@XZ
    CCachedFileUpdaterActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetProvider(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedFileUpdaterActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedFileUpdaterActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CCachedFileUpdaterActivatedEventArgs@@QEAAJVWeakRef@WRL@Microsoft@@W4LOCAL_FILE_UPDATE_DISPOSITION@@@Z
    long RuntimeClassInitialize(::Microsoft::WRL::WeakRef, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProvider@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAUIUnknown@@@Z
    virtual long SetProvider(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CachedFileUpdaterUI@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAPEAUICachedFileUpdaterUI@Provider@Storage@Windows@@@Z
    virtual long get_CachedFileUpdaterUI(::Windows::Storage::Provider::ICachedFileUpdaterUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcidPrivate@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcidPrivate(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentSiteId@CCachedFileUpdaterActivatedEventArgs@@UEAAJU_GUID@@@Z
    virtual long put_ComponentSiteId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ObjectModelAcidPrivate@CCachedFileUpdaterActivatedEventArgs@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ObjectModelAcidPrivate(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedFileUpdaterActivatedEventArgs@@UEAA@XZ
    virtual ~CCachedFileUpdaterActivatedEventArgs();
};
