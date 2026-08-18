#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 25 member(s).
class CShellExperienceViewStateChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CShellExperienceViewStateChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShellExperienceViewStateChangedEventArgs@@QEAA@XZ
    CShellExperienceViewStateChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CShellExperienceViewStateChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CShellExperienceViewStateChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Name@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Name(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PropertySet@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long get_PropertySet(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_State@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAW4ShellExperienceViewState@Experience@Shell@Internal@Windows@@@Z
    virtual long get_State(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ViewWrapper@CShellExperienceViewStateChangedEventArgs@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    virtual long get_ViewWrapper(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper * *);
};
