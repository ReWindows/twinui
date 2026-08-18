#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 15 member(s).
class CFileSavePickerUIBase {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFileSavePickerUIBase@@QEAA@VWeakRef@WRL@Microsoft@@@Z
    CFileSavePickerUIBase(::Microsoft::WRL::WeakRef);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFileNameChanged@CFileSavePickerUIBase@@UEAAJXZ
    virtual long OnFileNameChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSaveFileRequested@CFileSavePickerUIBase@@UEAAJXZ
    virtual long OnSaveFileRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetFileName@CFileSavePickerUIBase@@UEAAJPEAUHSTRING__@@PEAW4SetFileNameResult@Provider@Pickers@Storage@Windows@@@Z
    virtual long TrySetFileName(HSTRING__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FileNameChanged@CFileSavePickerUIBase@@UEAAJPEAU?$ITypedEventHandler@PEAVFileSavePickerUI@Provider@Pickers@Storage@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FileNameChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_TargetFileRequested@CFileSavePickerUIBase@@UEAAJPEAU?$ITypedEventHandler@PEAVFileSavePickerUI@Provider@Pickers@Storage@Windows@@PEAVTargetFileRequestedEventArgs@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_TargetFileRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AllowedFileTypes@CFileSavePickerUIBase@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_AllowedFileTypes(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FileName@CFileSavePickerUIBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_FileName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingsIdentifier@CFileSavePickerUIBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SettingsIdentifier(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CFileSavePickerUIBase@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CFileSavePickerUIBase@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FileNameChanged@CFileSavePickerUIBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FileNameChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_TargetFileRequested@CFileSavePickerUIBase@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_TargetFileRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFileSavePickerUIBase@@QEAA@XZ
    ~CFileSavePickerUIBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSinkRegistered@CFileSavePickerUIBase@@IEAAJXZ
    long _EnsureSinkRegistered();
};
