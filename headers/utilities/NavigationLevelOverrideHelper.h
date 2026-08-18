#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 4 member(s).
namespace ShellExperienceHelpers {
class NavigationLevelOverrideHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long DisableOverride(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z
    long EnableOverride(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z
    long Navigate(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigateView@NavigationLevelOverrideHelper@ShellExperienceHelpers@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z
    long NavigateView(::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, int);
};
} // namespace ShellExperienceHelpers
