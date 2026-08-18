#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 33 member(s).
class CActionExecutionBroker {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CActionExecutionBroker@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CActionExecutionBroker@@QEAA@XZ
    CActionExecutionBroker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@CActionExecutionBroker@@UEAAJPEAUIActionArgs@Actions@ApplicationModel@Windows@@@Z
    virtual long Execute(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CActionExecutionBroker@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CActionExecutionBroker@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CActionExecutionBroker@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CActionExecutionBroker@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CActionExecutionBroker@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CActionExecutionBroker@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncAssoc@CActionExecutionBroker@@UEAAJPEAUHSTRING__@@@Z
    virtual long SyncAssoc(HSTRING__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CActionExecutionBroker@@UEAA@XZ
    virtual ~CActionExecutionBroker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteAction@CActionExecutionBroker@@AEAAJPEAUHSTRING__@@0PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIActionActivationInfo@Actions@56@0@Z
    long _ExecuteAction(HSTRING__*, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ExecuteDefault@CActionExecutionBroker@@AEAAJPEAUHSTRING__@@PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIActionActivationInfo@Actions@56@0@Z
    long _ExecuteDefault(HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FileActivateInBackStack@CActionExecutionBroker@@AEAAJPEBGPEAUHSTRING__@@PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIActionActivationInfo@Actions@56@@Z
    long _FileActivateInBackStack(unsigned short const *, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_EnsureUserChosenAssociation@CActionExecutionBroker@@CAJPEBGPEAUHWND__@@0W4IMMERSIVE_OPENWITH_FLAGS@@PEAPEAG@Z
    static long s_EnsureUserChosenAssociation(unsigned short const *, HWND__*, unsigned short const *, int, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetProgIdFromAssoc@CActionExecutionBroker@@CAJPEBGPEAPEAG@Z
    static long s_GetProgIdFromAssoc(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_GetProgIdFromRegistration@CActionExecutionBroker@@CAJPEBGPEAPEAG@Z
    static long s_GetProgIdFromRegistration(unsigned short const *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ShowOpenWith@CActionExecutionBroker@@CAJPEBGPEAUHWND__@@W4IMMERSIVE_OPENWITH_FLAGS@@PEAPEAG@Z
    static long s_ShowOpenWith(unsigned short const *, HWND__*, int, unsigned short * *);
};
