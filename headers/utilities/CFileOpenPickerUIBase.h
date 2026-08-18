#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 22 member(s).
class CFileOpenPickerUIBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddFile@CFileOpenPickerUIBase@@UEAAJPEAUHSTRING__@@PEAUIStorageFile@Storage@Windows@@PEAW4AddFileResult@Provider@Pickers@45@@Z
    virtual long AddFile(HSTRING__*, ::Windows::Storage::IStorageFile *, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileOpenPickerUIBase@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileOpenPickerUIBase(::Microsoft::WRL::WeakRef);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAddFile@CFileOpenPickerUIBase@@UEAAJPEAUIStorageFile@Storage@Windows@@PEAE@Z
    virtual long CanAddFile(::Windows::Storage::IStorageFile *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsFile@CFileOpenPickerUIBase@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long ContainsFile(HSTRING__*, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFile@CFileOpenPickerUIBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long RemoveFile(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_Closing@CFileOpenPickerUIBase@@UEAAJPEAU?$ITypedEventHandler@PEAVFileOpenPickerUI@Provider@Pickers@Storage@Windows@@PEAVPickerClosingEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_Closing(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FileRemoved@CFileOpenPickerUIBase@@UEAAJPEAU?$ITypedEventHandler@PEAVFileOpenPickerUI@Provider@Pickers@Storage@Windows@@PEAVFileRemovedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FileRemoved(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedFileTypes@CFileOpenPickerUIBase@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_AllowedFileTypes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionMode@CFileOpenPickerUIBase@@UEAAJPEAW4FileSelectionMode@Provider@Pickers@Storage@Windows@@@Z
    virtual long get_SelectionMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingsIdentifier@CFileOpenPickerUIBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SettingsIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CFileOpenPickerUIBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CFileOpenPickerUIBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_Closing@CFileOpenPickerUIBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_Closing(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FileRemoved@CFileOpenPickerUIBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FileRemoved(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileOpenPickerUIBase@@UEAA@XZ
    virtual ~CFileOpenPickerUIBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CanAddValidatedItem@CFileOpenPickerUIBase@@IEAAJPEAUIStorageItem@Storage@Windows@@PEAE@Z
    long _CanAddValidatedItem(::Windows::Storage::IStorageItem *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetValidatedItem@CFileOpenPickerUIBase@@IEAAJPEAUIStorageFile@Storage@Windows@@PEAPEAUIStorageItem@34@@Z
    long _GetValidatedItem(::Windows::Storage::IStorageFile *, ::Windows::Storage::IStorageItem * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_ClosingSignaledHandler@CFileOpenPickerUIBase@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z
    static void s_ClosingSignaledHandler(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_OnClosing@CFileOpenPickerUIBase@@MEAAJHPEAPEAX@Z
    virtual long v_OnClosing(int, void * *);
};
