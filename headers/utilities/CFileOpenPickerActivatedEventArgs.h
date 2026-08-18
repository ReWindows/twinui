#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 64 member(s).
class CFileOpenPickerActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileOpenPickerActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileOpenPickerActivatedEventArgs@@QEAA@XZ
    CFileOpenPickerActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileOpenPickerActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@CFileOpenPickerActivatedEventArgs@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetProvider(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileOpenPickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileOpenPickerActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileOpenPickerActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileOpenPickerActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileOpenPickerActivatedEventArgs@@QEAAJVWeakRef@WRL@Microsoft@@PEBGW4HostedActivationType@@@Z
    long RuntimeClassInitialize(::Microsoft::WRL::WeakRef, unsigned short const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProvider@CFileOpenPickerActivatedEventArgs@@UEAAJPEAUIUnknown@@@Z
    virtual long SetProvider(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@CFileOpenPickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@CFileOpenPickerActivatedEventArgs@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileOpenPickerUI@CFileOpenPickerActivatedEventArgs@@UEAAJPEAPEAUIFileOpenPickerUI@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_FileOpenPickerUI(::Windows::Storage::Pickers::Provider::IFileOpenPickerUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcidPrivate@CFileOpenPickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcidPrivate(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentSiteId@CFileOpenPickerActivatedEventArgs@@UEAAJU_GUID@@@Z
    virtual long put_ComponentSiteId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ObjectModelAcidPrivate@CFileOpenPickerActivatedEventArgs@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ObjectModelAcidPrivate(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileOpenPickerActivatedEventArgs@@UEAA@XZ
    virtual ~CFileOpenPickerActivatedEventArgs();
};
