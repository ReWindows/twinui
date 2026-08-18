#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 38 member(s).
class CCachedFileUpdaterUI {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CCachedFileUpdaterUI@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CCachedFileUpdaterUI@@QEAA@VWeakRef@WRL@Microsoft@@W4LOCAL_FILE_UPDATE_DISPOSITION@@@Z
    CCachedFileUpdaterUI(::Microsoft::WRL::WeakRef, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CCachedFileUpdaterUI@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CCachedFileUpdaterUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CCachedFileUpdaterUI@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowing@CCachedFileUpdaterUI@@UEAAJXZ
    virtual long OnShowing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShown@CCachedFileUpdaterUI@@UEAAJXZ
    virtual long OnShown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUpdateRequested@CCachedFileUpdaterUI@@UEAAJPEAUIStorageFile@Storage@Windows@@@Z
    virtual long OnUpdateRequested(::Windows::Storage::IStorageFile *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CCachedFileUpdaterUI@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CCachedFileUpdaterUI@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyFileUpdateRequestedEventSink@CCachedFileUpdaterUI@@UEAAJXZ
    virtual long VerifyFileUpdateRequestedEventSink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_FileUpdateRequested@CCachedFileUpdaterUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCachedFileUpdaterUI@Provider@Storage@Windows@@PEAVFileUpdateRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_FileUpdateRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_UIRequested@CCachedFileUpdaterUI@@UEAAJPEAU?$ITypedEventHandler@PEAVCachedFileUpdaterUI@Provider@Storage@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_UIRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Title@CCachedFileUpdaterUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Title(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UIStatus@CCachedFileUpdaterUI@@UEAAJPEAW4UIStatus@Provider@Storage@Windows@@@Z
    virtual long get_UIStatus(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_UpdateTarget@CCachedFileUpdaterUI@@UEAAJPEAW4CachedFileTarget@Provider@Storage@Windows@@@Z
    virtual long get_UpdateTarget(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Title@CCachedFileUpdaterUI@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Title(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_FileUpdateRequested@CCachedFileUpdaterUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_FileUpdateRequested(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_UIRequested@CCachedFileUpdaterUI@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_UIRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CCachedFileUpdaterUI@@UEAA@XZ
    virtual ~CCachedFileUpdaterUI();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSinkRegistered@CCachedFileUpdaterUI@@AEAAJXZ
    long _EnsureSinkRegistered();
};
