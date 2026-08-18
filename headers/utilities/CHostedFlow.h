#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 13 member(s).
class CHostedFlow {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CHostedFlow@@QEAA@XZ
    CHostedFlow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissUI@CHostedFlow@@UEAAJXZ
    virtual long DismissUI();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationReady@CHostedFlow@@UEAAXXZ
    virtual void OnHostedApplicationReady();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHostedApplicationTerminated@CHostedFlow@@UEAAXW4APP_TERMINATION_REASON@@@Z
    virtual void OnHostedApplicationTerminated(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWindowHosted@CHostedFlow@@UEAAXPEAUHWND__@@@Z
    virtual void OnWindowHosted(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryObject@CHostedFlow@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long QueryObject(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CHostedFlow@@QEAAJPEBGPEAUHSTRING__@@PEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAUIHostedFlyoutActivationInfo@Actions@56@@Z
    long Show(unsigned short const *, HSTRING__*, ::Windows::ApplicationModel::Activation::IActivatedEventArgs *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CHostedFlow@@UEAA@XZ
    virtual ~CHostedFlow();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDestroyEvent@CHostedFlow@@AEAAJPEAUIPopupWindow@@@Z
    long _OnDestroyEvent(IPopupWindow *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDismissEvent@CHostedFlow@@AEAAJPEAUIPopupWindow@@@Z
    long _OnDismissEvent(IPopupWindow *);
};
