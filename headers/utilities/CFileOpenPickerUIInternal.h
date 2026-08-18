#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 50 member(s).
class CFileOpenPickerUIInternal {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CFileOpenPickerUIInternal@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileOpenPickerUIInternal@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileOpenPickerUIInternal(::Microsoft::WRL::WeakRef);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearCurrentLocation@CFileOpenPickerUIInternal@@UEAAJXZ
    virtual long ClearCurrentLocation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CFileOpenPickerUIInternal@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CFileOpenPickerUIInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CFileOpenPickerUIInternal@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentLocationRequested@CFileOpenPickerUIInternal@@UEAAJXZ
    virtual long OnCurrentLocationRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLocationReset@CFileOpenPickerUIInternal@@UEAAJXZ
    virtual long OnLocationReset();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CFileOpenPickerUIInternal@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CFileOpenPickerUIInternal@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CurrentLocationRequested@CFileOpenPickerUIInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVFileOpenPickerUIInternal@Provider@Pickers@Storage@Windows@@PEAVCurrentLocationRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CurrentLocationRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_LocationReset@CFileOpenPickerUIInternal@@UEAAJPEAU?$ITypedEventHandler@PEAVFileOpenPickerUIInternal@Provider@Pickers@Storage@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_LocationReset(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FolderMode@CFileOpenPickerUIInternal@@UEAAJPEAE@Z
    virtual long get_FolderMode(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartLocation@CFileOpenPickerUIInternal@@UEAAJPEAW4StartLocation@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_StartLocation(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StartLocationPath@CFileOpenPickerUIInternal@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_StartLocationPath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewMode@CFileOpenPickerUIInternal@@UEAAJPEAW4PickerViewMode@Pickers@Storage@Windows@@@Z
    virtual long get_ViewMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CurrentLocationRequested@CFileOpenPickerUIInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CurrentLocationRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_LocationReset@CFileOpenPickerUIInternal@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_LocationReset(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileOpenPickerUIInternal@@UEAA@XZ
    virtual ~CFileOpenPickerUIInternal();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureViewSinkRegistered@CFileOpenPickerUIInternal@@AEAAJXZ
    long _EnsureViewSinkRegistered();
};
