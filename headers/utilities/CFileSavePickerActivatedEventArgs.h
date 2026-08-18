#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 65 member(s).
class CFileSavePickerActivatedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileSavePickerActivatedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileSavePickerActivatedEventArgs@@QEAA@XZ
    CFileSavePickerActivatedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileSavePickerActivatedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProvider@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetProvider(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileSavePickerActivatedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileSavePickerActivatedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSavePickerActivatedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CFileSavePickerActivatedEventArgs@@QEAAJVWeakRef@WRL@Microsoft@@PEBGPEAUHSTRING__@@W4HostedActivationType@@@Z
    long RuntimeClassInitialize(::Microsoft::WRL::WeakRef, unsigned short const *, HSTRING__*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProvider@CFileSavePickerActivatedEventArgs@@UEAAJPEAUIUnknown@@@Z
    virtual long SetProvider(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CallerPackageFamilyName@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_CallerPackageFamilyName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ComponentSiteId@CFileSavePickerActivatedEventArgs@@UEAAJPEAU_GUID@@@Z
    virtual long get_ComponentSiteId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnterpriseId@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_EnterpriseId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileSavePickerUI@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUIFileSavePickerUI@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_FileSavePickerUI(::Windows::Storage::Pickers::Provider::IFileSavePickerUI * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ObjectModelAcidPrivate@CFileSavePickerActivatedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ObjectModelAcidPrivate(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ComponentSiteId@CFileSavePickerActivatedEventArgs@@UEAAJU_GUID@@@Z
    virtual long put_ComponentSiteId(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ObjectModelAcidPrivate@CFileSavePickerActivatedEventArgs@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_ObjectModelAcidPrivate(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSavePickerActivatedEventArgs@@UEAA@XZ
    virtual ~CFileSavePickerActivatedEventArgs();
};
