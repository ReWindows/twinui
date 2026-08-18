#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 6 member(s).
class SingleViewLightDismissHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long RegisterWithLightDismiss(int, ILightDismissNotification *, ::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterWithLightDismiss@SingleViewLightDismissHelper@@QEAAXXZ
    void UnregisterWithLightDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLightDismiss@SingleViewLightDismissHelper@@QEAAJW4LIGHT_DISMISS_FLAGS@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long UpdateLightDismiss(int, ::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SingleViewLightDismissHelper@@QEAA@XZ
    ~SingleViewLightDismissHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureLightDismissProvider@SingleViewLightDismissHelper@@AEAAJXZ
    long EnsureLightDismissProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalRegisterWithLightDismiss@SingleViewLightDismissHelper@@AEAAJW4LIGHT_DISMISS_FLAGS@@PEAUILightDismissNotification@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z
    long InternalRegisterWithLightDismiss(int, ILightDismissNotification *, ::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *);
};
