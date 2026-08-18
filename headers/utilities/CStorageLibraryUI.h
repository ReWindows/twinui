#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 37 member(s).
class CStorageLibraryUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStorageLibraryUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStorageLibraryUI@@QEAA@XZ
    CStorageLibraryUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelAddFolder@CStorageLibraryUI@@UEAAJXZ
    virtual long CancelAddFolder();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CStorageLibraryUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CStorageLibraryUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CStorageLibraryUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CStorageLibraryUI@@UEAAJPEAUIShellItem@@K@Z
    virtual long Initialize(IShellItem *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PickFolder@CStorageLibraryUI@@UEAAJIPEAUHSTRING__@@0PEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long PickFolder(unsigned int, HSTRING__*, HSTRING__*, ::Windows::Storage::IStorageFolder * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStorageLibraryUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStorageLibraryUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestAddFolderAsync@CStorageLibraryUI@@UEAAJPEAPEAU?$IAsyncOperation@PEAVStorageFolder@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long RequestAddFolderAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestRemoveFolderAsync@CStorageLibraryUI@@UEAAJPEAUIStorageFolder@Storage@Windows@@PEAPEAU?$IAsyncOperation@_N@Foundation@4@@Z
    virtual long RequestRemoveFolderAsync(::Windows::Storage::IStorageFolder *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAddFolderSuggestions@CStorageLibraryUI@@UEAAJPEAU?$IVectorView@PEAUIStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@IW4AddFolderSuggestionLibraryType@AddFolderSuggestion@Internal@5@PEAUHSTRING__@@PEAW4AddFolderSuggestionCompleteType@785@PEAPEAU2345@@Z
    virtual long ShowAddFolderSuggestions(WindissectOpaque *, unsigned int, int, HSTRING__*, int *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_DefinitionChanged@CStorageLibraryUI@@UEAAJPEAU?$ITypedEventHandler@PEAVStorageLibrary@Storage@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_DefinitionChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Folders@CStorageLibraryUI@@UEAAJPEAPEAU?$IObservableVector@PEAVStorageFolder@Storage@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Folders(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SaveFolder@CStorageLibraryUI@@UEAAJPEAPEAUIStorageFolder@Storage@Windows@@@Z
    virtual long get_SaveFolder(::Windows::Storage::IStorageFolder * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_DefinitionChanged@CStorageLibraryUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_DefinitionChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStorageLibraryUI@@UEAA@XZ
    virtual ~CStorageLibraryUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnModalExperienceEvent@CStorageLibraryUI@@AEAAJPEAUIModalWindowExperienceManager@ModalExperience@Shell@Internal@Windows@@PEAUIModalExperienceEventArgs@3456@@Z
    long OnModalExperienceEvent(::Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *, ::Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddDialogButtons@CStorageLibraryUI@@AEAAJXZ
    long _AddDialogButtons();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShowDialog@CStorageLibraryUI@@AEAAJPEAUHWND__@@PEAUIShellItem@@1PEA_N@Z
    long _ShowDialog(HWND__*, IShellItem *, IShellItem *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_InitializePickerParams@CStorageLibraryUI@@CAJPEAUIShellItem@@PEAVCPickerParameters@@@Z
    static long s_InitializePickerParams(IShellItem *, CPickerParameters *);
};
