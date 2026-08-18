#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 11 member(s).
namespace Windows::ApplicationModel::Actions {
class CHostedFlyoutActivationInfoImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseWindow@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@QEAAJXZ
    long CloseWindow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@QEAAJXZ
    long DismissUI();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowSize@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAH0@Z
    virtual long GetWindowSize(int *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationReady@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJXZ
    virtual long OnHostedApplicationReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowCreated@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAUIHostedFlyoutOperation@234@@Z
    virtual long OnWindowCreated(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDestroyed@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJXZ
    virtual long OnWindowDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowDismissed@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJXZ
    virtual long OnWindowDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowHosted@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJXZ
    virtual long OnWindowHosted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectionRect@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAURect@Foundation@4@@Z
    virtual long get_SelectionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WindowPlacement@CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@UEAAJPEAW4Placement@Popups@UI@4@@Z
    virtual long get_WindowPlacement(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedFlyoutActivationInfoImpl@Actions@ApplicationModel@Windows@@QEAA@XZ
    ~CHostedFlyoutActivationInfoImpl();
};
} // namespace Windows::ApplicationModel::Actions
