#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 2 member(s).
class ShellExperienceAppidRegistration {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ShellExperienceAppidRegistration@@QEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ShellExperienceRegistrationFlags@Experience@Shell@Internal@4@PEAUIViewEventDispatcher@ViewManagerInterop@894@@Z
    long Initialize(WindissectOpaque *, HSTRING__*, HSTRING__*, int, ::Windows::Internal::Shell::ViewManagerInterop::IViewEventDispatcher *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShellExperienceAppidRegistration@@QEAA@XZ
    ~ShellExperienceAppidRegistration();
};
