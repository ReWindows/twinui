#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 44 member(s).
class CFileSavePickerUIInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileSavePickerUIInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileSavePickerUIInternal@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileSavePickerUIInternal(::Microsoft::WRL::WeakRef);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileSavePickerUIInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileSavePickerUIInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileSavePickerUIInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentLocationRequested@CFileSavePickerUIInternal@@UEAAJXZ
    virtual long OnCurrentLocationRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLocationReset@CFileSavePickerUIInternal@@UEAAJXZ
    virtual long OnLocationReset();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileSavePickerUIInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileSavePickerUIInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LocationReset@CFileSavePickerUIInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVFileSavePickerUIInternal@Provider@Pickers@Storage@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LocationReset(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartLocation@CFileSavePickerUIInternal@@UEAAJPEAW4StartLocation@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_StartLocation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartLocationPath@CFileSavePickerUIInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartLocationPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LocationReset@CFileSavePickerUIInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LocationReset(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSavePickerUIInternal@@UEAA@XZ
    virtual ~CFileSavePickerUIInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureViewSinkRegistered@CFileSavePickerUIInternal@@AEAAJXZ
    long _EnsureViewSinkRegistered();
};
