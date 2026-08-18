#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinui.dll by Windissect. 14 member(s).
class ModalExperienceDialog {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModalExperienceDialog@@QEAA@XZ
    ModalExperienceDialog();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismiss@ModalExperienceDialog@@UEAAJXZ
    virtual long OnDismiss();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDismissed@ModalExperienceDialog@@QEAAXXZ
    void OnDismissed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFramePositionChanged@ModalExperienceDialog@@QEAAXXZ
    void OnFramePositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPinnedChanged@ModalExperienceDialog@@UEAAJH@Z
    virtual long OnPinnedChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplashScreenDismissed@ModalExperienceDialog@@QEAAJXZ
    long OnSplashScreenDismissed();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ModalExperienceDialog@@UEAA@XZ
    virtual ~ModalExperienceDialog();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeNewTargetOwner@ModalExperienceDialog@@AEAAJIPEAPEAUIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@Z
    long ComputeNewTargetOwner(unsigned int, ::Windows::Internal::Shell::Desktop::ViewManagerInterop::IObjectWithWindow * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissExperience@ModalExperienceDialog@@AEAAXXZ
    void DismissExperience();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleChainLinkEventInternal@ModalExperienceDialog@@EEAAXPEAUIChainLink@Chaining@Shell@Internal@Windows@@W4ChainLinkEventTypeInternal@?$ChainLink@VObjectWithSrwLock@@@3456@@Z
    virtual void HandleChainLinkEventInternal(::Windows::Internal::Shell::Chaining::IChainLink *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshModalState@ModalExperienceDialog@@AEAAJXZ
    long RefreshModalState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?v_GetClassName@ModalExperienceDialog@@EEBAPEBDXZ
    virtual char const * v_GetClassName() const;
};
